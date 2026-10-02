// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tribonacci_interfaces:action/Tribonacci.idl
// generated code does not contain a copyright notice

#ifndef TRIBONACCI_INTERFACES__ACTION__DETAIL__TRIBONACCI__STRUCT_HPP_
#define TRIBONACCI_INTERFACES__ACTION__DETAIL__TRIBONACCI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tribonacci_interfaces__action__Tribonacci_Goal __attribute__((deprecated))
#else
# define DEPRECATED__tribonacci_interfaces__action__Tribonacci_Goal __declspec(deprecated)
#endif

namespace tribonacci_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Tribonacci_Goal_
{
  using Type = Tribonacci_Goal_<ContainerAllocator>;

  explicit Tribonacci_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start = false;
    }
  }

  explicit Tribonacci_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start = false;
    }
  }

  // field types and members
  using _start_type =
    bool;
  _start_type start;

  // setters for named parameter idiom
  Type & set__start(
    const bool & _arg)
  {
    this->start = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tribonacci_interfaces::action::Tribonacci_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const tribonacci_interfaces::action::Tribonacci_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tribonacci_interfaces::action::Tribonacci_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tribonacci_interfaces::action::Tribonacci_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tribonacci_interfaces::action::Tribonacci_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tribonacci_interfaces::action::Tribonacci_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tribonacci_interfaces::action::Tribonacci_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tribonacci_interfaces::action::Tribonacci_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tribonacci_interfaces__action__Tribonacci_Goal
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tribonacci_interfaces__action__Tribonacci_Goal
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tribonacci_Goal_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tribonacci_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tribonacci_Goal_

// alias to use template instance with default allocator
using Tribonacci_Goal =
  tribonacci_interfaces::action::Tribonacci_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tribonacci_interfaces


#ifndef _WIN32
# define DEPRECATED__tribonacci_interfaces__action__Tribonacci_Result __attribute__((deprecated))
#else
# define DEPRECATED__tribonacci_interfaces__action__Tribonacci_Result __declspec(deprecated)
#endif

namespace tribonacci_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Tribonacci_Result_
{
  using Type = Tribonacci_Result_<ContainerAllocator>;

  explicit Tribonacci_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Tribonacci_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _sequence_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _sequence_type sequence;

  // setters for named parameter idiom
  Type & set__sequence(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->sequence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tribonacci_interfaces::action::Tribonacci_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const tribonacci_interfaces::action::Tribonacci_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tribonacci_interfaces::action::Tribonacci_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tribonacci_interfaces::action::Tribonacci_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tribonacci_interfaces::action::Tribonacci_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tribonacci_interfaces::action::Tribonacci_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tribonacci_interfaces::action::Tribonacci_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tribonacci_interfaces::action::Tribonacci_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tribonacci_interfaces__action__Tribonacci_Result
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tribonacci_interfaces__action__Tribonacci_Result
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tribonacci_Result_ & other) const
  {
    if (this->sequence != other.sequence) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tribonacci_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tribonacci_Result_

// alias to use template instance with default allocator
using Tribonacci_Result =
  tribonacci_interfaces::action::Tribonacci_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tribonacci_interfaces


#ifndef _WIN32
# define DEPRECATED__tribonacci_interfaces__action__Tribonacci_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__tribonacci_interfaces__action__Tribonacci_Feedback __declspec(deprecated)
#endif

namespace tribonacci_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Tribonacci_Feedback_
{
  using Type = Tribonacci_Feedback_<ContainerAllocator>;

  explicit Tribonacci_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_index = 0l;
      this->current_number = 0ll;
    }
  }

  explicit Tribonacci_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_index = 0l;
      this->current_number = 0ll;
    }
  }

  // field types and members
  using _current_index_type =
    int32_t;
  _current_index_type current_index;
  using _current_number_type =
    int64_t;
  _current_number_type current_number;

  // setters for named parameter idiom
  Type & set__current_index(
    const int32_t & _arg)
  {
    this->current_index = _arg;
    return *this;
  }
  Type & set__current_number(
    const int64_t & _arg)
  {
    this->current_number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tribonacci_interfaces::action::Tribonacci_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const tribonacci_interfaces::action::Tribonacci_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tribonacci_interfaces::action::Tribonacci_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tribonacci_interfaces::action::Tribonacci_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tribonacci_interfaces::action::Tribonacci_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tribonacci_interfaces::action::Tribonacci_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tribonacci_interfaces::action::Tribonacci_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tribonacci_interfaces::action::Tribonacci_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tribonacci_interfaces__action__Tribonacci_Feedback
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tribonacci_interfaces__action__Tribonacci_Feedback
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tribonacci_Feedback_ & other) const
  {
    if (this->current_index != other.current_index) {
      return false;
    }
    if (this->current_number != other.current_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tribonacci_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tribonacci_Feedback_

// alias to use template instance with default allocator
using Tribonacci_Feedback =
  tribonacci_interfaces::action::Tribonacci_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tribonacci_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "tribonacci_interfaces/action/detail/tribonacci__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tribonacci_interfaces__action__Tribonacci_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__tribonacci_interfaces__action__Tribonacci_SendGoal_Request __declspec(deprecated)
#endif

namespace tribonacci_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Tribonacci_SendGoal_Request_
{
  using Type = Tribonacci_SendGoal_Request_<ContainerAllocator>;

  explicit Tribonacci_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Tribonacci_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    tribonacci_interfaces::action::Tribonacci_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const tribonacci_interfaces::action::Tribonacci_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tribonacci_interfaces::action::Tribonacci_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tribonacci_interfaces::action::Tribonacci_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tribonacci_interfaces::action::Tribonacci_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tribonacci_interfaces::action::Tribonacci_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tribonacci_interfaces::action::Tribonacci_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tribonacci_interfaces::action::Tribonacci_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tribonacci_interfaces::action::Tribonacci_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tribonacci_interfaces::action::Tribonacci_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tribonacci_interfaces__action__Tribonacci_SendGoal_Request
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tribonacci_interfaces__action__Tribonacci_SendGoal_Request
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tribonacci_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tribonacci_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tribonacci_SendGoal_Request_

// alias to use template instance with default allocator
using Tribonacci_SendGoal_Request =
  tribonacci_interfaces::action::Tribonacci_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tribonacci_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tribonacci_interfaces__action__Tribonacci_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__tribonacci_interfaces__action__Tribonacci_SendGoal_Response __declspec(deprecated)
#endif

namespace tribonacci_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Tribonacci_SendGoal_Response_
{
  using Type = Tribonacci_SendGoal_Response_<ContainerAllocator>;

  explicit Tribonacci_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Tribonacci_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tribonacci_interfaces::action::Tribonacci_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tribonacci_interfaces::action::Tribonacci_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tribonacci_interfaces::action::Tribonacci_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tribonacci_interfaces::action::Tribonacci_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tribonacci_interfaces::action::Tribonacci_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tribonacci_interfaces::action::Tribonacci_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tribonacci_interfaces::action::Tribonacci_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tribonacci_interfaces::action::Tribonacci_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tribonacci_interfaces__action__Tribonacci_SendGoal_Response
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tribonacci_interfaces__action__Tribonacci_SendGoal_Response
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tribonacci_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tribonacci_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tribonacci_SendGoal_Response_

// alias to use template instance with default allocator
using Tribonacci_SendGoal_Response =
  tribonacci_interfaces::action::Tribonacci_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tribonacci_interfaces

namespace tribonacci_interfaces
{

namespace action
{

struct Tribonacci_SendGoal
{
  using Request = tribonacci_interfaces::action::Tribonacci_SendGoal_Request;
  using Response = tribonacci_interfaces::action::Tribonacci_SendGoal_Response;
};

}  // namespace action

}  // namespace tribonacci_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tribonacci_interfaces__action__Tribonacci_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__tribonacci_interfaces__action__Tribonacci_GetResult_Request __declspec(deprecated)
#endif

namespace tribonacci_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Tribonacci_GetResult_Request_
{
  using Type = Tribonacci_GetResult_Request_<ContainerAllocator>;

  explicit Tribonacci_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Tribonacci_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tribonacci_interfaces::action::Tribonacci_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tribonacci_interfaces::action::Tribonacci_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tribonacci_interfaces::action::Tribonacci_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tribonacci_interfaces::action::Tribonacci_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tribonacci_interfaces::action::Tribonacci_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tribonacci_interfaces::action::Tribonacci_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tribonacci_interfaces::action::Tribonacci_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tribonacci_interfaces::action::Tribonacci_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tribonacci_interfaces__action__Tribonacci_GetResult_Request
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tribonacci_interfaces__action__Tribonacci_GetResult_Request
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tribonacci_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tribonacci_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tribonacci_GetResult_Request_

// alias to use template instance with default allocator
using Tribonacci_GetResult_Request =
  tribonacci_interfaces::action::Tribonacci_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tribonacci_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "tribonacci_interfaces/action/detail/tribonacci__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tribonacci_interfaces__action__Tribonacci_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__tribonacci_interfaces__action__Tribonacci_GetResult_Response __declspec(deprecated)
#endif

namespace tribonacci_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Tribonacci_GetResult_Response_
{
  using Type = Tribonacci_GetResult_Response_<ContainerAllocator>;

  explicit Tribonacci_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Tribonacci_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    tribonacci_interfaces::action::Tribonacci_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const tribonacci_interfaces::action::Tribonacci_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tribonacci_interfaces::action::Tribonacci_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tribonacci_interfaces::action::Tribonacci_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tribonacci_interfaces::action::Tribonacci_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tribonacci_interfaces::action::Tribonacci_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tribonacci_interfaces::action::Tribonacci_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tribonacci_interfaces::action::Tribonacci_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tribonacci_interfaces::action::Tribonacci_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tribonacci_interfaces::action::Tribonacci_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tribonacci_interfaces__action__Tribonacci_GetResult_Response
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tribonacci_interfaces__action__Tribonacci_GetResult_Response
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tribonacci_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tribonacci_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tribonacci_GetResult_Response_

// alias to use template instance with default allocator
using Tribonacci_GetResult_Response =
  tribonacci_interfaces::action::Tribonacci_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tribonacci_interfaces

namespace tribonacci_interfaces
{

namespace action
{

struct Tribonacci_GetResult
{
  using Request = tribonacci_interfaces::action::Tribonacci_GetResult_Request;
  using Response = tribonacci_interfaces::action::Tribonacci_GetResult_Response;
};

}  // namespace action

}  // namespace tribonacci_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "tribonacci_interfaces/action/detail/tribonacci__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tribonacci_interfaces__action__Tribonacci_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__tribonacci_interfaces__action__Tribonacci_FeedbackMessage __declspec(deprecated)
#endif

namespace tribonacci_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Tribonacci_FeedbackMessage_
{
  using Type = Tribonacci_FeedbackMessage_<ContainerAllocator>;

  explicit Tribonacci_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Tribonacci_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    tribonacci_interfaces::action::Tribonacci_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const tribonacci_interfaces::action::Tribonacci_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tribonacci_interfaces::action::Tribonacci_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const tribonacci_interfaces::action::Tribonacci_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tribonacci_interfaces::action::Tribonacci_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tribonacci_interfaces::action::Tribonacci_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tribonacci_interfaces::action::Tribonacci_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tribonacci_interfaces::action::Tribonacci_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tribonacci_interfaces::action::Tribonacci_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tribonacci_interfaces::action::Tribonacci_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tribonacci_interfaces__action__Tribonacci_FeedbackMessage
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tribonacci_interfaces__action__Tribonacci_FeedbackMessage
    std::shared_ptr<tribonacci_interfaces::action::Tribonacci_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tribonacci_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tribonacci_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tribonacci_FeedbackMessage_

// alias to use template instance with default allocator
using Tribonacci_FeedbackMessage =
  tribonacci_interfaces::action::Tribonacci_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tribonacci_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace tribonacci_interfaces
{

namespace action
{

struct Tribonacci
{
  /// The goal message defined in the action definition.
  using Goal = tribonacci_interfaces::action::Tribonacci_Goal;
  /// The result message defined in the action definition.
  using Result = tribonacci_interfaces::action::Tribonacci_Result;
  /// The feedback message defined in the action definition.
  using Feedback = tribonacci_interfaces::action::Tribonacci_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = tribonacci_interfaces::action::Tribonacci_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = tribonacci_interfaces::action::Tribonacci_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = tribonacci_interfaces::action::Tribonacci_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Tribonacci Tribonacci;

}  // namespace action

}  // namespace tribonacci_interfaces

#endif  // TRIBONACCI_INTERFACES__ACTION__DETAIL__TRIBONACCI__STRUCT_HPP_
