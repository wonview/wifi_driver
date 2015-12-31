#ifdef CONFIG_HAS_WAKELOCK
#include <linux/wakelock.h>
#endif
#ifdef CONFIG_HAS_EARLYSUSPEND
#include <linux/earlysuspend.h>
#endif
#include <ssv6200.h>
#include "dev.h"
#ifdef CONFIG_SSV_SUPPORT_ANDROID
#ifdef CONFIG_HAS_EARLYSUSPEND
void ssv6xxx_early_suspend(struct early_suspend *h)
{
	struct ssv_softc *sc = container_of(h, struct ssv_softc, early_suspend);
	sc->ps_status = PWRSV_PREPARE;
	printk(KERN_INFO "ssv6xxx_early_suspend\n");
}
#define DEAUTH_DISASSOC_LEN (24 + 2)
void ssv6xxx_send_deauth_toself(struct ssv_softc *sc, const u8 *bssid,
				const u8 *self_addr)
{
	struct sk_buff *deauth_skb;
	u8 frame_buf[DEAUTH_DISASSOC_LEN];
	struct ieee80211_mgmt *mgmt = (void *)frame_buf;
	mgmt->frame_control =
	    cpu_to_le16(IEEE80211_FTYPE_MGMT | IEEE80211_STYPE_DEAUTH);
	mgmt->duration = 0;
	mgmt->seq_ctrl = 0;
	memcpy(mgmt->da, self_addr, ETH_ALEN);
	memcpy(mgmt->sa, bssid, ETH_ALEN);
	memcpy(mgmt->bssid, bssid, ETH_ALEN);
	mgmt->u.deauth.reason_code = cpu_to_le16(2);
	{
		deauth_skb = dev_alloc_skb(DEAUTH_DISASSOC_LEN);
		if (!deauth_skb)
			return;
		memcpy(skb_put(deauth_skb, DEAUTH_DISASSOC_LEN), mgmt,
		       DEAUTH_DISASSOC_LEN);
#if defined(USE_THREAD_RX) && !defined(IRQ_PROC_RX_DATA)
		local_bh_disable();
		ieee80211_rx(sc->hw, deauth_skb);
		local_bh_enable();
#else
		ieee80211_rx_irqsafe(sc->hw, deauth_skb);
#endif
		return;
	}
}
void ssv6xxx_late_resume(struct early_suspend *h)
{
	struct ssv_softc *sc = container_of(h, struct ssv_softc, early_suspend);
	if (sc->ps_status == PWRSV_ENABLE) {
		if (sc->vif_info[0].vif) {
			if (sc->vif_info[0].vif->bss_conf.assoc) {
				printk("sc->vif_info[0].vif->bss_conf.assoc\n");
				if ((sc->vif_info[0].vif->type ==
				     NL80211_IFTYPE_STATION) ||
				    (sc->vif_info[0].vif->p2p)) {
					printk("sc->vif_info[0].vif->bss_conf."
					       "assoc "
					       "ssv6xxx_send_deauth_toself\n");
					ssv6xxx_send_deauth_toself(
					    sc,
					    sc->vif_info[0].vif->bss_conf.bssid,
					    sc->vif_info[0].vif->addr);
				}
			}
		}
		if (sc->vif_info[1].vif) {
			if (sc->vif_info[1].vif->bss_conf.assoc) {
				printk("sc->vif_info[1].vif->bss_conf.assoc\n");
				if ((sc->vif_info[1].vif->type ==
				     NL80211_IFTYPE_STATION) ||
				    (sc->vif_info[1].vif->p2p)) {
					printk("sc->vif_info[1].vif->bss_conf."
					       "assoc "
					       "ssv6xxx_send_deauth_toself\n");
					ssv6xxx_send_deauth_toself(
					    sc,
					    sc->vif_info[1].vif->bss_conf.bssid,
					    sc->vif_info[1].vif->addr);
				}
			}
		}
	}
	if (sc)
		ssv6xxx_disable_ps(sc);
	else
		printk(KERN_INFO "ssv6xxx_late_resume,sc=NULL\n");
	printk(KERN_INFO "ssv6xxx_late_resume\n");
}
#endif
void ssv_wakelock_init(struct ssv_softc *sc)
{
#ifdef CONFIG_HAS_WAKELOCK
	wake_lock_init(&sc->ssv_wake_lock_, WAKE_LOCK_SUSPEND, "ssv6051");
#endif
}
void ssv_wakelock_destroy(struct ssv_softc *sc)
{
#ifdef CONFIG_HAS_WAKELOCK
	wake_lock_destroy(&sc->ssv_wake_lock_);
#endif
}
void ssv_wake_lock(struct ssv_softc *sc)
{
#ifdef CONFIG_HAS_WAKELOCK
	wake_lock(&sc->ssv_wake_lock_);
#endif
}
void ssv_wake_timeout(struct ssv_softc *sc, int secs)
{
#ifdef CONFIG_HAS_WAKELOCK
	wake_lock_timeout(&sc->ssv_wake_lock_, secs * HZ);
#endif
}
void ssv_wake_unlock(struct ssv_softc *sc)
{
#ifdef CONFIG_HAS_WAKELOCK
	wake_unlock(&sc->ssv_wake_lock_);
#endif
}
#endif
