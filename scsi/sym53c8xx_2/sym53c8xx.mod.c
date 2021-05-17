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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xb4f68313, "spi_dv_device" },
	{ 0x25f78c36, "pci_write_config_word" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x754d539c, "strlen" },
	{ 0xbc3ed63e, "pci_read_config_byte" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xb4900436, "dev_printk" },
	{ 0x39f9cd5e, "pci_get_slot" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x7fe0e5a, "seq_printf" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa00e0f78, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0x360262ed, "scmd_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1b7d23cb, "spi_attach_transport" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaa3ea2c6, "param_ops_charp" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0xf10de535, "ioread8" },
	{ 0x11089ac7, "_ctype" },
	{ 0x2fc16008, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf1e046cc, "panic" },
	{ 0x72b247c4, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0xef06974, "spi_populate_ppr_msg" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0x62a9cf21, "pci_set_mwi" },
	{ 0x99a3020f, "_dev_info" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xaca6cc28, "spi_release_transport" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9a4444db, "param_ops_byte" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0x3a4685ab, "spi_display_xfer_agreement" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xc4691d55, "pcibios_resource_to_bus" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0xc5534d64, "ioread16" },
	{ 0x9efa46cb, "pci_dev_put" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0xa95751b2, "pci_iomap" },
	{ 0x84ee6cc3, "param_ops_ushort" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x3686ea09, "spi_print_msg" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x5af55d60, "param_ops_uint" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xea722105, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,scsi_transport_spi";

MODULE_ALIAS("pci:v00001000d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00001000d0000000Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000010sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00001000d00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000008Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CFD1224C3B81D349BC17854");
