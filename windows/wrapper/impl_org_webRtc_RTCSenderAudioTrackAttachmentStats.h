
#pragma once

#include "types.h"
#include "generated/org_webRtc_RTCSenderAudioTrackAttachmentStats.h"

#include "impl_org_webRtc_pre_include.h"
#include "api/stats/rtcstats_objects.h"
#include "impl_org_webRtc_post_include.h"

namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct RTCSenderAudioTrackAttachmentStats : public wrapper::org::webRtc::RTCSenderAudioTrackAttachmentStats
        {
          ZS_DECLARE_TYPEDEF_PTR(wrapper::org::webRtc::RTCSenderAudioTrackAttachmentStats, WrapperType);
          ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::RTCSenderAudioTrackAttachmentStats, WrapperImplType);
          ZS_DECLARE_TYPEDEF_PTR(::webrtc::RTCStats, NativeType);
          ZS_DECLARE_TYPEDEF_PTR(::webrtc::RTCMediaStreamTrackStats, NativeStats);

          RTCSenderAudioTrackAttachmentStatsWeakPtr thisWeak_;
          NativeTypeUniPtr native_;

          RTCSenderAudioTrackAttachmentStats() noexcept;
          virtual ~RTCSenderAudioTrackAttachmentStats() noexcept;


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

          // properties RTCAudioHandlerStats
          double get_audioLevel() noexcept override;
          double get_totalAudioEnergy() noexcept override;
          bool get_voiceActivityFlag() noexcept override;
          double get_totalSamplesDuration() noexcept override;

          // properties RTCAudioSenderStats
          Optional< double > get_echoReturnLoss() noexcept override;
          Optional< double > get_echoReturnLossEnhancement() noexcept override;
          unsigned long long get_totalSamplesSent() noexcept override;

          ZS_NO_DISCARD() static WrapperTypePtr toWrapper(NativeTypeUniPtr value) noexcept;
          ZS_NO_DISCARD() const NativeStats &cast() noexcept;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper

