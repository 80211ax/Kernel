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
	{ 0xa539103b, "driver_unregister" },
	{ 0xeb8f73e4, "class_interface_unregister" },
	{ 0x430a5977, "scsi_register_driver" },
	{ 0x4f194ad9, "scsi_register_interface" },
	{ 0xd8e396d9, "__scsi_iterate_devices" },
	{ 0x62847e8, "enclosure_register" },
	{ 0x23b4aaa2, "sas_get_address" },
	{ 0x22dde02a, "enclosure_for_each_device" },
	{ 0xf7505bc, "scsi_is_sas_rphy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x190a1cc5, "enclosure_component_alloc" },
	{ 0x7baf8259, "enclosure_component_register" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xa6c287c9, "kobject_uevent" },
	{ 0x15bd574d, "enclosure_add_device" },
	{ 0xfb578fc5, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd2853335, "__scsi_execute" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xab61e4eb, "enclosure_remove_device" },
	{ 0x7840621e, "enclosure_unregister" },
	{ 0x509b9ea9, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b7f9de4, "enclosure_find" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,enclosure,scsi_transport_sas";


MODULE_INFO(srcversion, "9924768117AC8303EE013F5");
