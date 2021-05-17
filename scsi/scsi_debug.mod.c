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
	{ 0x5af55d60, "param_ops_uint" },
	{ 0x81d3a238, "param_ops_string" },
	{ 0x2e87bb40, "param_ops_bool" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0xa539103b, "driver_unregister" },
	{ 0x999e8297, "vfree" },
	{ 0x24bbf8ee, "root_device_unregister" },
	{ 0x87fcf904, "bus_unregister" },
	{ 0x585e923e, "driver_register" },
	{ 0xc50617a5, "bus_register" },
	{ 0xa8e3b777, "__root_device_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x1fd50dc0, "device_register" },
	{ 0x14b44fa7, "dev_set_name" },
	{ 0x69e683de, "uuid_gen" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0xc666a132, "crc_t10dif" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x8ac743de, "sg_copy_buffer" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0xcff83999, "hrtimer_init" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0x123dc16, "blk_abort_request" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x54e2888, "hrtimer_start_range_ns" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xcdf9e875, "blk_mq_unique_tag" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xfb578fc5, "memset" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xa106af3b, "device_unregister" },
	{ 0xd8e396d9, "__scsi_iterate_devices" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd0fe8d51, "sg_pcopy_from_buffer" },
	{ 0x18e3c13d, "sg_miter_stop" },
	{ 0xcfc13f8b, "sg_miter_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0x54e3f2dd, "sg_miter_start" },
	{ 0x96848186, "scnprintf" },
	{ 0x81047dba, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xb6a68816, "find_last_bit" },
	{ 0x7fe0e5a, "seq_printf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc6cbbc89, "capable" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "058FB93F8857F96DE9A5584");
