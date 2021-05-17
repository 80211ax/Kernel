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
	{ 0xf875e96b, "ufshcd_pltfrm_runtime_idle" },
	{ 0x6bb02468, "ufshcd_pltfrm_runtime_resume" },
	{ 0xeeae1315, "ufshcd_pltfrm_runtime_suspend" },
	{ 0x1c9642aa, "ufshcd_pltfrm_resume" },
	{ 0x9bb396ef, "ufshcd_pltfrm_suspend" },
	{ 0x4d71a9fb, "platform_driver_unregister" },
	{ 0xf88ac256, "__platform_driver_register" },
	{ 0xab5d7158, "ufshcd_pltfrm_init" },
	{ 0x5873b9e2, "ufshcd_remove" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ufshcd-pltfrm,ufshcd-core";

MODULE_ALIAS("of:N*T*Ccdns,ufshc");
MODULE_ALIAS("of:N*T*Ccdns,ufshcC*");
MODULE_ALIAS("of:N*T*Ccdns,ufshc-m31-16nm");
MODULE_ALIAS("of:N*T*Ccdns,ufshc-m31-16nmC*");

MODULE_INFO(srcversion, "0007303BDF94E5BFF2C0AC2");
