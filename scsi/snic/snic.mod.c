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
	{ 0x188ea314, "jiffies_to_timespec64" },
	{ 0xef4b0e0e, "kmem_cache_destroy" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8ad056d8, "scsi_remove_target" },
	{ 0xd53db9b7, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xf07de610, "scsi_flush_work" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x6ca7d72c, "pci_free_irq_vectors" },
	{ 0x342cba15, "debugfs_create_dir" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x5d1bc8e1, "single_open" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x5eaee0ed, "seq_open" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xb4900436, "dev_printk" },
	{ 0x96d7a887, "single_release" },
	{ 0x1b0fe62b, "seq_puts" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x7fe0e5a, "seq_printf" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x1348201b, "blk_mq_tag_to_rq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x86fb0283, "debugfs_create_file" },
	{ 0x53c5945, "scsi_scan_target" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x65864e13, "seq_read" },
	{ 0x77fa1f7, "scsi_print_command" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0xf711688c, "pci_alloc_irq_vectors_affinity" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0xf10de535, "ioread8" },
	{ 0xef9ddd57, "device_del" },
	{ 0x5f9f25c2, "scsi_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x4a593fb8, "debugfs_remove" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x10936407, "device_add" },
	{ 0x13159a00, "debugfs_create_bool" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xff17b2c5, "scsi_target_unblock" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x509b9ea9, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1953c958, "mempool_create" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf3b26b8a, "get_device" },
	{ 0xcb15e4f8, "kmem_cache_create" },
	{ 0x887f61aa, "pci_irq_vector" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xd6b9b1d0, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0xcfed9b44, "device_initialize" },
	{ 0xedc03953, "iounmap" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x28729db7, "seq_release" },
	{ 0x8fd157f, "scsi_target_block" },
	{ 0xa95751b2, "pci_iomap" },
	{ 0x14b44fa7, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x5af55d60, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x13e829da, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xea722105, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001137d00000046sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AF436B1F536525822883DE6");
