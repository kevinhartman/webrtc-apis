
#pragma once

#include "types.h"
#include "generated/org_webRtc_RTCIceCandidatePairStats.h"

#include "impl_org_webRtc_pre_include.h"
#include "api/stats/rtcstats_objects.h"
#include "impl_org_webRtc_post_include.h"

namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct RTCIceCandidatePairStats : public wrapper::org::webRtc::RTCIceCandidatePairStats
        {
          ZS_DECLARE_TYPEDEF_PTR(wrapper::org::webRtc::RTCIceCandidatePairStats, WrapperType);
          ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::RTCIceCandidatePairStats, WrapperImplType);
          ZS_DECLARE_TYPEDEF_PTR(::webrtc::RTCStats, NativeType);
          ZS_DECLARE_TYPEDEF_PTR(::webrtc::RTCIceCandidatePairStats, NativeStats);

          RTCIceCandidatePairStatsWeakPtr thisWeak_;
          NativeTypeUniPtr native_;

          RTCIceCandidatePairStats() noexcept;
          virtual ~RTCIceCandidatePairStats() noexcept;


          // properties RTCStats
          ::zsLib::Time get_timestamp() noexcept override;
          Optional< wrapper::org::webRtc::RTCStatsType > get_statsType() noexcept override;
          String get_statsTypeOther() noexcept override;
          String get_id() noexcept override;

          // properties RTCIceCandidatePairStats
          String get_transportId() noexcept override;
          String get_localCandidateId() noexcept override;
          String get_remoteCandidateId() noexcept override;
          wrapper::org::webRtc::RTCStatsIceCandidatePairState get_state() noexcept override;
          bool get_nominated() noexcept override;
          unsigned long get_packetsSent() noexcept override;
          unsigned long get_packetsReceived() noexcept override;
          unsigned long long get_bytesSent() noexcept override;
          unsigned long long get_bytesReceived() noexcept override;
          ::zsLib::Time get_lastPacketSentTimestamp() noexcept override;
          ::zsLib::Time get_lastPacketReceivedTimestamp() noexcept override;
          ::zsLib::Time get_firstRequestTimestamp() noexcept override;
          ::zsLib::Time get_lastRequestTimestamp() noexcept override;
          ::zsLib::Time get_lastResponseTimestamp() noexcept override;
          ::zsLib::Milliseconds get_totalRoundTripTime() noexcept override;
          ::zsLib::Milliseconds get_currentRoundTripTime() noexcept override;
          Optional< double > get_availableOutgoingBitrate() noexcept override;
          Optional< double > get_availableIncomingBitrate() noexcept override;
          unsigned long get_circuitBreakerTriggerCount() noexcept override;
          unsigned long long get_requestsReceived() noexcept override;
          unsigned long long get_requestsSent() noexcept override;
          unsigned long long get_responsesReceived() noexcept override;
          unsigned long long get_responsesSent() noexcept override;
          unsigned long long get_retransmissionsReceived() noexcept override;
          unsigned long long get_retransmissionsSent() noexcept override;
          unsigned long long get_consentRequestsSent() noexcept override;
          ::zsLib::Time get_consentExpiredTimestamp() noexcept override;

          ZS_NO_DISCARD() static WrapperTypePtr toWrapper(NativeTypeUniPtr value) noexcept;
          ZS_NO_DISCARD() const NativeStats &cast() noexcept;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper

