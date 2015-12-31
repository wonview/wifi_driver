#ifndef WAPI_WPI_H
#define WAPI_WPI_H
#define WAPI_KEYID_LEN 1
#define WAPI_RESERVD_LEN 1
#define WAPI_PN_LEN 16
#define WAPI_IV_LEN (WAPI_KEYID_LEN + WAPI_RESERVD_LEN + WAPI_PN_LEN)
#define WAPI_MIC_LEN 16
#define ADDID_LEN (ETH_ALEN + ETH_ALEN)
#define WAPI_IV_ICV_OFFSET (WAPI_IV_LEN + WAPI_MIC_LEN)
typedef enum {
	BFALSE = 0,
	BTRUE = 1
} BOOL_T;
typedef enum {
	TV_TRUE = 1,
	TV_FALSE = 2
} TRUTH_VALUE_T;
int lib80211_wpi_set_key(void *key, int len, u8 *seq, void *priv);
int lib80211_wpi_encrypt(struct sk_buff *mpdu, int hdr_len, void *priv);
int lib80211_wpi_decrypt(struct sk_buff *mpdu, int hdr_len, void *priv);
void *lib80211_wpi_init(int key_idx);
void lib80211_wpi_deinit(void *priv);
#ifdef MULTI_THREAD_ENCRYPT
int lib80211_wpi_encrypt_prepare(struct sk_buff *mpdu, int hdr_len, void *priv);
#endif
#endif
