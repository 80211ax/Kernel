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
	{ 0x2d3385d3, "system_wq" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd53db9b7, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x4005f38c, "try_wait_for_completion" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x775c84cf, "scsi_block_requests" },
	{ 0x18866a7b, "scsi_bios_ptable" },
	{ 0x4e2c352e, "scsi_remove_device" },
	{ 0xf162df, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xd6103fc2, "scsi_unblock_requests" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xbf994a50, "pci_disable_msix" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x36653098, "__register_chrdev" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe1e96cf3, "pci_enable_wake" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0xaf234b63, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb47461c0, "dma_get_required_mask" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0xf711688c, "pci_alloc_irq_vectors_affinity" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x6a0dccf5, "pci_enable_pcie_error_reporting" },
	{ 0xe3b1136b, "scsi_rescan_device" },
	{ 0x39fe5dd9, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xeb451f43, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xb161e25f, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x12dfb7e6, "noop_llseek" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0xe6fb3fdf, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xfa5189f6, "pci_find_capability" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x99a3020f, "_dev_info" },
	{ 0x25e9d1cb, "pci_disable_link_state" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdc5a2365, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x63700fba, "scsi_device_lookup" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xccd349a8, "scsi_device_set_state" },
	{ 0xd89ce32c, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd8e396d9, "__scsi_iterate_devices" },
	{ 0x887f61aa, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x13c189ea, "pci_set_power_state" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd7e14ade, "pci_disable_pcie_error_reporting" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xae3cf404, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4fd793ad, "pci_choose_state" },
	{ 0x569d18f5, "pci_enable_device_mem" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0xd8cef6e1, "clear_user" },
	{ 0x13e829da, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x13e28305, "pci_save_state" },
	{ 0xea722105, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001028d00000001sv00001028sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000002sv00001028sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000003sv00001028sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000004sv00001028sd000000D0bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000002sv00001028sd000000D1bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000002sv00001028sd000000D9bc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Asv00001028sd00000106bc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Asv00001028sd0000011Bbc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Asv00001028sd00000121bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000283sv00009005sd00000283bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000284sv00009005sd00000284bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000286bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000285bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000287bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv000017AAsd00000286bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv000017AAsd00000287bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000288bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000289bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000028Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000028Dbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Dbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Ebc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Fbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A1bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A3bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd000002A4bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd000002A5bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A6bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000287sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000200sv00009005sd00000200bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Ebc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Fbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000290bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001028sd00000291bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000292bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000293bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000294bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv0000103Csd00003227bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000296bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000297bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001014sd000002F2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001014sd00000312bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00001014sd00009580bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00001014sd00009540bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000298bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000299bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000029Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001028sd00000287bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00009005sd00000365bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00009005sd00000364bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00009005sd00001364bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv0000103Csd000010C2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001028sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv000017AAsd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000288sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1AFE595ABFFA537B6B5E926");
