// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_webRtc_RTCVideoHandlerStats.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct RTCVideoHandlerStats : public wrapper::org::webRtc::RTCVideoHandlerStats
        {
          ZS_DECLARE_TYPEDEF_PTR(wrapper::org::webRtc::RTCVideoHandlerStats, WrapperType);
          ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::RTCVideoHandlerStats, WrapperImplType);
          RTCVideoHandlerStatsWeakPtr thisWeak_;

          RTCVideoHandlerStats() noexcept;
          virtual ~RTCVideoHandlerStats() noexcept;


          // properties RTCStats
          ::zsLib::Time get_timestamp() noexcept override;
          Optional< wrapper::org::webRtc::RTCStatsType > get_statsType() noexcept override;
          String get_statsTypeOther() noexcept override;
          String get_id() noexcept override;

          // properties RTCMediaHandlerStats
          String get_trackIdentifier() noexcept override;
          Optional< bool > get_remoteSource() noexcept override;
          bool get_ended() noexcept override;
          String get_kind() noexcept override;
          wrapper::org::webRtc::RTCPriorityType get_priority() noexcept override;

          // properties RTCVideoHandlerStats
          unsigned long get_frameWidth() noexcept override;
          unsigned long get_frameHeight() noexcept override;
          double get_framesPerSecond() noexcept override;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper

