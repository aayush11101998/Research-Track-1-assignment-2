// Generated by gencpp from file project/racetrackResponse.msg
// DO NOT EDIT!


#ifndef PROJECT_MESSAGE_RACETRACKRESPONSE_H
#define PROJECT_MESSAGE_RACETRACKRESPONSE_H


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
struct racetrackResponse_
{
  typedef racetrackResponse_<ContainerAllocator> Type;

  racetrackResponse_()
    : speed(0.0)  {
    }
  racetrackResponse_(const ContainerAllocator& _alloc)
    : speed(0.0)  {
  (void)_alloc;
    }



   typedef float _speed_type;
  _speed_type speed;





  typedef boost::shared_ptr< ::project::racetrackResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::project::racetrackResponse_<ContainerAllocator> const> ConstPtr;

}; // struct racetrackResponse_

typedef ::project::racetrackResponse_<std::allocator<void> > racetrackResponse;

typedef boost::shared_ptr< ::project::racetrackResponse > racetrackResponsePtr;
typedef boost::shared_ptr< ::project::racetrackResponse const> racetrackResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::project::racetrackResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::project::racetrackResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::project::racetrackResponse_<ContainerAllocator1> & lhs, const ::project::racetrackResponse_<ContainerAllocator2> & rhs)
{
  return lhs.speed == rhs.speed;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::project::racetrackResponse_<ContainerAllocator1> & lhs, const ::project::racetrackResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace project

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::project::racetrackResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::project::racetrackResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::project::racetrackResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::project::racetrackResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::project::racetrackResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::project::racetrackResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::project::racetrackResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ca65bba734a79b4a6707341d829f4d5c";
  }

  static const char* value(const ::project::racetrackResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xca65bba734a79b4aULL;
  static const uint64_t static_value2 = 0x6707341d829f4d5cULL;
};

template<class ContainerAllocator>
struct DataType< ::project::racetrackResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "project/racetrackResponse";
  }

  static const char* value(const ::project::racetrackResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::project::racetrackResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 speed\n"
"\n"
"\n"
"\n"
;
  }

  static const char* value(const ::project::racetrackResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::project::racetrackResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct racetrackResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::project::racetrackResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::project::racetrackResponse_<ContainerAllocator>& v)
  {
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PROJECT_MESSAGE_RACETRACKRESPONSE_H
