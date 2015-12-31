#ifndef _SSV_PM_H_
#define _SSV_PM_H_
#ifdef CONFIG_SSV_SUPPORT_ANDROID
#ifdef CONFIG_HAS_EARLYSUSPEND
void ssv6xxx_early_suspend(struct early_suspend *h);
void ssv6xxx_late_resume(struct early_suspend *h);
#endif
#ifdef CONFIG_HAS_WAKELOCK
void ssv_wakelock_init(struct ssv_softc *sc);
void ssv_wakelock_destroy(struct ssv_softc *sc);
void ssv_wake_lock(struct ssv_softc *sc);
void ssv_wake_timeout(struct ssv_softc *sc, int secs);
void ssv_wake_unlock(struct ssv_softc *sc);
#endif
#endif
#endif
