#ifndef DEBUG_H
#define DEBUG_H
#include "sdiobridge.h"
#include <linux/debugfs.h>
int ssv_sdiobridge_init_debug(struct ssv_sdiobridge_glue *glue);
void ssv_sdiobridge_deinit_debug(struct ssv_sdiobridge_glue *glue);
#endif
