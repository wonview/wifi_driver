#ifndef _AP_H_
#define _AP_H_
#define BEACON_WAITING_ENABLED 1 << 0
#define BEACON_ENABLED 1 << 1
void ssv6xxx_beacon_change(struct ssv_softc *sc, struct ieee80211_hw *hw,
			   struct ieee80211_vif *vif, bool aid0_bit_set);
void ssv6xxx_beacon_set_info(struct ssv_softc *sc, u8 beacon_interval,
			     u8 dtim_cnt);
bool ssv6xxx_beacon_enable(struct ssv_softc *sc, bool bEnable);
void ssv6xxx_beacon_release(struct ssv_softc *sc);
void ssv6200_set_tim_work(struct work_struct *work);
void ssv6200_bcast_start_work(struct work_struct *work);
void ssv6200_bcast_stop_work(struct work_struct *work);
void ssv6200_bcast_tx_work(struct work_struct *work);
int ssv6200_bcast_queue_len(struct ssv6xxx_bcast_txq *bcast_txq);
struct sk_buff *ssv6200_bcast_dequeue(struct ssv6xxx_bcast_txq *bcast_txq,
				      u8 *remain_len);
int ssv6200_bcast_enqueue(struct ssv_softc *sc,
			  struct ssv6xxx_bcast_txq *bcast_txq,
			  struct sk_buff *skb);
void ssv6200_bcast_start(struct ssv_softc *sc);
void ssv6200_bcast_stop(struct ssv_softc *sc);
void ssv6200_release_bcast_frame_res(struct ssv_softc *sc,
				     struct ieee80211_vif *vif);
#endif
