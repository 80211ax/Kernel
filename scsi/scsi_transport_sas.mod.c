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
	{ 0x8ad056d8, "scsi_remove_target" },
	{ 0x17036458, "blk_cleanup_queue" },
	{ 0x754d539c, "strlen" },
	{ 0xb4900436, "dev_printk" },
	{ 0x5e16711d, "transport_destroy_device" },
	{ 0xdaf97dab, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x53c5945, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0xef9ddd57, "device_del" },
	{ 0xdcc6051c, "transport_add_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x240345dd, "transport_configure_device" },
	{ 0x5a921311, "strncmp" },
	{ 0x2c0ba747, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x48f53a13, "sysfs_remove_link" },
	{ 0x10936407, "device_add" },
	{ 0x2555de64, "transport_class_unregister" },
	{ 0x5a10150, "sysfs_create_link" },
	{ 0x509b9ea9, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409fad5b, "transport_setup_device" },
	{ 0x2092fc21, "bsg_unregister_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xf3b26b8a, "get_device" },
	{ 0xe4ec10de, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0xcfed9b44, "device_initialize" },
	{ 0x7bd7594e, "scsi_get_vpd_page" },
	{ 0xa71f567e, "transport_remove_device" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7e75a9e8, "bsg_job_done" },
	{ 0x14b44fa7, "dev_set_name" },
	{ 0x1f362192, "bsg_remove_queue" },
	{ 0xbdb4cf76, "bsg_setup_queue" },
	{ 0x184fef12, "scsi_mode_sense" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "8BDB13EF1EFC5A799F411C6");
