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
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xd53db9b7, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x901e9317, "cdrom_number_of_slots" },
	{ 0x8b07a7fe, "scsi_ioctl_block_when_processing_errors" },
	{ 0xfc3e40c6, "unregister_cdrom" },
	{ 0xe8cab1c4, "blk_dump_rq_flags" },
	{ 0x87b8798d, "sg_next" },
	{ 0x360262ed, "scmd_printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2dc30d80, "cdrom_open" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x8229642a, "scsi_autopm_get_device" },
	{ 0xc3aad268, "__alloc_disk_node" },
	{ 0xfb9779ec, "check_disk_change" },
	{ 0x54677a31, "cdrom_release" },
	{ 0xbb1f3157, "del_gendisk" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0xd2853335, "__scsi_execute" },
	{ 0xa539103b, "driver_unregister" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc47524c8, "cdrom_get_media_event" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xc0acff4a, "cdrom_check_events" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x752371a7, "cdrom_get_last_written" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x89358eb8, "scsi_ioctl" },
	{ 0x10b63bbc, "put_disk" },
	{ 0x430a5977, "scsi_register_driver" },
	{ 0x84d4217, "scsi_block_when_processing_errors" },
	{ 0x7982acc6, "scsi_test_unit_ready" },
	{ 0x51a1622b, "scsi_init_io" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e7b5c01, "cdrom_ioctl" },
	{ 0x26c64ffb, "blk_pm_runtime_init" },
	{ 0x6ab99f80, "register_cdrom" },
	{ 0x89c5e2d3, "device_add_disk" },
	{ 0x77e52315, "scsi_device_get" },
	{ 0xebb8bea3, "scsi_autopm_put_device" },
	{ 0x6110bb0d, "blk_queue_logical_block_size" },
	{ 0x184fef12, "scsi_mode_sense" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,cdrom";


MODULE_INFO(srcversion, "802275DE04F1FDBB92B348A");
