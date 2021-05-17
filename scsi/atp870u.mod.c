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
	{ 0xa92abb8d, "_dev_err" },
	{ 0xa00e0f78, "pci_write_config_byte" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x99a3020f, "_dev_info" },
	{ 0xbc3ed63e, "pci_read_config_byte" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0xf162df, "dma_set_mask" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7fe0e5a, "seq_printf" },
	{ 0x1b0fe62b, "seq_puts" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x87b8798d, "sg_next" },
	{ 0xea722105, "scsi_dma_map" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001191d0000808Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008060sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BCFBB18706F2082E70F0EED");
