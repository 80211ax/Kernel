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
	{ 0x15ca265b, "ufshcd_runtime_suspend" },
	{ 0x3f2ef9a6, "ufshcd_alloc_host" },
	{ 0x6cf97e66, "devm_ioremap_resource" },
	{ 0xfcf79fa9, "ufshcd_system_suspend" },
	{ 0xa3b585f6, "ufshcd_init" },
	{ 0x600387e3, "ufshcd_system_resume" },
	{ 0xc80a5162, "ufshcd_shutdown" },
	{ 0xc5850110, "printk" },
	{ 0xabafa904, "ufshcd_runtime_idle" },
	{ 0x10916929, "platform_get_resource" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0x99a3020f, "_dev_info" },
	{ 0x3e1f40e5, "ufshcd_runtime_resume" },
	{ 0x7ef748, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6db1f48d, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x87fbec93, "__dynamic_dev_dbg" },
	{ 0xf8102b16, "ufshcd_dealloc_host" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x98c11332, "platform_get_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ufshcd-core";


MODULE_INFO(srcversion, "C28B39E36A7B5D278AC02E3");
