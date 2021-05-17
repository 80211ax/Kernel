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
	{ 0x3c439a6c, "param_ops_int" },
	{ 0xd7cdd197, "param_array_ops" },
	{ 0x12dfb7e6, "noop_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xa539103b, "driver_unregister" },
	{ 0x1d10e86a, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x430a5977, "scsi_register_driver" },
	{ 0x36653098, "__register_chrdev" },
	{ 0x77889920, "__class_create" },
	{ 0xc5850110, "printk" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0x9166fada, "strncpy" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x89358eb8, "scsi_ioctl" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x8b07a7fe, "scsi_ioctl_block_when_processing_errors" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x793419d2, "device_destroy" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9ef71b25, "device_create" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0x63700fba, "scsi_device_lookup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x26130b8f, "scsi_print_sense_hdr" },
	{ 0xd2853335, "__scsi_execute" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x77e52315, "scsi_device_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "21B90B80B9FEAF18C21035F");
