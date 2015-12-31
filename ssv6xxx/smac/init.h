#ifndef _INIT_H_
#define _INIT_H_
int ssv6xxx_init_mac(struct ssv_hw *sh);
int ssv6xxx_do_iq_calib(struct ssv_hw *sh, struct ssv6xxx_iqk_cfg *p_cfg);
void ssv6xxx_deinit_mac(struct ssv_softc *sc);
void ssv6xxx_restart_hw(struct ssv_softc *sc);
#endif
