#ifndef SEC_H
#define SEC_H
#include <linux/types.h>
#include <linux/ieee80211.h>
#include <net/mac80211.h>
#define CCMP_TK_LEN 16
#define TKIP_KEY_LEN 32
#define WEP_KEY_LEN 13
struct ssv_crypto_ops
{
	const char *name;
	struct list_head list;
	void *(*init)(int keyidx);
	void (*deinit)(void *priv);
	int (*encrypt_mpdu)(struct sk_buff *skb, int hdr_len, void *priv);
	int (*decrypt_mpdu)(struct sk_buff *skb, int hdr_len, void *priv);
	int (*encrypt_msdu)(struct sk_buff *skb, int hdr_len, void *priv);
	int (*decrypt_msdu)(struct sk_buff *skb, int keyidx, int hdr_len,
			    void *priv);
	int (*set_tx_pn)(u8 *seq, void *priv);
	int (*set_key)(void *key, int len, u8 *seq, void *priv);
	int (*get_key)(void *key, int len, u8 *seq, void *priv);
	char *(*print_stats)(char *p, void *priv);
	unsigned long (*get_flags)(void *priv);
	unsigned long (*set_flags)(unsigned long flags, void *priv);
#ifdef MULTI_THREAD_ENCRYPT
	int (*encrypt_prepare)(struct sk_buff *skb, int hdr_len, void *priv);
	int (*decrypt_prepare)(struct sk_buff *skb, int hdr_len, void *priv);
#endif
	int extra_mpdu_prefix_len, extra_mpdu_postfix_len;
	int extra_msdu_prefix_len, extra_msdu_postfix_len;
};
struct ssv_crypto_data
{
	struct ssv_crypto_ops *ops;
	void *priv;
#ifdef HAS_CRYPTO_LOCK
	rwlock_t lock;
#endif
};
struct ssv_crypto_ops *get_crypto_ccmp_ops(void);
struct ssv_crypto_ops *get_crypto_tkip_ops(void);
struct ssv_crypto_ops *get_crypto_wep_ops(void);
#ifdef CONFIG_SSV_WAPI
struct ssv_crypto_ops *get_crypto_wpi_ops(void);
#endif
#endif
