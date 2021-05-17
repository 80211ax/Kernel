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
	{ 0x12dfb7e6, "noop_llseek" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0x36653098, "__register_chrdev" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x87b8798d, "sg_next" },
	{ 0xea722105, "scsi_dma_map" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x754d539c, "strlen" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd53db9b7, "blk_queue_rq_timeout" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc6cbbc89, "capable" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x25f78c36, "pci_write_config_word" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v000013C1d00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C1d00001001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E773018E06A87142566C6ED");
