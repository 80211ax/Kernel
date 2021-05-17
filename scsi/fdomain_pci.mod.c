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
	{ 0xd735abe5, "fdomain_create" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0xaff7df9, "fdomain_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fdomain";

MODULE_ALIAS("pci:v00001036d00000000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6DCE826B3329C83FD6DBC3B");
