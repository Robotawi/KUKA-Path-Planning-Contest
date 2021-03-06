// Generated by gencpp from file rll_planning_project/PlanToGoalActionGoal.msg
// DO NOT EDIT!


#ifndef RLL_PLANNING_PROJECT_MESSAGE_PLANTOGOALACTIONGOAL_H
#define RLL_PLANNING_PROJECT_MESSAGE_PLANTOGOALACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <rll_planning_project/PlanToGoalGoal.h>

namespace rll_planning_project
{
template <class ContainerAllocator>
struct PlanToGoalActionGoal_
{
  typedef PlanToGoalActionGoal_<ContainerAllocator> Type;

  PlanToGoalActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  PlanToGoalActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::rll_planning_project::PlanToGoalGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct PlanToGoalActionGoal_

typedef ::rll_planning_project::PlanToGoalActionGoal_<std::allocator<void> > PlanToGoalActionGoal;

typedef boost::shared_ptr< ::rll_planning_project::PlanToGoalActionGoal > PlanToGoalActionGoalPtr;
typedef boost::shared_ptr< ::rll_planning_project::PlanToGoalActionGoal const> PlanToGoalActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rll_planning_project

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'rll_planning_project': ['/home/workspace/catkin_ws/devel/share/rll_planning_project/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b78be0df62bf0b0b761f3ddbc0637227";
  }

  static const char* value(const ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb78be0df62bf0b0bULL;
  static const uint64_t static_value2 = 0x761f3ddbc0637227ULL;
};

template<class ContainerAllocator>
struct DataType< ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rll_planning_project/PlanToGoalActionGoal";
  }

  static const char* value(const ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
PlanToGoalGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: rll_planning_project/PlanToGoalGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
geometry_msgs/Pose2D start\n\
geometry_msgs/Pose2D goal\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanToGoalActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rll_planning_project::PlanToGoalActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::rll_planning_project::PlanToGoalGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RLL_PLANNING_PROJECT_MESSAGE_PLANTOGOALACTIONGOAL_H
