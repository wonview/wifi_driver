#include <ssv6200.h>
#include "lib.h"
struct sk_buff *ssv_skb_alloc(s32 len)
{
	struct sk_buff *skb;
	skb = __dev_alloc_skb(len + 128, GFP_KERNEL);
	if (skb != NULL) {
		skb_put(skb, 0x20);
		skb_pull(skb, 0x20);
	}
	return skb;
}
void ssv_skb_free(struct sk_buff *skb)
{
	dev_kfree_skb_any(skb);
}
