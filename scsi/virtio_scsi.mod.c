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
	{ 0x76fbbdce, "unregister_virtio_driver" },
	{ 0xef4b0e0e, "kmem_cache_destroy" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x1008c4b7, "register_virtio_driver" },
	{ 0x1953c958, "mempool_create" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xcb15e4f8, "kmem_cache_create" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0xda36afdb, "virtqueue_get_vring_size" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcdf9e875, "blk_mq_unique_tag" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0xe3b1136b, "scsi_rescan_device" },
	{ 0xdc5a2365, "scsi_add_device" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0x4e2c352e, "scsi_remove_device" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0x63700fba, "scsi_device_lookup" },
	{ 0xc5850110, "printk" },
	{ 0x360262ed, "scmd_printk" },
	{ 0x87fbec93, "__dynamic_dev_dbg" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0xb9f67cca, "virtio_check_driver_offered_feature" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0xd9fcba23, "virtqueue_notify" },
	{ 0x89c9eff6, "virtqueue_kick_prepare" },
	{ 0xc878d3fb, "virtqueue_add_sgs" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xb25846b0, "blk_mq_virtio_map_queues" },
	{ 0x2c0bc315, "virtqueue_kick" },
	{ 0xfaf696f0, "virtqueue_add_inbuf" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x29361773, "complete" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x418c76ff, "virtqueue_enable_cb" },
	{ 0x34d4c9e7, "virtqueue_is_broken" },
	{ 0x4f670c46, "virtqueue_get_buf" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x56597243, "virtqueue_disable_cb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,scsi_mod,virtio_ring";

MODULE_ALIAS("virtio:d00000008v*");

MODULE_INFO(srcversion, "3FE81809970085CF0B9293E");
