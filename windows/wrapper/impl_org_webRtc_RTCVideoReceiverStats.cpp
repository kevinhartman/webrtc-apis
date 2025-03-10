// Generated by zsLibEventingTool

#include "impl_org_webRtc_RTCVideoReceiverStats.h"

using ::zsLib::String;
using ::zsLib::Optional;
using ::zsLib::Any;
using ::zsLib::AnyPtr;
using ::zsLib::AnyHolder;
using ::zsLib::Promise;
using ::zsLib::PromisePtr;
using ::zsLib::PromiseWithHolder;
using ::zsLib::PromiseWithHolderPtr;
using ::zsLib::eventing::SecureByteBlock;
using ::zsLib::eventing::SecureByteBlockPtr;
using ::std::shared_ptr;
using ::std::weak_ptr;
using ::std::make_shared;
using ::std::list;
using ::std::set;
using ::std::map;

// borrow definitions from class
ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::RTCVideoReceiverStats::WrapperImplType, WrapperImplType);
ZS_DECLARE_TYPEDEF_PTR(WrapperImplType::WrapperType, WrapperType);

//------------------------------------------------------------------------------
wrapper::impl::org::webRtc::RTCVideoReceiverStats::RTCVideoReceiverStats() noexcept
{
}

//------------------------------------------------------------------------------
wrapper::org::webRtc::RTCVideoReceiverStatsPtr wrapper::org::webRtc::RTCVideoReceiverStats::wrapper_create() noexcept
{
  auto pThis = make_shared<wrapper::impl::org::webRtc::RTCVideoReceiverStats>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::webRtc::RTCVideoReceiverStats::~RTCVideoReceiverStats() noexcept
{
  thisWeak_.reset();
}

//------------------------------------------------------------------------------
::zsLib::Time wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_timestamp() noexcept
{
  ::zsLib::Time result {};
  return result;
}

//------------------------------------------------------------------------------
Optional< wrapper::org::webRtc::RTCStatsType > wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_statsType() noexcept
{
  Optional< wrapper::org::webRtc::RTCStatsType > result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_statsTypeOther() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_id() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_trackIdentifier() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
Optional< bool > wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_remoteSource() noexcept
{
  Optional< bool > result {};
  return result;
}

//------------------------------------------------------------------------------
bool wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_ended() noexcept
{
  bool result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_kind() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::webRtc::RTCPriorityType wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_priority() noexcept
{
  wrapper::org::webRtc::RTCPriorityType result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_frameWidth() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_frameHeight() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
double wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_framesPerSecond() noexcept
{
  double result {};
  return result;
}

//------------------------------------------------------------------------------
::zsLib::Time wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_estimatedPlayoutTimestamp() noexcept
{
  ::zsLib::Time result {};
  return result;
}

//------------------------------------------------------------------------------
::zsLib::Milliseconds wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_jitterBufferDelay() noexcept
{
  ::zsLib::Milliseconds result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long long wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_jitterBufferEmittedCount() noexcept
{
  unsigned long long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_framesReceived() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_keyFramesReceived() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_framesDecoded() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_framesDropped() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_partialFramesLost() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webRtc::RTCVideoReceiverStats::get_fullFramesLost() noexcept
{
  unsigned long result {};
  return result;
}


