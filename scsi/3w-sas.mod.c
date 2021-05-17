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
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x12dfb7e6, "noop_llseek" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0x36653098, "__register_chrdev" },
	{ 0xa1af534b, "sysfs_create_bin_file" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0xa95751b2, "pci_iomap" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0xe6fb3fdf, "pci_enable_msi" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0xf162df, "dma_set_mask" },
	{ 0x5f74be68, "pci_try_set_mwi" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x39fe5dd9, "pci_restore_state" },
	{ 0xe1e96cf3, "pci_enable_wake" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x775c84cf, "scsi_block_requests" },
	{ 0xd6103fc2, "scsi_unblock_requests" },
	{ 0xae3cf404, "pci_disable_msi" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x9d207c4b, "sysfs_remove_bin_file" },
	{ 0x13c189ea, "pci_set_power_state" },
	{ 0x4fd793ad, "pci_choose_state" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0x13e28305, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd53db9b7, "blk_queue_rq_timeout" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x87b8798d, "sg_next" },
	{ 0xea722105, "scsi_dma_map" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v000013C1d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "823453F4E11F88D3193957E");
