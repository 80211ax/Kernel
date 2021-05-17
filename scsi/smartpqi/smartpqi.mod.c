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
	{ 0x139cee21, "wait_for_completion_io_timeout" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xddfda556, "sas_release_transport" },
	{ 0x6ca7d72c, "pci_free_irq_vectors" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x775c84cf, "scsi_block_requests" },
	{ 0x27756bc8, "scsi_sanitize_inquiry_string" },
	{ 0x4e2c352e, "scsi_remove_device" },
	{ 0x30c6a8db, "sas_port_free" },
	{ 0xf162df, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x2978bc7f, "sas_phy_add" },
	{ 0xd6103fc2, "scsi_unblock_requests" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xbc738e3c, "sas_port_add_phy" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0x360262ed, "scmd_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x34037e31, "pcie_capability_clear_and_set_word" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd602feb1, "sas_port_delete_phy" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x8cc4e9b8, "sas_rphy_add" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa8e882ea, "sas_port_delete" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcdf9e875, "blk_mq_unique_tag" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8decff92, "sas_attach_transport" },
	{ 0xaa3ea2c6, "param_ops_charp" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf711688c, "pci_alloc_irq_vectors_affinity" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x39fe5dd9, "pci_restore_state" },
	{ 0x49c0bef2, "sas_expander_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x934616c3, "sas_end_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf1e046cc, "panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x500745a8, "sas_port_add" },
	{ 0x6626afca, "down" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x3fb159e9, "sas_phy_free" },
	{ 0x99a3020f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0xdc5a2365, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x1af81148, "blk_mq_pci_map_queues" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a6298b5, "sas_phy_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x887f61aa, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x13c189ea, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0x60a4b86c, "sas_port_alloc_num" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xcf2a6966, "up" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4fd793ad, "pci_choose_state" },
	{ 0x7e75a9e8, "bsg_job_done" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x13e829da, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x13e28305, "pci_save_state" },
	{ 0xea722105, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,scsi_transport_sas";

MODULE_ALIAS("pci:v00009005d0000028Fsv0000105Bsd00001211bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000105Bsd00001321bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A22bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A23bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A24bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A36bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A37bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00001104bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00001105bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00001106bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00001107bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00008460bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00008461bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd0000C460bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd0000C461bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd0000F460bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd0000F461bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000045bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000046bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000047bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000048bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd0000004Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd0000004Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd0000004Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D227bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D228bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D229bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D22Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D22Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D22Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000110bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000608bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000801bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000802bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000803bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000804bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000805bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000806bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000807bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000900bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000901bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000902bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000903bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000904bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000905bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000906bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000907bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000908bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd0000090Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001200bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001201bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001202bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001280bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001281bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001282bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001300bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001301bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001302bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001303bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001380bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000013FEsd00008312bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001028sd00001FE0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000601bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000602bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000603bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000609bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000650bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000651bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000652bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000653bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000654bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000655bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000700bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000701bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00001001bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00001100bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00001101bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "564072AB6604C20CEAEC6A5");
