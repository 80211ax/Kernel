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
	{ 0x43cc16bb, "pm_runtime_allow" },
	{ 0xa3b585f6, "ufshcd_init" },
	{ 0x3f2ef9a6, "ufshcd_alloc_host" },
	{ 0x39ba15df, "pcim_iomap_table" },
	{ 0x99ed3e41, "pcim_iomap_regions" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x7a932147, "pcim_enable_device" },
	{ 0xf8102b16, "ufshcd_dealloc_host" },
	{ 0x5873b9e2, "ufshcd_remove" },
	{ 0x1cd049a3, "pm_runtime_forbid" },
	{ 0xc80a5162, "ufshcd_shutdown" },
	{ 0xfcf79fa9, "ufshcd_system_suspend" },
	{ 0x600387e3, "ufshcd_system_resume" },
	{ 0x15ca265b, "ufshcd_runtime_suspend" },
	{ 0x3e1f40e5, "ufshcd_runtime_resume" },
	{ 0xabafa904, "ufshcd_runtime_idle" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8aa799c8, "ufshcd_dme_set_attr" },
	{ 0x829cfe60, "ufshcd_dme_get_attr" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ufshcd-core";

MODULE_ALIAS("pci:v0000144Dd0000C00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DFAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B43sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B962C60C2EF372AC3D24E1D");
