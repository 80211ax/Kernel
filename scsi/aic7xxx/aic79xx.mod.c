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
	{ 0x85bd1608, "__request_region" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xd93aee01, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc6ae26d2, "scsi_device_lookup_by_target" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xb4f68313, "spi_dv_device" },
	{ 0x25f78c36, "pci_write_config_word" },
	{ 0x349cba85, "strchr" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x77358855, "iomem_resource" },
	{ 0xbc3ed63e, "pci_read_config_byte" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x775c84cf, "scsi_block_requests" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xb4900436, "dev_printk" },
	{ 0xd6103fc2, "scsi_unblock_requests" },
	{ 0x39f9cd5e, "pci_get_slot" },
	{ 0x1b0fe62b, "seq_puts" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x7fe0e5a, "seq_printf" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa00e0f78, "pci_write_config_byte" },
	{ 0x360262ed, "scmd_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x85df9b6c, "strsep" },
	{ 0x1b7d23cb, "spi_attach_transport" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb47461c0, "dma_get_required_mask" },
	{ 0xaa3ea2c6, "param_ops_charp" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x39fe5dd9, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xf1e046cc, "panic" },
	{ 0xc5beb8c0, "seq_putc" },
	{ 0x5a921311, "strncmp" },
	{ 0x72b247c4, "pci_read_config_word" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0xef06974, "spi_populate_ppr_msg" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0x61651be, "strcat" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xaca6cc28, "spi_release_transport" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb264ada5, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x13c189ea, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a4685ab, "spi_display_xfer_agreement" },
	{ 0xedc03953, "iounmap" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0xf7bba152, "scsi_report_bus_reset" },
	{ 0x9efa46cb, "pci_dev_put" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x2bac2baa, "scsi_report_device_reset" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x13e28305, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xea722105, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,scsi_transport_spi";

MODULE_ALIAS("pci:v00009005d00008000sv00009005sd00000060bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008000sv00009005sd00000060bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008080sv00009005sd00000060bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008080sv00009005sd00000060bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008017sv00009005sd00000044bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008017sv00009005sd00000044bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008097sv00009005sd00000044bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008097sv00009005sd00000044bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008017sv00009005sd00000045bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008017sv00009005sd00000045bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008097sv00009005sd00000045bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008097sv00009005sd00000045bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008012sv00009005sd00000042bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008012sv00009005sd00000042bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008092sv00009005sd00000042bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008092sv00009005sd00000042bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008013sv00009005sd00000043bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008013sv00009005sd00000043bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008093sv00009005sd00000043bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008093sv00009005sd00000043bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008014sv00009005sd00000044bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008014sv00009005sd00000044bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008094sv00009005sd00000044bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008094sv00009005sd00000044bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008010sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008010sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008090sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008090sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008015sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008015sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008095sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008095sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008016sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008016sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008096sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008096sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008011sv00009005sd00000041bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008011sv00009005sd00000041bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008091sv00009005sd00000041bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008091sv00009005sd00000041bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008011sv00000E11sd000000ACbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008011sv00000E11sd000000ACbc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008091sv00000E11sd000000ACbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008091sv00000E11sd000000ACbc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Csv00009005sd00000041bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Csv00009005sd00000041bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Csv00009005sd00000041bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Csv00009005sd00000041bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Csv00000E11sd000000ACbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Csv00000E11sd000000ACbc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Csv00000E11sd000000ACbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Csv00000E11sd000000ACbc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008000sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008000sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008080sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008080sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008001sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008001sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008081sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008081sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008002sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008002sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008082sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008082sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008003sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008003sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008083sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008083sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008004sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008004sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008084sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008084sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008005sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008005sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008085sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008085sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008006sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008006sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008086sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008086sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008007sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008007sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008087sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008087sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008008sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008008sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008088sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008088sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008009sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008009sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008089sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008089sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Asv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Asv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Bsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Bsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Csv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Csv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Dsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Dsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Fsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Fsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008010sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008010sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008090sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008090sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008011sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008011sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008091sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008091sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008012sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008012sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008092sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008092sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008013sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008013sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008093sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008093sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008014sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008014sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008094sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008094sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008015sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008015sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008095sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008095sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008016sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008016sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008096sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008096sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008017sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008017sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008097sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008097sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008018sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008018sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008098sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008098sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008019sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008019sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008099sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008099sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Asv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Asv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Bsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Bsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Csv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Csv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Dsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Dsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Fsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Fsv*sd*bc01sc04i*");

MODULE_INFO(srcversion, "6AB02217F3E0A3BAB6816E7");
