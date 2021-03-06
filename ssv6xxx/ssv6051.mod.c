#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe2630d0, "module_layout" },
	{ 0x613e0967, "sdio_writeb" },
	{ 0xad8d3c90, "sdio_readb" },
	{ 0x9443df3, "skb_queue_head" },
	{ 0x4479796b, "ieee80211_rx_irqsafe" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf88c3301, "sg_init_table" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xe6da44a, "set_normalized_timespec" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xcb678073, "debugfs_create_dir" },
	{ 0xee837328, "mem_map" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xd442b3f4, "_raw_write_lock_irqsave" },
	{ 0x5e7ddee3, "skb_pad" },
	{ 0x89177421, "wake_lock_destroy" },
	{ 0x7ee40a71, "dev_set_drvdata" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf19e9355, "cpu_online_mask" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3b05df25, "malloc_sizes" },
	{ 0x251d717f, "sdio_enable_func" },
	{ 0x46608fa0, "getnstimeofday" },
	{ 0xd81507e5, "sdio_claim_irq" },
	{ 0xca01666d, "_raw_read_lock" },
	{ 0x8bd94317, "_raw_spin_lock_bh" },
	{ 0xbcbdcdb6, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf8596ef5, "ieee80211_beacon_get_tim" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xa778cffc, "remove_proc_entry" },
	{ 0x33543801, "queue_work" },
	{ 0xdda9e423, "wake_lock" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x8abb7cf9, "ieee80211_unregister_hw" },
	{ 0x9e370dae, "filp_close" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc9b98546, "rate_control_send_low" },
	{ 0x132a7a5b, "init_timer_key" },
	{ 0xe1d61c3a, "cancel_delayed_work_sync" },
	{ 0xec70e803, "mutex_unlock" },
	{ 0x3c221555, "debugfs_create_file" },
	{ 0x55b74b46, "wake_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x19b5e1a3, "debugfs_remove_recursive" },
	{ 0x6cec2d16, "kthread_create_on_node" },
	{ 0x6ccf7bd7, "__pv_phys_offset" },
	{ 0x7d11c268, "jiffies" },
	{ 0x9c0a535e, "sdio_get_host_pm_caps" },
	{ 0x52f5adc5, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1e622b61, "ieee80211_stop_queues" },
	{ 0x77339464, "_raw_write_unlock_irqrestore" },
	{ 0xedc74637, "kthread_bind" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xa0ac5628, "ieee80211_stop_queue" },
	{ 0x55fa78ad, "ieee80211_tx_status" },
	{ 0x4467122a, "__init_waitqueue_head" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0x172b8e4c, "mmc_wait_for_req" },
	{ 0xe049991c, "debugfs_create_u32" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0xd656a387, "kernel_read" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x5f754e5a, "memset" },
	{ 0xe10facaa, "proc_mkdir" },
	{ 0x8c7736e2, "dev_alloc_skb" },
	{ 0x11089ac7, "_ctype" },
	{ 0x4837b741, "dev_err" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4161ba77, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x91fadabe, "ieee80211_free_txskb" },
	{ 0xfe5730ec, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0x44bca878, "platform_device_del" },
	{ 0x7d02520f, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xdbea2b94, "ieee80211_rate_control_register" },
	{ 0xc3b7ea73, "platform_device_alloc" },
	{ 0x83c8137a, "ieee80211_wake_queues" },
	{ 0xc3e0a34d, "debugfs_create_u64" },
	{ 0xe8242424, "platform_device_add" },
	{ 0xc8fbd74a, "mmc_set_data_timeout" },
	{ 0x3cecc4ef, "wireless_send_event" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x299b9acd, "ieee80211_rx" },
	{ 0x8712b370, "skb_push" },
	{ 0x431cffd7, "mutex_lock" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x31ba97c, "crypto_unregister_shash" },
	{ 0x465757c3, "cpu_present_mask" },
	{ 0x4cd813a5, "platform_device_unregister" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x89c2871, "platform_driver_register" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7e652735, "skb_pull" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x1db78d04, "dev_kfree_skb_any" },
	{ 0x61651be, "strcat" },
	{ 0x776fee10, "crypto_register_shash" },
	{ 0xc6781bc2, "dev_notice" },
	{ 0x77d9b35b, "sdio_unregister_driver" },
	{ 0xdd401309, "sdio_set_host_pm_flags" },
	{ 0x74cc1cbe, "unregister_cpu_notifier" },
	{ 0xbfa56df2, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x8ab0899a, "skb_queue_tail" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x876434c7, "_dev_info" },
	{ 0xbb1c19ee, "platform_device_register" },
	{ 0x78e264f6, "__alloc_skb" },
	{ 0x4550ba8a, "register_cpu_notifier" },
	{ 0xb368ec89, "_raw_spin_unlock_bh" },
	{ 0x66e5fb7b, "sdio_release_irq" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xf045cd70, "wake_lock_timeout" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x35423960, "sdio_align_size" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x8f67643d, "ieee80211_find_sta" },
	{ 0xe792ce24, "crypto_destroy_tfm" },
	{ 0xbe38f473, "crypto_register_alg" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x4e34fa8d, "wake_up_process" },
	{ 0x47d687d0, "platform_device_add_data" },
	{ 0x3d22b4f3, "kmem_cache_alloc_trace" },
	{ 0x1a0cccce, "__dynamic_dev_dbg" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x92030c14, "ieee80211_wake_queue" },
	{ 0x89b18b38, "ieee80211_stop_rx_ba_session" },
	{ 0xf3fc2d98, "platform_get_resource_byname" },
	{ 0x3ab676ac, "sched_setscheduler" },
	{ 0x72542c85, "__wake_up" },
	{ 0x6af2f5b, "ieee80211_rate_control_unregister" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x47a38009, "sdio_memcpy_toio" },
	{ 0xa5ae6698, "ieee80211_restart_hw" },
	{ 0x81f91103, "proc_create_data" },
	{ 0x81726891, "ieee80211_register_hw" },
	{ 0xefdd2345, "sg_init_one" },
	{ 0x39645b1d, "wifi_pm_power" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x4fb39646, "ieee80211_start_tx_ba_session" },
	{ 0xde5d1761, "wake_lock_init" },
	{ 0xde747f0d, "ieee80211_alloc_hw" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0x2eb22412, "up" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x66aca680, "ieee80211_free_hw" },
	{ 0xf83178bd, "finish_wait" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x6405231e, "skb_dequeue" },
	{ 0x227bf083, "dev_warn" },
	{ 0x2d8d5321, "sunxi_mci_rescan_card" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x29cd063d, "sdio_register_driver" },
	{ 0x81f3085d, "consume_skb" },
	{ 0x45859828, "sdio_memcpy_fromio" },
	{ 0x1681d0df, "sdio_claim_host" },
	{ 0x745e8eeb, "platform_driver_unregister" },
	{ 0xde4b681c, "skb_put" },
	{ 0xaa128f3f, "crypto_alloc_base" },
	{ 0x98de7e36, "crypto_unregister_alg" },
	{ 0x16113b7c, "dev_get_drvdata" },
	{ 0xfac860db, "down_timeout" },
	{ 0xbb6adc45, "sdio_set_block_size" },
	{ 0x38bd731f, "queue_delayed_work" },
	{ 0x1052ae36, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x1a1174ef, "sdio_disable_func" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x8b6c33fc, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc957beff, "platform_device_put" },
	{ 0xfc595949, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v3030d3030*");
MODULE_ALIAS("platform:ssv6200");

MODULE_INFO(srcversion, "17A4473EF554EAEE4F2991A");
