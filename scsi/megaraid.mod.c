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
	{ 0x5af55d60, "param_ops_uint" },
	{ 0x84ee6cc3, "param_ops_ushort" },
	{ 0x12dfb7e6, "noop_llseek" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x36653098, "__register_chrdev" },
	{ 0xa9b8f3d9, "remove_proc_entry" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x9f735b21, "proc_mkdir" },
	{ 0x96e5c2b7, "remove_proc_subtree" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0x9c51e173, "seq_write" },
	{ 0xc5beb8c0, "seq_putc" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0xf120f60, "proc_create_single_data" },
	{ 0xa0977477, "proc_mkdir_data" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x13e829da, "dma_ops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb264ada5, "pci_read_config_dword" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xedc03953, "iounmap" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x72b247c4, "pci_read_config_word" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0xeb451f43, "current_task" },
	{ 0x8bd6c5ef, "_dev_notice" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xea722105, "scsi_dma_map" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0xf162df, "dma_set_mask" },
	{ 0x1a1cd2a3, "pci_alloc_dev" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x7fe0e5a, "seq_printf" },
	{ 0x1b0fe62b, "seq_puts" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afe9a77, "scsi_partsize" },
	{ 0x18866a7b, "scsi_bios_ptable" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0x33f33f47, "_dev_crit" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x29361773, "complete" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x99a3020f, "_dev_info" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v0000101Ed00009010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000101Ed00009060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001960sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2715928ABA25212C0CE4E31");
