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
	{ 0x12dfb7e6, "noop_llseek" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xe76bc880, "pci_dev_get" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x9ef71b25, "device_create" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x36653098, "__register_chrdev" },
	{ 0x77889920, "__class_create" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xb47461c0, "dma_get_required_mask" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x480476be, "pci_get_device" },
	{ 0x775c84cf, "scsi_block_requests" },
	{ 0xd6103fc2, "scsi_unblock_requests" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x9166fada, "strncpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x1348201b, "blk_mq_tag_to_rq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xd8e396d9, "__scsi_iterate_devices" },
	{ 0xccd349a8, "scsi_device_set_state" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x87b8798d, "sg_next" },
	{ 0xea722105, "scsi_dma_map" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xeb451f43, "current_task" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1d10e86a, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x793419d2, "device_destroy" },
	{ 0x9efa46cb, "pci_dev_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfb578fc5, "memset" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0xc5850110, "printk" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0x1b0fe62b, "seq_puts" },
	{ 0x7fe0e5a, "seq_printf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001044d0000A501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001044d0000A511sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0859761106C00AE9D68CC65");
