// Generated by zsLibEventingTool

#include "impl_org_webRtc_RTCAudioHandlerStats.h"

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
ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::RTCAudioHandlerStats::WrapperImplType, WrapperImplType);
ZS_DECLARE_TYPEDEF_PTR(WrapperImplType::WrapperType, WrapperType);

//------------------------------------------------------------------------------
wrapper::impl::org::webRtc::RTCAudioHandlerStats::RTCAudioHandlerStats() noexcept
{
}

//------------------------------------------------------------------------------
wrapper::org::webRtc::RTCAudioHandlerStatsPtr wrapper::org::webRtc::RTCAudioHandlerStats::wrapper_create() noexcept
{
  auto pThis = make_shared<wrapper::impl::org::webRtc::RTCAudioHandlerStats>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::webRtc::RTCAudioHandlerStats::~RTCAudioHandlerStats() noexcept
{
  thisWeak_.reset();
}

//------------------------------------------------------------------------------
::zsLib::Time wrapper::impl::org::webRtc::RTCAudioHandlerStats::get_timestamp() noexcept
{
  ::zsLib::Time result {};
  return result;
}

//------------------------------------------------------------------------------
Optional< wrapper::org::webRtc::RTCStatsType > wrapper::impl::org::webRtc::RTCAudioHandlerStats::get_statsType() noexcept
{
  Optional< wrapper::org::webRtc::RTCStatsType > result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webRtc::RTCAudioHandlerStats::get_statsTypeOther() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webRtc::RTCAudioHandlerStats::get_id() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webRtc::RTCAudioHandlerStats::get_trackIdentifier() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
Optional< bool > wrapper::impl::org::webRtc::RTCAudioHandlerStats::get_remoteSource() noexcept
{
  Optional< bool > result {};
  return result;
}

//------------------------------------------------------------------------------
bool wrapper::impl::org::webRtc::RTCAudioHandlerStats::get_ended() noexcept
{
  bool result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webRtc::RTCAudioHandlerStats::get_kind() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::webRtc::RTCPriorityType wrapper::impl::org::webRtc::RTCAudioHandlerStats::get_priority() noexcept
{
  wrapper::org::webRtc::RTCPriorityType result {};
  return result;
}

//------------------------------------------------------------------------------
double wrapper::impl::org::webRtc::RTCAudioHandlerStats::get_audioLevel() noexcept
{
  double result {};
  return result;
}

//------------------------------------------------------------------------------
double wrapper::impl::org::webRtc::RTCAudioHandlerStats::get_totalAudioEnergy() noexcept
{
  double result {};
  return result;
}

//------------------------------------------------------------------------------
bool wrapper::impl::org::webRtc::RTCAudioHandlerStats::get_voiceActivityFlag() noexcept
{
  bool result {};
  return result;
}

//------------------------------------------------------------------------------
double wrapper::impl::org::webRtc::RTCAudioHandlerStats::get_totalSamplesDuration() noexcept
{
  double result {};
  return result;
}


