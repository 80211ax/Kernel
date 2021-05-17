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
	{ 0x9eaa394f, "no_llseek" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x96d7a887, "single_release" },
	{ 0x65864e13, "seq_read" },
	{ 0xd6b9b1d0, "seq_lseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xeb8f73e4, "class_interface_unregister" },
	{ 0x96e5c2b7, "remove_proc_subtree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x1d10e86a, "class_destroy" },
	{ 0xf120f60, "proc_create_single_data" },
	{ 0x9310d494, "proc_create_seq_private" },
	{ 0xdc85586d, "proc_create" },
	{ 0x9f735b21, "proc_mkdir" },
	{ 0x4f194ad9, "scsi_register_interface" },
	{ 0x77889920, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0x3de1ce7e, "sg_scsi_ioctl" },
	{ 0x89358eb8, "scsi_ioctl" },
	{ 0xa52f602, "blk_trace_startstop" },
	{ 0x34badc9, "blk_trace_setup" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x11b0ee53, "blk_trace_remove" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x4fcc8ad2, "ex_handler_uaccess" },
	{ 0x8b07a7fe, "scsi_ioctl_block_when_processing_errors" },
	{ 0x27639220, "blk_verify_command" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x39fded01, "blk_rq_map_user_iov" },
	{ 0x42339f52, "import_iovec" },
	{ 0x839db765, "blk_execute_rq_nowait" },
	{ 0xcca6d1f6, "blk_rq_map_user" },
	{ 0x8e7f14a3, "blk_get_request" },
	{ 0x56a1f568, "__module_get" },
	{ 0x84d4217, "scsi_block_when_processing_errors" },
	{ 0x8229642a, "scsi_autopm_get_device" },
	{ 0x77e52315, "scsi_device_get" },
	{ 0xf5362d8, "nonseekable_open" },
	{ 0x86e1af90, "alloc_pages_current" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfbf33a3f, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x1e037158, "module_put" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0xebb8bea3, "scsi_autopm_put_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd3599020, "__task_pid_nr_ns" },
	{ 0xeb451f43, "current_task" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x198b5abc, "blk_put_request" },
	{ 0x5f9f7cdd, "blk_rq_unmap_user" },
	{ 0xb7f322c7, "__free_pages" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x5d1bc8e1, "single_open" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x1b0fe62b, "seq_puts" },
	{ 0x20978fb9, "idr_find" },
	{ 0x7fe0e5a, "seq_printf" },
	{ 0xc5850110, "printk" },
	{ 0x5a10150, "sysfs_create_link" },
	{ 0x9ef71b25, "device_create" },
	{ 0xebbc048, "cdev_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0x28e03574, "cdev_alloc" },
	{ 0xc3aad268, "__alloc_disk_node" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc1f9a642, "fasync_helper" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xebf9a6bf, "cdev_del" },
	{ 0x793419d2, "device_destroy" },
	{ 0x48f53a13, "sysfs_remove_link" },
	{ 0x2fe2fbba, "kill_fasync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x10b63bbc, "put_disk" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "9A4707E434A168A180ADA91");
