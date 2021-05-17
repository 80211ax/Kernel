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
	{ 0x204c5067, "scsi_dev_info_add_list" },
	{ 0x9481586, "transport_class_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0x754d539c, "strlen" },
	{ 0xb4900436, "dev_printk" },
	{ 0xb7f2c2dc, "scsi_get_device_flags_keyed" },
	{ 0x58884faa, "scsi_target_resume" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x198cadf5, "anon_transport_class_register" },
	{ 0xdaf97dab, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x97bdfa60, "scsi_dev_info_remove_list" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8a66042e, "scsi_device_quiesce" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0xfb578fc5, "memset" },
	{ 0x4086ad57, "sysfs_chmod_file" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd2853335, "__scsi_execute" },
	{ 0x5a921311, "strncmp" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0x2c0ba747, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x2555de64, "transport_class_unregister" },
	{ 0x5fdc9cde, "sysfs_update_group" },
	{ 0x7b178afe, "unlock_system_sleep" },
	{ 0xebc9a09f, "lock_system_sleep" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0x99a3020f, "_dev_info" },
	{ 0x2733eaf7, "scsi_dev_info_list_add_keyed" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xccd349a8, "scsi_device_set_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xe4ec10de, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0xf430494c, "scsi_target_quiesce" },
	{ 0x3dfa5d6c, "scsi_is_target_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x77e52315, "scsi_device_get" },
	{ 0x1189d809, "anon_transport_class_unregister" },
	{ 0x3b6030d, "scsi_is_sdev_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "E418CD04846F379B1C68D1D");
