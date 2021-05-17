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
	{ 0xb9cd37ae, "blk_mq_rdma_map_queues" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x9bdc47df, "dma_direct_unmap_sg" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x17036458, "blk_cleanup_queue" },
	{ 0x1bee4974, "sg_alloc_table_chained" },
	{ 0xb6035475, "rdma_consumer_reject_data" },
	{ 0x2d61f201, "ib_dealloc_pd_user" },
	{ 0x1b152e5a, "ib_drain_qp" },
	{ 0x4dbef285, "nvme_stop_ctrl" },
	{ 0xb21c85e7, "blk_mq_tagset_busy_iter" },
	{ 0x13a91203, "blk_mq_start_request" },
	{ 0xac7e7630, "nvmf_register_transport" },
	{ 0x3f4a1248, "ib_mr_pool_put" },
	{ 0x57b48fab, "ib_mr_pool_get" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x49f961b0, "nvme_shutdown_ctrl" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x441baeb4, "nvme_set_queue_count" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd4879187, "dma_direct_sync_single_for_cpu" },
	{ 0xf9f846d2, "nvme_stop_queues" },
	{ 0x1348201b, "blk_mq_tag_to_rq" },
	{ 0xb1968d4f, "__rdma_create_id" },
	{ 0x3ad36f6c, "nvme_complete_async_event" },
	{ 0x33b8193e, "nvmf_should_reconnect" },
	{ 0xe3f866a1, "rdma_destroy_id" },
	{ 0x2e87bb40, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x558aff62, "blk_mq_complete_request" },
	{ 0x9aad9d1e, "nvmf_reg_write32" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x77f1537a, "blk_mq_update_nr_hw_queues" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xfb82a1ea, "rdma_connect" },
	{ 0x28cb6af4, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0x869b4a1c, "nvme_enable_ctrl" },
	{ 0x9783ecab, "ib_destroy_qp_user" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0xc5850110, "printk" },
	{ 0x5f49aea2, "nvmf_ip_options_match" },
	{ 0xb154e2f5, "nvmf_connect_admin_queue" },
	{ 0x1f7457dd, "__ib_alloc_cq_user" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xfb41b12b, "rdma_destroy_qp" },
	{ 0xcf28e344, "blk_mq_free_tag_set" },
	{ 0x669f7286, "nvme_init_identify" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x88652e65, "inet_pton_with_scope" },
	{ 0x5be48c24, "nvmf_reg_read64" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf2fad00c, "init_net" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdf06233c, "ib_map_mr_sg" },
	{ 0xcf6b4c77, "rdma_create_qp" },
	{ 0xd58bbbcb, "nvme_delete_wq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7ef66c34, "nvme_init_ctrl" },
	{ 0xbf2c8755, "ib_register_client" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x99a3020f, "_dev_info" },
	{ 0x6770f7, "rdma_resolve_route" },
	{ 0x29a53d4, "nvme_change_ctrl_state" },
	{ 0x509b9ea9, "put_device" },
	{ 0xea1eb596, "nvmf_unregister_transport" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a524ae4, "nvme_cleanup_cmd" },
	{ 0x48ea9aa0, "nvme_cancel_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x7e5399d2, "nvmf_get_address" },
	{ 0x9643dd4f, "blk_rq_map_sg" },
	{ 0x2c36aa40, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x64f41f14, "rdma_disconnect" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x8a079dea, "nvme_should_fail" },
	{ 0x4542f931, "nvme_disable_ctrl" },
	{ 0x87fbec93, "__dynamic_dev_dbg" },
	{ 0xf3b26b8a, "get_device" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0x77eb01f9, "nvme_delete_ctrl" },
	{ 0x79bbb531, "nvmf_reg_read32" },
	{ 0x64b62862, "nvme_wq" },
	{ 0x5c966d26, "__nvmf_check_ready" },
	{ 0xae5afe05, "ib_process_cq_direct" },
	{ 0x274dd1a3, "sg_free_table_chained" },
	{ 0x87b6b83e, "ib_mr_pool_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x87884ac, "dma_direct_map_sg" },
	{ 0x63666527, "blk_mq_quiesce_queue" },
	{ 0x627bf4b4, "nvmf_connect_io_queue" },
	{ 0x982bea36, "blk_mq_unquiesce_queue" },
	{ 0xe73fa95, "nvme_start_ctrl" },
	{ 0xc7f7e694, "dma_direct_sync_single_for_device" },
	{ 0x87c7d789, "rdma_resolve_addr" },
	{ 0x376f22c9, "nvme_setup_cmd" },
	{ 0xd82d4cd0, "nvme_stop_keep_alive" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xc03a7037, "__ib_alloc_pd" },
	{ 0xbde19f7c, "nvme_start_queues" },
	{ 0x27dbd335, "nvmf_free_options" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x15dfb920, "nvmf_fail_nonready_command" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0xec887fc3, "rdma_reject_msg" },
	{ 0x7e31dc46, "nvme_complete_rq" },
	{ 0xf2e95b99, "nvme_uninit_ctrl" },
	{ 0x165fe585, "ib_unregister_client" },
	{ 0x13e829da, "dma_ops" },
	{ 0xf8e161db, "ib_free_cq_user" },
	{ 0x7c878f19, "ib_mr_pool_destroy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rdma_cm,ib_core,nvme-core,nvme-fabrics";


MODULE_INFO(srcversion, "F17492BED3DA3F88B205F3B");
