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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xd93aee01, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd53db9b7, "blk_queue_rq_timeout" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x6ca7d72c, "pci_free_irq_vectors" },
	{ 0x25f78c36, "pci_write_config_word" },
	{ 0x342cba15, "debugfs_create_dir" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x11ab1a70, "blk_queue_max_hw_sectors" },
	{ 0x4e2c352e, "scsi_remove_device" },
	{ 0xb15e258a, "pci_irq_get_affinity" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xb4900436, "dev_printk" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xb633f115, "irq_poll_enable" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x36653098, "__register_chrdev" },
	{ 0x87b8798d, "sg_next" },
	{ 0x360262ed, "scmd_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe1e96cf3, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x86fb0283, "debugfs_create_file" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8bd6c5ef, "_dev_notice" },
	{ 0xbcdb7f5, "blk_queue_virt_boundary" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb9ec08da, "debugfs_remove_recursive" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x77fa1f7, "scsi_print_command" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4f7b591a, "scsi_host_busy" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf711688c, "pci_alloc_irq_vectors_affinity" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x39fe5dd9, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xeb451f43, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc1f9a642, "fasync_helper" },
	{ 0x72b247c4, "pci_read_config_word" },
	{ 0x4a593fb8, "debugfs_remove" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x12dfb7e6, "noop_llseek" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xc26ac60b, "blk_queue_update_dma_alignment" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xfa5189f6, "pci_find_capability" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x5a2e5577, "pci_select_bars" },
	{ 0xc6cbbc89, "capable" },
	{ 0x99a3020f, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdc5a2365, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa27cefd0, "blk_queue_flag_set" },
	{ 0xbc994a9b, "driver_create_file" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x63700fba, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb264ada5, "pci_read_config_dword" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b90922e, "pci_cfg_access_lock" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x87fbec93, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd8e396d9, "__scsi_iterate_devices" },
	{ 0x887f61aa, "pci_irq_vector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x13c189ea, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0xcf2a6966, "up" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0x2fe2fbba, "kill_fasync" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0xeb251e77, "driver_remove_file" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4fd793ad, "pci_choose_state" },
	{ 0x569d18f5, "pci_enable_device_mem" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xac8e9efa, "pci_release_selected_regions" },
	{ 0x5457460d, "pci_request_selected_regions" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0xccc8e55b, "dma_pool_create" },
	{ 0x72ee6c68, "pci_cfg_access_unlock" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0xd8cef6e1, "clear_user" },
	{ 0xcc52da90, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x13e28305, "pci_save_state" },
	{ 0xea722105, "scsi_dma_map" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001000d00000411sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000007Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000078sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000079sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000073sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000071sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000413sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000005Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000002Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000005Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000005Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000CFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000053sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000001Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0657A4F72A7F6B3B3435B11");
