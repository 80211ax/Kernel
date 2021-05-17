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
	{ 0x2d3385d3, "system_wq" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xa031740c, "iscsi_eh_session_reset" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x6ca7d72c, "pci_free_irq_vectors" },
	{ 0x79a75ac3, "iscsi_host_remove" },
	{ 0xb8a7868d, "iscsi_boot_create_target" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x3bbb3b59, "__iscsi_put_task" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0xf162df, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xb4900436, "dev_printk" },
	{ 0x966fadde, "iscsi_queuecommand" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xbf994a50, "pci_disable_msix" },
	{ 0xb633f115, "irq_poll_enable" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xec581443, "iscsi_conn_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe76bc880, "pci_dev_get" },
	{ 0x87b8798d, "sg_next" },
	{ 0x18f93f64, "iscsi_unregister_transport" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0x565506ad, "iscsi_session_teardown" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x142ad814, "iscsi_host_add" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe1bf625c, "iscsi_host_alloc" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0x72e7c0c9, "iscsi_lookup_endpoint" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf711688c, "pci_alloc_irq_vectors_affinity" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x6a0dccf5, "pci_enable_pcie_error_reporting" },
	{ 0x39fe5dd9, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1a50c279, "iscsi_conn_start" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x33602f46, "iscsi_boot_create_ethernet" },
	{ 0x6aa50cb9, "iscsi_conn_send_pdu" },
	{ 0xbac51047, "iscsi_session_get_param" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xcd279169, "nla_find" },
	{ 0x986c2209, "iscsi_conn_teardown" },
	{ 0x5b810ae8, "iscsi_put_task" },
	{ 0x279a211e, "iscsi_host_free" },
	{ 0x4aea02ec, "iscsi_complete_scsi_task" },
	{ 0x636d0fe5, "iscsi_conn_get_param" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2371e26, "iscsi_destroy_endpoint" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0x81533963, "sysfs_format_mac" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe03ad773, "iscsi_boot_create_host_kset" },
	{ 0xeb4728, "iscsi_set_param" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x7afaa8b3, "iscsi_session_failure" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb4e68f2a, "scsi_host_get" },
	{ 0xac753791, "__iscsi_get_task" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x76140ee7, "iscsi_register_transport" },
	{ 0x4ec4caf2, "iscsi_eh_device_reset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb264ada5, "pci_read_config_dword" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xac2157f9, "iscsi_conn_failure" },
	{ 0x7d8aa7f4, "iscsi_destroy_iface" },
	{ 0x887f61aa, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfc090244, "iscsi_eh_cmd_timed_out" },
	{ 0x13c189ea, "pci_set_power_state" },
	{ 0xd3c2fa9, "iscsi_suspend_queue" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd7e14ade, "pci_disable_pcie_error_reporting" },
	{ 0xf2ff3187, "iscsi_create_endpoint" },
	{ 0xa67c23f9, "iscsi_eh_abort" },
	{ 0x37a0cba, "kfree" },
	{ 0x29329c92, "iscsi_create_iface" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x2a776082, "iscsi_boot_create_initiator" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0x5f4520e6, "iscsi_session_setup" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4ace3a08, "iscsi_host_get_param" },
	{ 0xdbc360df, "iscsi_conn_bind" },
	{ 0x6a756948, "__iscsi_complete_pdu" },
	{ 0xa4985ecf, "iscsi_target_alloc" },
	{ 0x9efa46cb, "pci_dev_put" },
	{ 0xcc27a27c, "iscsi_get_port_speed_name" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7e75a9e8, "bsg_job_done" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe0873cfc, "iscsi_session_recovery_timedout" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0xeae3be73, "iscsi_conn_setup" },
	{ 0xccc8e55b, "dma_pool_create" },
	{ 0x5af55d60, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x13e829da, "dma_ops" },
	{ 0x28fe7bb, "iscsi_host_for_each_session" },
	{ 0x8972ffe7, "iscsi_get_port_state_name" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x13e28305, "pci_save_state" },
	{ 0x4cf633fe, "iscsi_boot_destroy_kset" },
	{ 0xea722105, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,libiscsi,iscsi_boot_sysfs,scsi_transport_iscsi";

MODULE_ALIAS("pci:v000019A2d00000212sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000222sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000702sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000703sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00000722sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DE79AFEE94B8EB4D71DC407");
