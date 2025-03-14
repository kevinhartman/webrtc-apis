
#pragma once

#include "types.h"
#include "generated/org_webRtc_RTCOutboundRtpStreamStats.h"

#include "impl_org_webRtc_pre_include.h"
#include "api/stats/rtcstats_objects.h"
#include "impl_org_webRtc_post_include.h"

namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct RTCOutboundRtpStreamStats : public wrapper::org::webRtc::RTCOutboundRtpStreamStats
        {
          ZS_DECLARE_TYPEDEF_PTR(wrapper::org::webRtc::RTCOutboundRtpStreamStats, WrapperType);
          ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::RTCOutboundRtpStreamStats, WrapperImplType);
          ZS_DECLARE_TYPEDEF_PTR(::webrtc::RTCStats, NativeType);
          ZS_DECLARE_TYPEDEF_PTR(::webrtc::RTCOutboundRTPStreamStats, NativeStats);

          RTCOutboundRtpStreamStatsWeakPtr thisWeak_;
          NativeTypeUniPtr native_;

          RTCOutboundRtpStreamStats() noexcept;
          virtual ~RTCOutboundRtpStreamStats() noexcept;


          // properties RTCStats
          ::zsLib::Time get_timestamp() noexcept override;
          Optional< wrapper::org::webRtc::RTCStatsType > get_statsType() noexcept override;
          String get_statsTypeOther() noexcept override;
          String get_id() noexcept override;

          // properties RTCRtpStreamStats
          Optional< uint32_t > get_ssrc() noexcept override;
          String get_kind() noexcept override;
          String get_transportId() noexcept override;
          String get_codecId() noexcept override;
          unsigned long get_firCount() noexcept override;
          unsigned long get_pliCount() noexcept override;
          unsigned long get_nackCount() noexcept override;
          unsigned long get_sliCount() noexcept override;
          unsigned long long get_qpSum() noexcept override;

          // properties RTCSentRtpStreamStats
          unsigned long get_packetsSent() noexcept override;
          unsigned long get_packetsDiscardedOnSend() noexcept override;
          unsigned long get_fecPacketsSent() noexcept override;
          unsigned long long get_bytesSent() noexcept override;
          unsigned long long get_bytesDiscardedOnSend() noexcept override;

          // properties RTCOutboundRtpStreamStats
          String get_trackId() noexcept override;
          String get_senderId() noexcept override;
          String get_remoteId() noexcept override;
          ::zsLib::Time get_lastPacketSentTimestamp() noexcept override;
          double get_targetBitrate() noexcept override;
          Optional< unsigned long > get_framesEncoded() noexcept override;
          ::zsLib::Milliseconds get_totalEncodeTime() noexcept override;
          double get_averageRtcpInterval() noexcept override;
          Optional< wrapper::org::webRtc::RTCQualityLimitationReason > get_qualityLimitationReason() noexcept override;
          shared_ptr< map< wrapper::org::webRtc::RTCQualityLimitationReason, ::zsLib::Milliseconds > > get_qualityLimitationDurations() noexcept override;
          shared_ptr< map< String, unsigned long > > get_perDscpPacketsSent() noexcept override;

          ZS_NO_DISCARD() static WrapperTypePtr toWrapper(NativeTypeUniPtr value) noexcept;
          ZS_NO_DISCARD() const NativeStats &cast() noexcept;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper

