#ifndef SSVSDIOBRIDGE_H
#define SSVSDIOBRIDGE_H
#include <linux/etherdevice.h>
#include <linux/device.h>
#include <linux/interrupt.h>
#include <linux/leds.h>
#include <linux/completion.h>
#include <linux/ioctl.h>
#include <linux/types.h>
#include "sdiobridge_pub.h"
struct ssv_sdiobridge_glue
{
	struct device *dev;
	u8 blockMode;
	u16 blockSize;
	u8 autoAckInt;
	unsigned int dataIOPort;
	unsigned int regIOPort;
	u8 funcFocus;
	atomic_t irq_handling;
	wait_queue_head_t irq_wq;
	wait_queue_head_t read_wq;
	spinlock_t rxbuflock;
	void *bufaddr;
	struct list_head rxbuf;
	struct list_head rxreadybuf;
	struct dentry *debugfs;
	struct dentry *dump_entry;
	u32 dump;
};
#define MANUFACTURER_SSV_CODE 0x3030
#define MANUFACTURER_ID_CABRIO_BASE 0x3030
#endif
