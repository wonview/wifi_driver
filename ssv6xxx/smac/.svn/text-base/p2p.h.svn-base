#ifndef _P2P_H_
#define _P2P_H_
#include <net/mac80211.h>
#include <ssv6200.h>
#include "drv_comm.h"
#ifdef CONFIG_P2P_NOA
#define P2P_MAX_NOA_INTERFACE 1
struct ssv_p2p_noa_detect
{
	const u8 *noa_addr;
	s16 p2p_noa_index;
	unsigned long last_rx;
	struct ssv6xxx_p2p_noa_param noa_param_cmd;
};
struct ssv_p2p_noa
{
	spinlock_t p2p_config_lock;
	struct ssv_p2p_noa_detect noa_detect[SSV_NUM_VIF];
	u8 active_noa_vif;
	u8 monitor_noa_vif;
};
enum ssv_cmd_state {
	SSC_CMD_STATE_IDLE,
	SSC_CMD_STATE_WAIT_RSP,
};
struct ssv_cmd_Info
{
	struct sk_buff_head cmd_que;
	struct sk_buff_head evt_que;
	enum ssv_cmd_state state;
};
enum ssv6xxx_noa_conf {
	MONITOR_NOA_CONF_ADD,
	MONITOR_NOA_CONF_REMOVE,
};
struct ssv_softc;
void ssv6xxx_process_noa_event(struct ssv_softc *sc, struct sk_buff *skb);
void ssv6xxx_noa_hdl_bss_change(struct ssv_softc *sc,
				enum ssv6xxx_noa_conf conf, u8 vif_idx);
void ssv6xxx_process_noa_event(struct ssv_softc *sc, struct sk_buff *skb);
void ssv6xxx_noa_detect(struct ssv_softc *sc, struct ieee80211_hdr *hdr,
			u32 len);
void ssv6xxx_noa_reset(struct ssv_softc *sc);
#endif
#endif
