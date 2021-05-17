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
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0xddfda556, "sas_release_transport" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0x8decff92, "sas_attach_transport" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0xeb451f43, "current_task" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x90576ec4, "vmemdup_user" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd6103fc2, "scsi_unblock_requests" },
	{ 0x775c84cf, "scsi_block_requests" },
	{ 0xb4e68f2a, "scsi_host_get" },
	{ 0xbc738e3c, "sas_port_add_phy" },
	{ 0x2978bc7f, "sas_phy_add" },
	{ 0x3a6298b5, "sas_phy_alloc" },
	{ 0x27756bc8, "scsi_sanitize_inquiry_string" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0x4e2c352e, "scsi_remove_device" },
	{ 0x63700fba, "scsi_device_lookup" },
	{ 0xdc5a2365, "scsi_add_device" },
	{ 0x8cc4e9b8, "sas_rphy_add" },
	{ 0x934616c3, "sas_end_device_alloc" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0xc5850110, "printk" },
	{ 0x25f78c36, "pci_write_config_word" },
	{ 0x39fe5dd9, "pci_restore_state" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x2a303d4d, "check_signature" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x13c189ea, "pci_set_power_state" },
	{ 0x13e28305, "pci_save_state" },
	{ 0x72b247c4, "pci_read_config_word" },
	{ 0xb9f0b3f, "pci_ioremap_bar" },
	{ 0xb15e258a, "pci_irq_get_affinity" },
	{ 0xf711688c, "pci_alloc_irq_vectors_affinity" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x25e9d1cb, "pci_disable_link_state" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x29361773, "complete" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x77fa1f7, "scsi_print_command" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x87b8798d, "sg_next" },
	{ 0xea722105, "scsi_dma_map" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x13e829da, "dma_ops" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x99a3020f, "_dev_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xb4900436, "dev_printk" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0x6ca7d72c, "pci_free_irq_vectors" },
	{ 0xedc03953, "iounmap" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x887f61aa, "pci_irq_vector" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x35465e15, "wait_for_completion_io" },
	{ 0x139cee21, "wait_for_completion_io_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd53db9b7, "blk_queue_rq_timeout" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9166fada, "strncpy" },
	{ 0xc6cbbc89, "capable" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0x96848186, "scnprintf" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0xfb578fc5, "memset" },
	{ 0x87fbec93, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x30c6a8db, "sas_port_free" },
	{ 0x500745a8, "sas_port_add" },
	{ 0x60a4b86c, "sas_port_alloc_num" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0xa8e882ea, "sas_port_delete" },
	{ 0x37a0cba, "kfree" },
	{ 0x5717f364, "sas_phy_delete" },
	{ 0xd602feb1, "sas_port_delete_phy" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_sas,scsi_mod";

MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003241bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003243bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003245bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003247bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003249bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd0000324Abc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd0000324Bbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003233bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003350bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003351bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003352bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003353bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003354bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003355bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003356bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001920bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001921bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001922bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001923bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001924bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001925bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001926bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001928bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001929bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BDbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BEbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BFbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C0bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C1bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C2bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C3bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C4bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C5bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C6bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C7bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C8bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C9bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CAbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CBbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CCbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CDbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CEbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000580bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000581bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000582bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000583bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000584bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000585bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000076bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000087bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd0000007Dbc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000088bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000333Fsv0000103Csd0000333Fbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd*sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00000E11d*sv*sd*bc01sc04i*");

MODULE_INFO(srcversion, "883FC68ACE20AD0A9A9A5AC");
