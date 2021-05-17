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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9bdc47df, "dma_direct_unmap_sg" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8ad056d8, "scsi_remove_target" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xddfda556, "sas_release_transport" },
	{ 0x6ca7d72c, "pci_free_irq_vectors" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x7d203a6b, "param_get_int" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x775c84cf, "scsi_block_requests" },
	{ 0x11ab1a70, "blk_queue_max_hw_sectors" },
	{ 0xb15e258a, "pci_irq_get_affinity" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0xd51752bb, "sas_is_tlr_enabled" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xc227016b, "pci_stop_and_remove_bus_device_locked" },
	{ 0xb4900436, "dev_printk" },
	{ 0x2978bc7f, "sas_phy_add" },
	{ 0xd6103fc2, "scsi_unblock_requests" },
	{ 0x33276c67, "sas_disable_tlr" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xb633f115, "irq_poll_enable" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbc738e3c, "sas_port_add_phy" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x1348201b, "blk_mq_tag_to_rq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x360262ed, "scmd_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd602feb1, "sas_port_delete_phy" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xe1e96cf3, "pci_enable_wake" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0xb9e53e16, "param_set_int" },
	{ 0x8cc4e9b8, "sas_rphy_add" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbcdb7f5, "blk_queue_virt_boundary" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x77fa1f7, "scsi_print_command" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0xaf234b63, "kthread_create_on_node" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0xa8e882ea, "sas_port_delete" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x4f7b591a, "scsi_host_busy" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb47461c0, "dma_get_required_mask" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x49fab41b, "scsi_internal_device_block_nowait" },
	{ 0x58b936b7, "raid_class_release" },
	{ 0x8decff92, "sas_attach_transport" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0xb7d9b388, "misc_register" },
	{ 0xf711688c, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x6a0dccf5, "pci_enable_pcie_error_reporting" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x39fe5dd9, "pci_restore_state" },
	{ 0x49c0bef2, "sas_expander_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf0e48c5d, "sas_read_port_mode_page" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x934616c3, "sas_end_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf1e046cc, "panic" },
	{ 0x9166fada, "strncpy" },
	{ 0xc1f9a642, "fasync_helper" },
	{ 0x72b247c4, "pci_read_config_word" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x500745a8, "sas_port_add" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x45a4229e, "raid_class_attach" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xfa5189f6, "pci_find_capability" },
	{ 0x64cc1256, "attribute_container_find_class_device" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5a2e5577, "pci_select_bars" },
	{ 0x3fb159e9, "sas_phy_free" },
	{ 0x99a3020f, "_dev_info" },
	{ 0x25e9d1cb, "pci_disable_link_state" },
	{ 0xdc5a2365, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa27cefd0, "blk_queue_flag_set" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x389053b4, "starget_for_each_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x86aee864, "device_reprobe" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf8386d97, "cpumask_next_and" },
	{ 0xccd349a8, "scsi_device_set_state" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xd89ce32c, "wake_up_process" },
	{ 0x3a6298b5, "sas_phy_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x741520c3, "sas_remove_host" },
	{ 0xd8e396d9, "__scsi_iterate_devices" },
	{ 0x887f61aa, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x13c189ea, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd7e14ade, "pci_disable_pcie_error_reporting" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x1327f18d, "scsi_internal_device_unblock_nowait" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x87884ac, "dma_direct_map_sg" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x60a4b86c, "sas_port_alloc_num" },
	{ 0xd7cdd197, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x7bd7594e, "scsi_get_vpd_page" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0x2fe2fbba, "kill_fasync" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4fd793ad, "pci_choose_state" },
	{ 0x84ee6cc3, "param_ops_ushort" },
	{ 0x7e75a9e8, "bsg_job_done" },
	{ 0x569d18f5, "pci_enable_device_mem" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xac8e9efa, "pci_release_selected_regions" },
	{ 0x5457460d, "pci_request_selected_regions" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xccc8e55b, "dma_pool_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x3305de87, "misc_deregister" },
	{ 0x3109c102, "sas_enable_tlr" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x13e829da, "dma_ops" },
	{ 0xcc52da90, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x13e28305, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf73d61cb, "param_ops_ullong" },
	{ 0xea722105, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,scsi_transport_sas,raid_class";

MODULE_ALIAS("pci:v00001000d00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000082sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000083sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000084sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000087sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000006Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000002B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000002B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000007Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000097sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000094sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000095sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "40CC8BD4439467C08BF0BD2");
