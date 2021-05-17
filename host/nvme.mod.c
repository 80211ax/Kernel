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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x139cee21, "wait_for_completion_io_timeout" },
	{ 0x9bdc47df, "dma_direct_unmap_sg" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xf85a3d0b, "nvme_get_features" },
	{ 0x17036458, "blk_cleanup_queue" },
	{ 0x6ca7d72c, "pci_free_irq_vectors" },
	{ 0xbcc4ba9, "nvme_reset_ctrl" },
	{ 0xb5ad5141, "pci_free_p2pmem" },
	{ 0x7d203a6b, "param_get_int" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x484f8487, "pci_sriov_configure_simple" },
	{ 0x513ce58e, "device_release_driver" },
	{ 0x746709a2, "pci_p2pmem_virt_to_bus" },
	{ 0xf162df, "dma_set_mask" },
	{ 0x4dbef285, "nvme_stop_ctrl" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xd6782ed9, "nvme_unfreeze" },
	{ 0xb21c85e7, "blk_mq_tagset_busy_iter" },
	{ 0x13a91203, "blk_mq_start_request" },
	{ 0x84d965b4, "nvme_set_features" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0x49f961b0, "nvme_shutdown_ctrl" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x441baeb4, "nvme_set_queue_count" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0xf9f846d2, "nvme_stop_queues" },
	{ 0x87b8798d, "sg_next" },
	{ 0x1348201b, "blk_mq_tag_to_rq" },
	{ 0x3ad36f6c, "nvme_complete_async_event" },
	{ 0x2e87bb40, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe3fa30a, "nvme_kill_queues" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0xb9e53e16, "param_set_int" },
	{ 0x6d253dca, "dmi_match" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x558aff62, "blk_mq_complete_request" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x77f1537a, "blk_mq_update_nr_hw_queues" },
	{ 0xcde77bcc, "free_opal_dev" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0xcbfb33e4, "init_opal_dev" },
	{ 0x8a9c70ed, "nvme_sec_submit" },
	{ 0x28cb6af4, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0xfaa669bb, "pci_p2pmem_publish" },
	{ 0xf711688c, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x6a0dccf5, "pci_enable_pcie_error_reporting" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x869b4a1c, "nvme_enable_ctrl" },
	{ 0x39fe5dd9, "pci_restore_state" },
	{ 0x379fd813, "blk_put_queue" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x51641162, "opal_unlock_from_suspend" },
	{ 0x94be5adb, "sysfs_remove_file_from_group" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xcf28e344, "blk_mq_free_tag_set" },
	{ 0x669f7286, "nvme_init_identify" },
	{ 0x1a35cc6a, "nvme_remove_namespaces" },
	{ 0x72b247c4, "pci_read_config_word" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x9efd7a89, "pci_device_is_present" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x839db765, "blk_execute_rq_nowait" },
	{ 0xdb555894, "pci_load_saved_state" },
	{ 0xe72a596b, "pci_request_irq" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x54fead66, "blk_get_queue" },
	{ 0x7ef66c34, "nvme_init_ctrl" },
	{ 0x5a2e5577, "pci_select_bars" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x99a3020f, "_dev_info" },
	{ 0x4dddaf24, "kmem_cache_alloc_node_trace" },
	{ 0x29a53d4, "nvme_change_ctrl_state" },
	{ 0xfbf3f0a1, "blk_mq_free_request" },
	{ 0x54085d0d, "__tracepoint_nvme_sq" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9c122bcf, "mempool_create_node" },
	{ 0x9066b154, "pci_free_irq" },
	{ 0x509b9ea9, "put_device" },
	{ 0x5a3d841c, "dma_max_mapping_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4db36d7d, "nvme_sync_queues" },
	{ 0x4a524ae4, "nvme_cleanup_cmd" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x48ea9aa0, "nvme_cancel_request" },
	{ 0xac4a173e, "nvme_wait_freeze" },
	{ 0x1af81148, "blk_mq_pci_map_queues" },
	{ 0xf5f370e0, "async_schedule_node" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xe4314b7b, "pci_p2pdma_map_sg" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x9643dd4f, "blk_rq_map_sg" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x2c36aa40, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x944c43f, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8a079dea, "nvme_should_fail" },
	{ 0x4542f931, "nvme_disable_ctrl" },
	{ 0x9be687ce, "pci_p2pdma_add_resource" },
	{ 0xf3b26b8a, "get_device" },
	{ 0x887f61aa, "pci_irq_vector" },
	{ 0x64b62862, "nvme_wq" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0xd7e14ade, "pci_disable_pcie_error_reporting" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x87884ac, "dma_direct_map_sg" },
	{ 0x63666527, "blk_mq_quiesce_queue" },
	{ 0x105b9e69, "nvme_submit_sync_cmd" },
	{ 0x982bea36, "blk_mq_unquiesce_queue" },
	{ 0xedc03953, "iounmap" },
	{ 0xe73fa95, "nvme_start_ctrl" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0xb625aa8d, "pci_alloc_p2pmem" },
	{ 0xc1d0283b, "nvme_start_freeze" },
	{ 0x96848186, "scnprintf" },
	{ 0x376f22c9, "nvme_setup_cmd" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x7aa14269, "nvme_alloc_request" },
	{ 0xbde19f7c, "nvme_start_queues" },
	{ 0xf28d5f0b, "sysfs_add_file_to_group" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x569d18f5, "pci_enable_device_mem" },
	{ 0x5e5e5006, "nvme_wait_freeze_timeout" },
	{ 0xac8e9efa, "pci_release_selected_regions" },
	{ 0x8e57f3b5, "nvme_reset_ctrl_sync" },
	{ 0x5457460d, "pci_request_selected_regions" },
	{ 0x7e31dc46, "nvme_complete_rq" },
	{ 0xccc8e55b, "dma_pool_create" },
	{ 0x5af55d60, "param_ops_uint" },
	{ 0xf2e95b99, "nvme_uninit_ctrl" },
	{ 0x13e829da, "dma_ops" },
	{ 0x26bc4f67, "pcie_aspm_enabled" },
	{ 0x13e28305, "pci_save_state" },
	{ 0x4198ca95, "__do_once_done" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvme-core";

MODULE_ALIAS("pci:v00008086d00000953sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005845sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB1d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Fd00000540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00001F1Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00002807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00002601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00005762sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001CC1d00008201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc08i02*");
MODULE_ALIAS("pci:v0000106Bd00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002003sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "70095223634A0A03CF61D20");
