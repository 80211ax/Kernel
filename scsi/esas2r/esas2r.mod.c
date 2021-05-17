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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0x9d207c4b, "sysfs_remove_bin_file" },
	{ 0x77b1fbd2, "pci_release_region" },
	{ 0x25f78c36, "pci_write_config_word" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x4e2c352e, "scsi_remove_device" },
	{ 0xf162df, "dma_set_mask" },
	{ 0x1b0fe62b, "seq_puts" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x7fe0e5a, "seq_printf" },
	{ 0xa9b8f3d9, "remove_proc_entry" },
	{ 0x36653098, "__register_chrdev" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe1e96cf3, "pci_enable_wake" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb47461c0, "dma_get_required_mask" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x39fe5dd9, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xc5beb8c0, "seq_putc" },
	{ 0x72b247c4, "pci_read_config_word" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xe6fb3fdf, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfa5189f6, "pci_find_capability" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdc5a2365, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x63700fba, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb264ada5, "pci_read_config_dword" },
	{ 0xccd349a8, "scsi_device_set_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x13c189ea, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xae3cf404, "pci_disable_msi" },
	{ 0x7381b6dd, "param_ops_long" },
	{ 0xedc03953, "iounmap" },
	{ 0xa1af534b, "sysfs_create_bin_file" },
	{ 0xcf2a6966, "up" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0xf7bba152, "scsi_report_bus_reset" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4fd793ad, "pci_choose_state" },
	{ 0xdc85586d, "proc_create" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xf1091b46, "pci_request_region" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x13e28305, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xea722105, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd00000049bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Abc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Bbc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Cbc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Dbc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Ebc*sc*i*");

MODULE_INFO(srcversion, "DAD387D8F5894B130324BE8");
