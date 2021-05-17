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
	{ 0x12dfb7e6, "noop_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xa539103b, "driver_unregister" },
	{ 0xb45c1c8e, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x430a5977, "scsi_register_driver" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x723d2b81, "__class_register" },
	{ 0x379fd813, "blk_put_queue" },
	{ 0x5a10150, "sysfs_create_link" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x54fead66, "blk_get_queue" },
	{ 0xc3aad268, "__alloc_disk_node" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x8229642a, "scsi_autopm_get_device" },
	{ 0x77e52315, "scsi_device_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0xebb8bea3, "scsi_autopm_put_device" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd53db9b7, "blk_queue_rq_timeout" },
	{ 0xc6cbbc89, "capable" },
	{ 0x89358eb8, "scsi_ioctl" },
	{ 0xe40c0d55, "scsi_cmd_ioctl" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8b07a7fe, "scsi_ioctl_block_when_processing_errors" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x84d4217, "scsi_block_when_processing_errors" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xcca6d1f6, "blk_rq_map_user" },
	{ 0x839db765, "blk_execute_rq_nowait" },
	{ 0x69acdf38, "memcpy" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x8e7f14a3, "blk_get_request" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb451f43, "current_task" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xfbf33a3f, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xb6f7e88d, "__put_devmap_managed_page" },
	{ 0xfb578fc5, "memset" },
	{ 0x9ed84d8e, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x7c70a82c, "get_user_pages_fast" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x198b5abc, "blk_put_request" },
	{ 0x5f9f7cdd, "blk_rq_unmap_user" },
	{ 0x29361773, "complete" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x86e1af90, "alloc_pages_current" },
	{ 0x194ec914, "scsi_set_medium_removal" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x9ef71b25, "device_create" },
	{ 0xebbc048, "cdev_add" },
	{ 0x28e03574, "cdev_alloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa106af3b, "device_unregister" },
	{ 0xebf9a6bf, "cdev_del" },
	{ 0x48f53a13, "sysfs_remove_link" },
	{ 0x10b63bbc, "put_disk" },
	{ 0x37a0cba, "kfree" },
	{ 0xb7f322c7, "__free_pages" },
	{ 0x96848186, "scnprintf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "BC7BF3F0D5C28137E193E3A");
