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
	{ 0xebffbe6a, "iscsi_offload_mesg" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xf185d3f5, "__cpuhp_remove_state" },
	{ 0x79a75ac3, "iscsi_host_remove" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x3bbb3b59, "__iscsi_put_task" },
	{ 0xb4900436, "dev_printk" },
	{ 0x966fadde, "iscsi_queuecommand" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xec581443, "iscsi_conn_stop" },
	{ 0xe76bc880, "pci_dev_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe5c191db, "iscsi_eh_recover_target" },
	{ 0x18f93f64, "iscsi_unregister_transport" },
	{ 0x565506ad, "iscsi_session_teardown" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x142ad814, "iscsi_host_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe1bf625c, "iscsi_host_alloc" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0xaf234b63, "kthread_create_on_node" },
	{ 0x72e7c0c9, "iscsi_lookup_endpoint" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x805cfc82, "kthread_bind" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x2fc16008, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xeb451f43, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1a50c279, "iscsi_conn_start" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xb161e25f, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x6aa50cb9, "iscsi_conn_send_pdu" },
	{ 0xbac51047, "iscsi_session_get_param" },
	{ 0x986c2209, "iscsi_conn_teardown" },
	{ 0x279a211e, "iscsi_host_free" },
	{ 0x636d0fe5, "iscsi_conn_get_param" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0xe35b2dbd, "blk_mq_rq_cpu" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x636af174, "cnic_unregister_driver" },
	{ 0x2371e26, "iscsi_destroy_endpoint" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfc882ed6, "__cpuhp_setup_state" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0x81533963, "sysfs_format_mac" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x234c16ae, "flush_signals" },
	{ 0xeb4728, "iscsi_set_param" },
	{ 0x7afaa8b3, "iscsi_session_failure" },
	{ 0x618911fc, "numa_node" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x1d42a799, "cnic_register_driver" },
	{ 0x76140ee7, "iscsi_register_transport" },
	{ 0x4ec4caf2, "iscsi_eh_device_reset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd89ce32c, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xac2157f9, "iscsi_conn_failure" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfc090244, "iscsi_eh_cmd_timed_out" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xd3c2fa9, "iscsi_suspend_queue" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xf2ff3187, "iscsi_create_endpoint" },
	{ 0xa67c23f9, "iscsi_eh_abort" },
	{ 0x37a0cba, "kfree" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x3ae87501, "set_user_nice" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x5f4520e6, "iscsi_session_setup" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4ace3a08, "iscsi_host_get_param" },
	{ 0xdbc360df, "iscsi_conn_bind" },
	{ 0x6a756948, "__iscsi_complete_pdu" },
	{ 0xa4985ecf, "iscsi_target_alloc" },
	{ 0x9efa46cb, "pci_dev_put" },
	{ 0x29361773, "complete" },
	{ 0xa95751b2, "pci_iomap" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe0873cfc, "iscsi_session_recovery_timedout" },
	{ 0xeae3be73, "iscsi_conn_setup" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x5af55d60, "param_ops_uint" },
	{ 0x56e0d03e, "iscsi_itt_to_task" },
	{ 0x28fe7bb, "iscsi_host_for_each_session" },
	{ 0xea722105, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_iscsi,scsi_mod,libiscsi,cnic";


MODULE_INFO(srcversion, "E6E5E2D36548EAE4E3470BD");
