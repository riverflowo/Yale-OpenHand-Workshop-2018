// Generated by gencpp from file openhand/HoldServosResponse.msg
// DO NOT EDIT!


#ifndef OPENHAND_MESSAGE_HOLDSERVOSRESPONSE_H
#define OPENHAND_MESSAGE_HOLDSERVOSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace openhand
{
template <class ContainerAllocator>
struct HoldServosResponse_
{
  typedef HoldServosResponse_<ContainerAllocator> Type;

  HoldServosResponse_()
    : err(0)  {
    }
  HoldServosResponse_(const ContainerAllocator& _alloc)
    : err(0)  {
  (void)_alloc;
    }



   typedef int32_t _err_type;
  _err_type err;





  typedef boost::shared_ptr< ::openhand::HoldServosResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::openhand::HoldServosResponse_<ContainerAllocator> const> ConstPtr;

}; // struct HoldServosResponse_

typedef ::openhand::HoldServosResponse_<std::allocator<void> > HoldServosResponse;

typedef boost::shared_ptr< ::openhand::HoldServosResponse > HoldServosResponsePtr;
typedef boost::shared_ptr< ::openhand::HoldServosResponse const> HoldServosResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::openhand::HoldServosResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::openhand::HoldServosResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace openhand

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::openhand::HoldServosResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::openhand::HoldServosResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::openhand::HoldServosResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::openhand::HoldServosResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::openhand::HoldServosResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::openhand::HoldServosResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::openhand::HoldServosResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b6e094011a4dfaee5eddf447220446cf";
  }

  static const char* value(const ::openhand::HoldServosResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb6e094011a4dfaeeULL;
  static const uint64_t static_value2 = 0x5eddf447220446cfULL;
};

template<class ContainerAllocator>
struct DataType< ::openhand::HoldServosResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "openhand/HoldServosResponse";
  }

  static const char* value(const ::openhand::HoldServosResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::openhand::HoldServosResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 err\n\
\n\
";
  }

  static const char* value(const ::openhand::HoldServosResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::openhand::HoldServosResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.err);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HoldServosResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::openhand::HoldServosResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::openhand::HoldServosResponse_<ContainerAllocator>& v)
  {
    s << indent << "err: ";
    Printer<int32_t>::stream(s, indent + "  ", v.err);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPENHAND_MESSAGE_HOLDSERVOSRESPONSE_H