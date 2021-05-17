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
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0x58b936b7, "raid_class_release" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0x45a4229e, "raid_class_attach" },
	{ 0x85bd1608, "__request_region" },
	{ 0x99a3020f, "_dev_info" },
	{ 0x8bd6c5ef, "_dev_notice" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x13e829da, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xccc8e55b, "dma_pool_create" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x29361773, "complete" },
	{ 0x1348201b, "blk_mq_tag_to_rq" },
	{ 0x360262ed, "scmd_printk" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0xea722105, "scsi_dma_map" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x87fbec93, "__dynamic_dev_dbg" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd8e396d9, "__scsi_iterate_devices" },
	{ 0xdc5a2365, "scsi_add_device" },
	{ 0x63700fba, "scsi_device_lookup" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x64cc1256, "attribute_container_find_class_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb4900436, "dev_printk" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=raid_class,scsi_mod";

MODULE_ALIAS("pci:v00001011d00001065sv00001069sd00000020bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "254F636EED8E72C02B58EDF");
