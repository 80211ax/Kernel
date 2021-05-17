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
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x25f78c36, "pci_write_config_word" },
	{ 0x342cba15, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0xcde6d350, "scsi_track_queue_full" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xbc3ed63e, "pci_read_config_byte" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xf162df, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xb4900436, "dev_printk" },
	{ 0xf43765f9, "pcie_set_readrq" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xdbb5a8bb, "scsi_is_fc_rport" },
	{ 0xbf994a50, "pci_disable_msix" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x999e8297, "vfree" },
	{ 0xd9ea1f79, "pcie_get_readrq" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x86fb0283, "debugfs_create_file" },
	{ 0x375f8bbd, "fc_get_event_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xaf234b63, "kthread_create_on_node" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xaa3ea2c6, "param_ops_charp" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x6a0dccf5, "pci_enable_pcie_error_reporting" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x39fe5dd9, "pci_restore_state" },
	{ 0x2fc16008, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xeb451f43, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xb161e25f, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x538e9202, "fc_vport_terminate" },
	{ 0xde3a5101, "fixed_size_llseek" },
	{ 0x72b247c4, "pci_read_config_word" },
	{ 0x4a593fb8, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xda25186e, "fc_remote_port_rolechg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0x83d91206, "fc_vport_create" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb4ed7f6, "fc_host_post_vendor_event" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0xeb7410b1, "fc_release_transport" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x58e60524, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe7941df4, "fc_remote_port_delete" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x63700fba, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd89ce32c, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd8e396d9, "__scsi_iterate_devices" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xeb62308f, "fc_eh_timed_out" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd7e14ade, "pci_disable_pcie_error_reporting" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0xb8450cb4, "fc_remove_host" },
	{ 0x52ec8fe4, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe4d9117f, "fc_remote_port_add" },
	{ 0xa95751b2, "pci_iomap" },
	{ 0x7e75a9e8, "bsg_job_done" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd8602d39, "fc_attach_transport" },
	{ 0x9f035a5f, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x13e28305, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xea722105, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,scsi_transport_fc";

MODULE_ALIAS("pci:v00001657d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001657d00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001657d00000014sv*sd*bc0Csc04i00*");
MODULE_ALIAS("pci:v00001657d00000021sv*sd*bc0Csc04i00*");
MODULE_ALIAS("pci:v00001657d00000022sv*sd*bc0Csc04i00*");
MODULE_ALIAS("pci:v00001657d00000023sv*sd*bc0Csc04i00*");

MODULE_INFO(srcversion, "581FAAB983AF050D0E7343E");
