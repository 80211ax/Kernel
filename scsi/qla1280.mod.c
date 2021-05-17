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
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0x5a921311, "strncmp" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x349cba85, "strchr" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb9f0b3f, "pci_ioremap_bar" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9f035a5f, "release_firmware" },
	{ 0x52ec8fe4, "request_firmware" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x87b8798d, "sg_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xea722105, "scsi_dma_map" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x29361773, "complete" },
	{ 0xc5850110, "printk" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001077d00001216sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001240sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001280sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001016sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CDC32CB67EE308114DC865C");
