
#include <functional>
#include <memory>
#include <thread>
#include <chrono>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "tribonacci_interfaces/action/tribonacci.hpp"

using namespace std::chrono_literals;

class TribonacciServer : public rclcpp::Node
{
public:

    using Tribonacci =
        tribonacci_interfaces::action::Tribonacci;

    using GoalHandle =
        rclcpp_action::ServerGoalHandle<Tribonacci>;

    TribonacciServer() : Node("tribonacci_server")
    {
        using namespace std::placeholders;

        server_ = rclcpp_action::create_server<Tribonacci>(
            this,
            "tribonacci",
            std::bind(&TribonacciServer::goal_callback, this, _1, _2),
            std::bind(&TribonacciServer::cancel_callback, this, _1),
            std::bind(&TribonacciServer::accepted_callback, this, _1)
        );

        RCLCPP_INFO(get_logger(), "Tribonacci Action Server Started");
    }

private:

    rclcpp_action::Server<Tribonacci>::SharedPtr server_;

    rclcpp_action::GoalResponse goal_callback(
        const rclcpp_action::GoalUUID &,
        std::shared_ptr<const Tribonacci::Goal> goal)
    {
        if (!goal->start)
            return rclcpp_action::GoalResponse::REJECT;

        RCLCPP_INFO(get_logger(), "Goal received");

        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    rclcpp_action::CancelResponse cancel_callback(
        const std::shared_ptr<GoalHandle>)
    {
        RCLCPP_INFO(get_logger(), "Cancellation requested");

        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void accepted_callback(const std::shared_ptr<GoalHandle> handle)
    {
        std::thread(
            std::bind(&TribonacciServer::execute, this, handle)
        ).detach();
    }

    void execute(const std::shared_ptr<GoalHandle> handle)
    {
        auto feedback = std::make_shared<Tribonacci::Feedback>();
        auto result = std::make_shared<Tribonacci::Result>();

        int64_t a = 0, b = 1, c = 1;
        int index = 0;

        while (rclcpp::ok())
        {
            if (handle->is_canceling())
            {
                handle->canceled(result);

                RCLCPP_INFO(
                    get_logger(),
                    "Tribonacci generation stopped."
                );

                return;
            }

            int64_t number;

            if (index == 0)
                number = 0;
            else if (index == 1 || index == 2)
                number = 1;
            else
            {
                number = a + b + c;
                a = b;
                b = c;
                c = number;
            }

            result->sequence.push_back(number);

            feedback->current_index = index;
            feedback->current_number = number;

            handle->publish_feedback(feedback);

            RCLCPP_INFO(
                get_logger(),
                "Term %d = %ld",
                index,
                number
            );

            index++;

            std::this_thread::sleep_for(500ms);
        }

        if (handle->is_active())
            handle->abort(result);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    auto node = std::make_shared<TribonacciServer>();

    rclcpp::spin(node);

    rclcpp::shutdown();

    return 0;
}
