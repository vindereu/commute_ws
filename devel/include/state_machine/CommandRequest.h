// Generated by gencpp from file state_machine/CommandRequest.msg
// DO NOT EDIT!


#ifndef STATE_MACHINE_MESSAGE_COMMANDREQUEST_H
#define STATE_MACHINE_MESSAGE_COMMANDREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace state_machine
{
template <class ContainerAllocator>
struct CommandRequest_
{
  typedef CommandRequest_<ContainerAllocator> Type;

  CommandRequest_()
    : cmd(0)  {
    }
  CommandRequest_(const ContainerAllocator& _alloc)
    : cmd(0)  {
  (void)_alloc;
    }



   typedef int8_t _cmd_type;
  _cmd_type cmd;





  typedef boost::shared_ptr< ::state_machine::CommandRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::state_machine::CommandRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CommandRequest_

typedef ::state_machine::CommandRequest_<std::allocator<void> > CommandRequest;

typedef boost::shared_ptr< ::state_machine::CommandRequest > CommandRequestPtr;
typedef boost::shared_ptr< ::state_machine::CommandRequest const> CommandRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::state_machine::CommandRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::state_machine::CommandRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::state_machine::CommandRequest_<ContainerAllocator1> & lhs, const ::state_machine::CommandRequest_<ContainerAllocator2> & rhs)
{
  return lhs.cmd == rhs.cmd;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::state_machine::CommandRequest_<ContainerAllocator1> & lhs, const ::state_machine::CommandRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace state_machine

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::state_machine::CommandRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::state_machine::CommandRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::state_machine::CommandRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::state_machine::CommandRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::state_machine::CommandRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::state_machine::CommandRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::state_machine::CommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "26e2d5a54557d558b8243da339e9952c";
  }

  static const char* value(const ::state_machine::CommandRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x26e2d5a54557d558ULL;
  static const uint64_t static_value2 = 0xb8243da339e9952cULL;
};

template<class ContainerAllocator>
struct DataType< ::state_machine::CommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "state_machine/CommandRequest";
  }

  static const char* value(const ::state_machine::CommandRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::state_machine::CommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 cmd\n"
;
  }

  static const char* value(const ::state_machine::CommandRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::state_machine::CommandRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cmd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommandRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::state_machine::CommandRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::state_machine::CommandRequest_<ContainerAllocator>& v)
  {
    s << indent << "cmd: ";
    Printer<int8_t>::stream(s, indent + "  ", v.cmd);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STATE_MACHINE_MESSAGE_COMMANDREQUEST_H
