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
	{ 0xd183c769, "scsi_unregister_device_handler" },
	{ 0xc5850110, "printk" },
	{ 0xca070288, "scsi_register_device_handler" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7bd7594e, "scsi_get_vpd_page" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0xd2853335, "__scsi_execute" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "FA0AAEA6D556DC1D890526E");
