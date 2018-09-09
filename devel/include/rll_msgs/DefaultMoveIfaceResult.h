// Generated by gencpp from file rll_msgs/DefaultMoveIfaceResult.msg
// DO NOT EDIT!


#ifndef RLL_MSGS_MESSAGE_DEFAULTMOVEIFACERESULT_H
#define RLL_MSGS_MESSAGE_DEFAULTMOVEIFACERESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rll_msgs
{
template <class ContainerAllocator>
struct DefaultMoveIfaceResult_
{
  typedef DefaultMoveIfaceResult_<ContainerAllocator> Type;

  DefaultMoveIfaceResult_()
    {
    }
  DefaultMoveIfaceResult_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator> const> ConstPtr;

}; // struct DefaultMoveIfaceResult_

typedef ::rll_msgs::DefaultMoveIfaceResult_<std::allocator<void> > DefaultMoveIfaceResult;

typedef boost::shared_ptr< ::rll_msgs::DefaultMoveIfaceResult > DefaultMoveIfaceResultPtr;
typedef boost::shared_ptr< ::rll_msgs::DefaultMoveIfaceResult const> DefaultMoveIfaceResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rll_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'rll_msgs': ['/home/workspace/catkin_ws/src/rll_sdk/rll_msgs/msg', '/home/workspace/catkin_ws/devel/share/rll_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rll_msgs/DefaultMoveIfaceResult";
  }

  static const char* value(const ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
";
  }

  static const char* value(const ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DefaultMoveIfaceResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::rll_msgs::DefaultMoveIfaceResult_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // RLL_MSGS_MESSAGE_DEFAULTMOVEIFACERESULT_H