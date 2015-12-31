#ifndef _LIB_H_
#define _LIB_H_
#include <linux/skbuff.h>
#include <linux/netdevice.h>
struct sk_buff *ssv_skb_alloc(s32 len);
void ssv_skb_free(struct sk_buff *skb);
#endif
