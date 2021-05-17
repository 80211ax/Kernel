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
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x87b8798d, "sg_next" },
	{ 0xea722105, "scsi_dma_map" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87fbec93, "__dynamic_dev_dbg" },
	{ 0xe484e35f, "ioread32" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x13e829da, "dma_ops" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x3cb83d5b, "eeprom_93cx6_multireadb" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa95751b2, "pci_iomap" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0xf162df, "dma_set_mask" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x99a3020f, "_dev_info" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x9f035a5f, "release_firmware" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x69acdf38, "memcpy" },
	{ 0x52ec8fe4, "request_firmware" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0x2fc16008, "pci_iounmap" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,eeprom_93cx6";

MODULE_ALIAS("pci:v0000101Cd00003296sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EC8C85070556A161AFC48AE");
