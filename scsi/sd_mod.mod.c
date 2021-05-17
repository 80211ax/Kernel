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
	{ 0x194ec914, "scsi_set_medium_removal" },
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0xef4b0e0e, "kmem_cache_destroy" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xd53db9b7, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x11a9dddd, "t10_pi_type1_ip" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x5c4265f6, "blk_unregister_region" },
	{ 0x68e78dd5, "t10_pi_prepare" },
	{ 0x8b07a7fe, "scsi_ioctl_block_when_processing_errors" },
	{ 0x359bdfe2, "blk_mq_unfreeze_queue" },
	{ 0x1bc16d3c, "blk_queue_io_min" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0xc25ce7d1, "scsi_mode_select" },
	{ 0x360262ed, "scmd_printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xac58abbd, "blk_mq_freeze_queue" },
	{ 0xbcef20de, "blk_queue_max_write_zeroes_sectors" },
	{ 0x5c4b0081, "blk_queue_chunk_sectors" },
	{ 0x6c803b95, "blk_queue_alignment_offset" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1641f6d1, "revalidate_disk" },
	{ 0xcde77bcc, "free_opal_dev" },
	{ 0x26a5e062, "scsi_cmd_blk_ioctl" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8229642a, "scsi_autopm_get_device" },
	{ 0xcbfb33e4, "init_opal_dev" },
	{ 0xc3aad268, "__alloc_disk_node" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x815fda83, "sed_ioctl" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xef9ddd57, "device_del" },
	{ 0xeb451f43, "current_task" },
	{ 0xfb9779ec, "check_disk_change" },
	{ 0xc5850110, "printk" },
	{ 0x51641162, "opal_unlock_from_suspend" },
	{ 0xcf82081a, "blk_queue_max_discard_sectors" },
	{ 0xbb1f3157, "del_gendisk" },
	{ 0xb45c1c8e, "class_unregister" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0xd2853335, "__scsi_execute" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0xa539103b, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0xf3d0e4a2, "blk_register_region" },
	{ 0x5e307e81, "scsi_report_opcode" },
	{ 0x5a921311, "strncmp" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0xea0687f8, "t10_pi_complete" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x2ea111e, "scsi_driverbyte_string" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x48a91171, "string_get_size" },
	{ 0x10936407, "device_add" },
	{ 0x23e9b1f9, "blk_revalidate_disk_zones" },
	{ 0x723d2b81, "__class_register" },
	{ 0xcaf2c603, "scsi_sd_pm_domain" },
	{ 0x6b698ebd, "t10_pi_type3_ip" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xebba4136, "t10_pi_type3_crc" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x493d48e2, "blk_queue_flag_clear" },
	{ 0xc6cbbc89, "capable" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xa27cefd0, "blk_queue_flag_set" },
	{ 0x509b9ea9, "put_device" },
	{ 0x7b78b5d8, "blk_queue_physical_block_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1bcc9b78, "scsi_verify_blk_ioctl" },
	{ 0x89358eb8, "scsi_ioctl" },
	{ 0x10b63bbc, "put_disk" },
	{ 0x1953c958, "mempool_create" },
	{ 0x430a5977, "scsi_register_driver" },
	{ 0x84d4217, "scsi_block_when_processing_errors" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7982acc6, "scsi_test_unit_ready" },
	{ 0xccd349a8, "scsi_device_set_state" },
	{ 0x51a1622b, "scsi_init_io" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb3d2c76d, "scsi_hostbyte_string" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xc0e08a4d, "scsi_command_normalize_sense" },
	{ 0xf3b26b8a, "get_device" },
	{ 0xcb15e4f8, "kmem_cache_create" },
	{ 0xd04d0c53, "scsicam_bios_param" },
	{ 0xc03faa2e, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ca4bf88, "async_synchronize_full_domain" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xa672e03d, "t10_pi_type1_crc" },
	{ 0xcfed9b44, "device_initialize" },
	{ 0x7bd7594e, "scsi_get_vpd_page" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0x15af7f4, "system_state" },
	{ 0x26c64ffb, "blk_pm_runtime_init" },
	{ 0x89c5e2d3, "device_add_disk" },
	{ 0xb0e602eb, "memmove" },
	{ 0x14b44fa7, "dev_set_name" },
	{ 0x77e52315, "scsi_device_get" },
	{ 0xebb8bea3, "scsi_autopm_put_device" },
	{ 0x6110bb0d, "blk_queue_logical_block_size" },
	{ 0x184fef12, "scsi_mode_sense" },
	{ 0x17e52c64, "blk_queue_max_write_same_sectors" },
	{ 0x556bda39, "blk_integrity_register" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x26130b8f, "scsi_print_sense_hdr" },
	{ 0xb75ca199, "set_disk_ro" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "EE3F9436F17470DA156281A");
