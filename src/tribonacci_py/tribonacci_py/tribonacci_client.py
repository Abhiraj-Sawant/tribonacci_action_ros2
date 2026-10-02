
import rclpy

from rclpy.node import Node
from rclpy.action import ActionClient

from tribonacci_interfaces.action import Tribonacci


class TribonacciClient(Node):

    def __init__(self):
        super().__init__('tribonacci_client')

        self.client = ActionClient(
            self,
            Tribonacci,
            'tribonacci'
        )

        self.goal_handle = None
        self.cancel_requested = False

    def send_goal(self):

        self.client.wait_for_server()

        goal = Tribonacci.Goal()
        goal.start = True

        self.get_logger().info(
            'Starting continuous Tribonacci generation'
        )

        future = self.client.send_goal_async(
            goal,
            feedback_callback=self.feedback_callback
        )

        rclpy.spin_until_future_complete(self, future)

        self.goal_handle = future.result()

        if not self.goal_handle.accepted:
            self.get_logger().error('Goal rejected')
            return

        self.get_logger().info('Goal accepted')

        result_future = self.goal_handle.get_result_async()

        rclpy.spin_until_future_complete(self, result_future)

        result = result_future.result()

        self.get_logger().info(
            f'Final sequence: {result.result.sequence}'
        )

    def feedback_callback(self, feedback_msg):

        feedback = feedback_msg.feedback

        print(
            f'Tribonacci[{feedback.current_index}] = '
            f'{feedback.current_number}',
            flush=True
        )

    def stop_generation(self):

        if self.goal_handle is not None and not self.cancel_requested:

            self.cancel_requested = True

            self.get_logger().info(
                'Sending cancellation request...'
            )

            future = self.goal_handle.cancel_goal_async()

            rclpy.spin_until_future_complete(self, future)


def main(args=None):

    rclpy.init(args=args)

    node = TribonacciClient()

    try:
        node.send_goal()

    except KeyboardInterrupt:
        node.stop_generation()

    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
