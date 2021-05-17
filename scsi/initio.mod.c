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
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x13e829da, "dma_ops" },
	{ 0xea722105, "scsi_dma_map" },
	{ 0x69acdf38, "memcpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0x37a0cba, "kfree" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x85bd1608, "__request_region" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xb264ada5, "pci_read_config_dword" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001101d00009500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001101d00009400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001101d00009401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001101d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000134Ad00000002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "929947EA17A8982F8E86FC4");
