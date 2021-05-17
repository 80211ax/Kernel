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
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd53db9b7, "blk_queue_rq_timeout" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xf06cfd5b, "vmbus_sendpacket_mpb_desc" },
	{ 0xc88d56bd, "__hv_pkt_iter_next" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x4e2c352e, "scsi_remove_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0xea154d08, "__vmbus_driver_register" },
	{ 0x87b8798d, "sg_next" },
	{ 0xfc8cf006, "vmbus_set_sc_create_callback" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc66e157a, "hv_pkt_iter_close" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0xe3b1136b, "scsi_rescan_device" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x695a90b, "vmbus_open" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0xeb7410b1, "fc_release_transport" },
	{ 0x618911fc, "numa_node" },
	{ 0xdc5a2365, "scsi_add_device" },
	{ 0xb4e68f2a, "scsi_host_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe7941df4, "fc_remote_port_delete" },
	{ 0x1000e51, "schedule" },
	{ 0x63700fba, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7982acc6, "scsi_test_unit_ready" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xde8284b1, "vmbus_close" },
	{ 0xd8e396d9, "__scsi_iterate_devices" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xeb62308f, "fc_eh_timed_out" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbd5c704, "hv_pkt_iter_first" },
	{ 0x52facc30, "vmbus_sendpacket" },
	{ 0xb8450cb4, "fc_remove_host" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xe4d9117f, "fc_remote_port_add" },
	{ 0xa084f79f, "cpumask_next_wrap" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd8602d39, "fc_attach_transport" },
	{ 0x26130b8f, "scsi_print_sense_hdr" },
	{ 0x253b7198, "vmbus_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,hv_vmbus,scsi_transport_fc";

MODULE_ALIAS("vmbus:d96361baa104294db60572e2ffb1dc7f");
MODULE_ALIAS("vmbus:32264132cb86a2449b5c50d1417354f5");
MODULE_ALIAS("vmbus:4acc9b2f6900f34ab76b6fd0be528cda");

MODULE_INFO(srcversion, "0A4DAE1DE66B7CDCD7CD988");
