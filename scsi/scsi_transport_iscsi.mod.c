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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x9481586, "transport_class_register" },
	{ 0xa55b8cc3, "class_find_device" },
	{ 0xc50617a5, "bus_register" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8ad056d8, "scsi_remove_target" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbbe0a27a, "scsi_host_lookup" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xb4900436, "dev_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5e16711d, "transport_destroy_device" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdaf97dab, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf22196a8, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x53c5945, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x222c68dd, "sysfs_remove_group" },
	{ 0x1c7d403e, "skb_trim" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0xf3585f0f, "trace_define_field" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xef9ddd57, "device_del" },
	{ 0x1fd50dc0, "device_register" },
	{ 0x5f9f25c2, "scsi_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xdcc6051c, "transport_add_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfcf28f03, "device_find_child" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8d5d5af1, "sysfs_create_group" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xb45c1c8e, "class_unregister" },
	{ 0x6f81e46, "netlink_kernel_release" },
	{ 0xffb7c514, "ida_free" },
	{ 0xce4694fe, "trace_event_reg" },
	{ 0x2c0ba747, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd9084b82, "netlink_unicast" },
	{ 0x10936407, "device_add" },
	{ 0xbfae392a, "skb_pull" },
	{ 0x2555de64, "transport_class_unregister" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xf2fad00c, "init_net" },
	{ 0x723d2b81, "__class_register" },
	{ 0x87fcf904, "bus_unregister" },
	{ 0x2d013775, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x1e037158, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xff17b2c5, "scsi_target_unblock" },
	{ 0x5dab323c, "__alloc_skb" },
	{ 0xb4e68f2a, "scsi_host_get" },
	{ 0xe92f0023, "netlink_broadcast" },
	{ 0xf41d3457, "trace_event_ignore_this_pid" },
	{ 0x509b9ea9, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd96b290a, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409fad5b, "transport_setup_device" },
	{ 0x301111a4, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf3b26b8a, "get_device" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0xe59b947f, "event_triggers_call" },
	{ 0xd52edf1a, "__scsi_init_queue" },
	{ 0x7b8e80e8, "bpf_trace_run2" },
	{ 0xe4ec10de, "device_for_each_child" },
	{ 0xd8bd1f45, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc2045c6b, "trace_event_raw_init" },
	{ 0xcfed9b44, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xa106af3b, "device_unregister" },
	{ 0xa71f567e, "transport_remove_device" },
	{ 0x2fc9ee8b, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8fd157f, "scsi_target_block" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x7e75a9e8, "bsg_job_done" },
	{ 0x14b44fa7, "dev_set_name" },
	{ 0x1f362192, "bsg_remove_queue" },
	{ 0xbdb4cf76, "bsg_setup_queue" },
	{ 0x76713aad, "__nlmsg_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x85aff1bf, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "C32CF26151103250D0B42A9");
