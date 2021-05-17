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
	{ 0xd93aee01, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0x1abc3328, "nvme_fc_register_localport" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x569703e, "pci_enable_sriov" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x6ca7d72c, "pci_free_irq_vectors" },
	{ 0x9d207c4b, "sysfs_remove_bin_file" },
	{ 0x25f78c36, "pci_write_config_word" },
	{ 0x342cba15, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0xd12e564, "nvme_fc_register_remoteport" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x767ddb02, "set_memory_wc" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xbc3ed63e, "pci_read_config_byte" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x775c84cf, "scsi_block_requests" },
	{ 0xb15e258a, "pci_irq_get_affinity" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xf162df, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xb4900436, "dev_printk" },
	{ 0xd6103fc2, "scsi_unblock_requests" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xdbb5a8bb, "scsi_is_fc_rport" },
	{ 0x51e67f3b, "nvmet_fc_rcv_ls_req" },
	{ 0x3884f8b8, "nvme_fc_unregister_localport" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x9707613, "pci_disable_sriov" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xa00e0f78, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xee86bd09, "cpu_info" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x85df9b6c, "strsep" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x2c6993a3, "pci_reset_bus" },
	{ 0x126e81e3, "fc_host_fpin_rcv" },
	{ 0x999e8297, "vfree" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x86fb0283, "debugfs_create_file" },
	{ 0x375f8bbd, "fc_get_event_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7fa5302a, "nvmet_fc_rcv_fcp_abort" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0xaf234b63, "kthread_create_on_node" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xcdf9e875, "blk_mq_unique_tag" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0xb7d9b388, "misc_register" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf711688c, "pci_alloc_irq_vectors_affinity" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x6a0dccf5, "pci_enable_pcie_error_reporting" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x39fe5dd9, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xeb451f43, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x54e3f2dd, "sg_miter_start" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xb161e25f, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x538e9202, "fc_vport_terminate" },
	{ 0x9166fada, "strncpy" },
	{ 0x18e3c13d, "sg_miter_stop" },
	{ 0xde3a5101, "fixed_size_llseek" },
	{ 0x5a921311, "strncmp" },
	{ 0x72b247c4, "pci_read_config_word" },
	{ 0x4a593fb8, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfca9dc99, "nvme_fc_unregister_remoteport" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0xda25186e, "fc_remote_port_rolechg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9ef76d99, "nvmet_fc_unregister_targetport" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1a68d5af, "init_uts_ns" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xe24ac9f6, "simple_open" },
	{ 0x66c37246, "request_firmware_nowait" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0x1048b92a, "nvmet_fc_rcv_fcp_req" },
	{ 0x83d91206, "fc_vport_create" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0xe6fb3fdf, "pci_enable_msi" },
	{ 0xcfc13f8b, "sg_miter_next" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb4ed7f6, "fc_host_post_vendor_event" },
	{ 0xeb7410b1, "fc_release_transport" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x90a8eb48, "nvmet_fc_register_targetport" },
	{ 0x5a2e5577, "pci_select_bars" },
	{ 0xb460f24f, "fc_host_post_event" },
	{ 0x4dddaf24, "kmem_cache_alloc_node_trace" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa916b694, "strnlen" },
	{ 0xb4e68f2a, "scsi_host_get" },
	{ 0x509b9ea9, "put_device" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc8ae9398, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe7941df4, "fc_remote_port_delete" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1953c958, "mempool_create" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x3afab0c7, "fc_block_scsi_eh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb264ada5, "pci_read_config_dword" },
	{ 0xf8386d97, "cpumask_next_and" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xd89ce32c, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x944c43f, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf3b26b8a, "get_device" },
	{ 0x5f74be68, "pci_try_set_mwi" },
	{ 0xd8e396d9, "__scsi_iterate_devices" },
	{ 0x887f61aa, "pci_irq_vector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xeb62308f, "fc_eh_timed_out" },
	{ 0x13c189ea, "pci_set_power_state" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0xd7e14ade, "pci_disable_pcie_error_reporting" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x87884ac, "dma_direct_map_sg" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd7cdd197, "param_array_ops" },
	{ 0xae3cf404, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xa1af534b, "sysfs_create_bin_file" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x3ae87501, "set_user_nice" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0xb8450cb4, "fc_remove_host" },
	{ 0x96848186, "scnprintf" },
	{ 0x52ec8fe4, "request_firmware" },
	{ 0x3e33ac54, "nvme_fc_rescan_remoteport" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xc666a132, "crc_t10dif" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe4d9117f, "fc_remote_port_add" },
	{ 0x7e75a9e8, "bsg_job_done" },
	{ 0x569d18f5, "pci_enable_device_mem" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x8a9cf5a7, "nvme_fc_set_remoteport_devloss" },
	{ 0xac8e9efa, "pci_release_selected_regions" },
	{ 0x5457460d, "pci_request_selected_regions" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x7a514c31, "param_ops_ulong" },
	{ 0xccc8e55b, "dma_pool_create" },
	{ 0x5af55d60, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x3305de87, "misc_deregister" },
	{ 0x44d9131d, "pci_find_ext_capability" },
	{ 0xd8602d39, "fc_attach_transport" },
	{ 0x9f035a5f, "release_firmware" },
	{ 0x13e829da, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x13e28305, "pci_save_state" },
	{ 0xf73d61cb, "param_ops_ullong" },
	{ 0xea722105, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,nvme-fc,scsi_transport_fc,nvmet-fc";

MODULE_ALIAS("pci:v000010DFd0000FB00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00001AE5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FA00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F980sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F095sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE05sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000704sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000714sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E260sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E208sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E268sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00000724sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000072Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F225774B6CB49BAEE0B4CAC");
