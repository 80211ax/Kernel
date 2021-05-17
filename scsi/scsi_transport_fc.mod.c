#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x46eeba74, "module_layout" },
	{ 0x9481586, "transport_class_register" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8ad056d8, "scsi_remove_target" },
	{ 0xd53db9b7, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf07de610, "scsi_flush_work" },
	{ 0xa1f5d9c8, "blk_mq_run_hw_queues" },
	{ 0xb4900436, "dev_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5e16711d, "transport_destroy_device" },
	{ 0x2569b71f, "bsg_job_put" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdaf97dab, "attribute_container_unregister" },
	{ 0x53c5945, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0x7527a3f, "bsg_job_get" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xef9ddd57, "device_del" },
	{ 0x5f9f25c2, "scsi_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xdcc6051c, "transport_add_device" },
	{ 0xc5850110, "printk" },
	{ 0x240345dd, "transport_configure_device" },
	{ 0x5a921311, "strncmp" },
	{ 0x2c0ba747, "attribute_container_register" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x48f53a13, "sysfs_remove_link" },
	{ 0x10936407, "device_add" },
	{ 0x2555de64, "transport_class_unregister" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x5a10150, "sysfs_create_link" },
	{ 0xff17b2c5, "scsi_target_unblock" },
	{ 0x5dab323c, "__alloc_skb" },
	{ 0xb4e68f2a, "scsi_host_get" },
	{ 0xe92f0023, "netlink_broadcast" },
	{ 0x509b9ea9, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd96b290a, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409fad5b, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1cbdc193, "blk_mq_end_request" },
	{ 0xf3b26b8a, "get_device" },
	{ 0xd52edf1a, "__scsi_init_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcfed9b44, "device_initialize" },
	{ 0x3dfa5d6c, "scsi_is_target_device" },
	{ 0x405b5d62, "scsi_nl_sock" },
	{ 0xa71f567e, "transport_remove_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8fd157f, "scsi_target_block" },
	{ 0x7e75a9e8, "bsg_job_done" },
	{ 0x14b44fa7, "dev_set_name" },
	{ 0x1f362192, "bsg_remove_queue" },
	{ 0xbdb4cf76, "bsg_setup_queue" },
	{ 0x5af55d60, "param_ops_uint" },
	{ 0x76713aad, "__nlmsg_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "933B32C63DC87EA8829348F");
