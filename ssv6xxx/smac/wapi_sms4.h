#ifndef WAPI_SMS4_H
#define WAPI_SMS4_H
void WapiCryptoSms4(u8 *iv, u8 *key, u8 *input, u16 length, u8 *output);
void WapiCryptoSms4Mic(u8 *iv, u8 *Key, u8 *header, u16 headerLength,
		       const u8 *input, u16 dataLength, u8 *output);
#endif
