#ifndef __SSV6XXX_DBGFS_H__
#define __SSV6XXX_DBGFS_H__
int ssv6xxx_init_debugfs(struct ssv_softc *sc, const char *name);
void ssv6xxx_deinit_debugfs(struct ssv_softc *sc);
int ssv6xxx_debugfs_remove_interface(struct ssv_softc *sc,
				     struct ieee80211_vif *vif);
int ssv6xxx_debugfs_add_interface(struct ssv_softc *sc,
				  struct ieee80211_vif *vif);
int ssv6xxx_debugfs_remove_sta(struct ssv_softc *sc, struct ssv_sta_info *sta);
int ssv6xxx_debugfs_add_sta(struct ssv_softc *sc, struct ssv_sta_info *sta);
#endif
