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
	{ 0x9bdc47df, "dma_direct_unmap_sg" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x17036458, "blk_cleanup_queue" },
	{ 0x1bee4974, "sg_alloc_table_chained" },
	{ 0xbcc4ba9, "nvme_reset_ctrl" },
	{ 0x4dbef285, "nvme_stop_ctrl" },
	{ 0xb21c85e7, "blk_mq_tagset_busy_iter" },
	{ 0x13a91203, "blk_mq_start_request" },
	{ 0xac7e7630, "nvmf_register_transport" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x441baeb4, "nvme_set_queue_count" },
	{ 0x793419d2, "device_destroy" },
	{ 0xd4879187, "dma_direct_sync_single_for_cpu" },
	{ 0xf9f846d2, "nvme_stop_queues" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3ad36f6c, "nvme_complete_async_event" },
	{ 0x33b8193e, "nvmf_should_reconnect" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x558aff62, "blk_mq_complete_request" },
	{ 0x9aad9d1e, "nvmf_reg_write32" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x77f1537a, "blk_mq_update_nr_hw_queues" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x28cb6af4, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0x869b4a1c, "nvme_enable_ctrl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0xc5850110, "printk" },
	{ 0xb154e2f5, "nvmf_connect_admin_queue" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xcf28e344, "blk_mq_free_tag_set" },
	{ 0xb45c1c8e, "class_unregister" },
	{ 0x669f7286, "nvme_init_identify" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5be48c24, "nvmf_reg_read64" },
	{ 0xffb7c514, "ida_free" },
	{ 0x9166fada, "strncpy" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9ef71b25, "device_create" },
	{ 0x723d2b81, "__class_register" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82063227, "kobject_uevent_env" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7ef66c34, "nvme_init_ctrl" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x99a3020f, "_dev_info" },
	{ 0x29a53d4, "nvme_change_ctrl_state" },
	{ 0xa916b694, "strnlen" },
	{ 0x509b9ea9, "put_device" },
	{ 0xea1eb596, "nvmf_unregister_transport" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a524ae4, "nvme_cleanup_cmd" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7e5399d2, "nvmf_get_address" },
	{ 0x9643dd4f, "blk_rq_map_sg" },
	{ 0x2c36aa40, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8a079dea, "nvme_should_fail" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf3b26b8a, "get_device" },
	{ 0x77eb01f9, "nvme_delete_ctrl" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x79bbb531, "nvmf_reg_read32" },
	{ 0x64b62862, "nvme_wq" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5c966d26, "__nvmf_check_ready" },
	{ 0x274dd1a3, "sg_free_table_chained" },
	{ 0x37a0cba, "kfree" },
	{ 0x87884ac, "dma_direct_map_sg" },
	{ 0x63666527, "blk_mq_quiesce_queue" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0x627bf4b4, "nvmf_connect_io_queue" },
	{ 0x982bea36, "blk_mq_unquiesce_queue" },
	{ 0xe73fa95, "nvme_start_ctrl" },
	{ 0xc7f7e694, "dma_direct_sync_single_for_device" },
	{ 0x376f22c9, "nvme_setup_cmd" },
	{ 0xd82d4cd0, "nvme_stop_keep_alive" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xbde19f7c, "nvme_start_queues" },
	{ 0x27dbd335, "nvmf_free_options" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x15dfb920, "nvmf_fail_nonready_command" },
	{ 0x7e31dc46, "nvme_complete_rq" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xf2e95b99, "nvme_uninit_ctrl" },
	{ 0x13e829da, "dma_ops" },
	{ 0xe7a02573, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvme-core,nvme-fabrics";


MODULE_INFO(srcversion, "4849C8EF13A9BAFFBA32441");
