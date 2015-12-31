#ifndef _SSV_RC_HT_H_
#define _SSV_RC_HT_H_
#include "ssv_rc_common.h"
#define MINSTREL_SCALE 16
#define MINSTREL_FRAC(val, div) (((val) << MINSTREL_SCALE) / div)
#define MINSTREL_TRUNC(val) ((val) >> MINSTREL_SCALE)
#define SSV_RC_HT_INTERVAL 100
extern const u16 ampdu_max_transmit_length[];
s32 ssv62xx_ht_rate_update(struct sk_buff *skb, struct ssv_softc *sc,
			   struct fw_rc_retry_params *ar);
void ssv62xx_ht_rc_caps(const u16 ssv6xxx_rc_rate_set[RC_TYPE_MAX][13],
			struct ssv_sta_rc_info *rc_sta);
void ssv6xxxx_ht_report_handler(struct ssv_softc *sc, struct sk_buff *skb,
				struct ssv_sta_rc_info *rc_sta);
#endif
