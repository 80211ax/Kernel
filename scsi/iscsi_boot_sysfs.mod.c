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
	{ 0xb8b46e62, "kobject_put" },
	{ 0x6f1b31d, "kset_create_and_add" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xa6c287c9, "kobject_uevent" },
	{ 0x222c68dd, "sysfs_remove_group" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x5823fa20, "firmware_kobj" },
	{ 0x8d5d5af1, "sysfs_create_group" },
	{ 0xe4f8dd9a, "kobject_init_and_add" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x3ddc45ad, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9F75765FDAF00D1763D42C5");
