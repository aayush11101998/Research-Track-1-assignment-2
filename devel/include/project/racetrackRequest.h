// Generated by gencpp from file project/racetrackRequest.msg
// DO NOT EDIT!


#ifndef PROJECT_MESSAGE_RACETRACKREQUEST_H
#define PROJECT_MESSAGE_RACETRACKREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace project
{
template <class ContainerAllocator>
struct racetrackRequest_
{
  typedef racetrackRequest_<ContainerAllocator> Type;

  racetrackRequest_()
    : controller(0)  {
    }
  racetrackRequest_(const ContainerAllocator& _alloc)
    : controller(0)  {
  (void)_alloc;
    }



   typedef uint8_t _controller_type;
  _controller_type controller;





  typedef boost::shared_ptr< ::project::racetrackRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::project::racetrackRequest_<ContainerAllocator> const> ConstPtr;

}; // struct racetrackRequest_

typedef ::project::racetrackRequest_<std::allocator<void> > racetrackRequest;

typedef boost::shared_ptr< ::project::racetrackRequest > racetrackRequestPtr;
typedef boost::shared_ptr< ::project::racetrackRequest const> racetrackRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::project::racetrackRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::project::racetrackRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::project::racetrackRequest_<ContainerAllocator1> & lhs, const ::project::racetrackRequest_<ContainerAllocator2> & rhs)
{
  return lhs.controller == rhs.controller;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::project::racetrackRequest_<ContainerAllocator1> & lhs, const ::project::racetrackRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace project

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::project::racetrackRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::project::racetrackRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::project::racetrackRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::project::racetrackRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::project::racetrackRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::project::racetrackRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::project::racetrackRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bb0d033473a20b642b4366b25d0cd892";
  }

  static const char* value(const ::project::racetrackRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbb0d033473a20b64ULL;
  static const uint64_t static_value2 = 0x2b4366b25d0cd892ULL;
};

template<class ContainerAllocator>
struct DataType< ::project::racetrackRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "project/racetrackRequest";
  }

  static const char* value(const ::project::racetrackRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::project::racetrackRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"char controller\n"
;
  }

  static const char* value(const ::project::racetrackRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::project::racetrackRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.controller);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct racetrackRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::project::racetrackRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::project::racetrackRequest_<ContainerAllocator>& v)
  {
    s << indent << "controller: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.controller);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PROJECT_MESSAGE_RACETRACKREQUEST_H
