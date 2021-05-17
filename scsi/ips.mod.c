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
	{ 0xaa3ea2c6, "param_ops_charp" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0xea722105, "scsi_dma_map" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x8d73278e, "hex_asc_upper" },
	{ 0x9166fada, "strncpy" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xc5850110, "printk" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x69acdf38, "memcpy" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x13e829da, "dma_ops" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0xe914e41e, "strcpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xeb451f43, "current_task" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x349cba85, "strchr" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0xbc3ed63e, "pci_read_config_byte" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6fcb87a1, "touch_softlockup_watchdog" },
	{ 0xc4ae915e, "arch_touch_nmi_watchdog" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xc5beb8c0, "seq_putc" },
	{ 0x7fe0e5a, "seq_printf" },
	{ 0x1b0fe62b, "seq_puts" },
	{ 0xb4900436, "dev_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001014d0000002Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000001BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000250sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "21F97E55D46DA773D4CB1DB");
