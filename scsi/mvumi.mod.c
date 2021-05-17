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
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0xb264ada5, "pci_read_config_dword" },
	{ 0xaf234b63, "kthread_create_on_node" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0x39fe5dd9, "pci_restore_state" },
	{ 0xe1e96cf3, "pci_enable_wake" },
	{ 0xd93aee01, "pci_write_config_dword" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd89ce32c, "wake_up_process" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x87b8798d, "sg_next" },
	{ 0x87884ac, "dma_direct_map_sg" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x9bdc47df, "dma_direct_unmap_sg" },
	{ 0x13e829da, "dma_ops" },
	{ 0x1000e51, "schedule" },
	{ 0xe3b1136b, "scsi_rescan_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb451f43, "current_task" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xc5850110, "printk" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb161e25f, "kthread_stop" },
	{ 0x13c189ea, "pci_set_power_state" },
	{ 0x4fd793ad, "pci_choose_state" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0x13e28305, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x360262ed, "scmd_printk" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0xa95751b2, "pci_iomap" },
	{ 0x2fc16008, "pci_iounmap" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0x4e2c352e, "scsi_remove_device" },
	{ 0x87fbec93, "__dynamic_dev_dbg" },
	{ 0xdc5a2365, "scsi_add_device" },
	{ 0x63700fba, "scsi_device_lookup" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001B4Bd00009143sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009580sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2718502E33D8977A69F5594");
