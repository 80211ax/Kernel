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
	{ 0x9481586, "transport_class_register" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xa2952f35, "attribute_container_classdev_to_container" },
	{ 0xb4900436, "dev_printk" },
	{ 0xdaf97dab, "attribute_container_unregister" },
	{ 0x2c0ba747, "attribute_container_register" },
	{ 0x10936407, "device_add" },
	{ 0x2555de64, "transport_class_unregister" },
	{ 0x64cc1256, "attribute_container_find_class_device" },
	{ 0x509b9ea9, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xf3b26b8a, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xcfed9b44, "device_initialize" },
	{ 0xa106af3b, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x14b44fa7, "dev_set_name" },
	{ 0x3b6030d, "scsi_is_sdev_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "6EDEED1D99649BFAD4562FE");
