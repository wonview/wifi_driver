#include <linux/slab.h>
#include <linux/vmalloc.h>
#include <linux/export.h>
#include <asm/unaligned.h>
#include "debug.h"
int ssv_sdiobridge_init_debug(struct ssv_sdiobridge_glue *glue)
{
	glue->debugfs = debugfs_create_dir("ssv", NULL);
	if (!glue->debugfs)
		return -ENOMEM;
	glue->dump_entry = debugfs_create_bool("sdiobridge_dump", S_IRUSR,
					       glue->debugfs, &glue->dump);
	return 0;
}
void ssv_sdiobridge_deinit_debug(struct ssv_sdiobridge_glue *glue)
{
	if (!glue->dump_entry)
		debugfs_remove(glue->dump_entry);
}
