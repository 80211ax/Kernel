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
	{ 0x5af55d60, "param_ops_uint" },
	{ 0x12dfb7e6, "noop_llseek" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x116adfb3, "genl_unregister_family" },
	{ 0x1d10e86a, "class_destroy" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0x162ec8f2, "genl_register_family" },
	{ 0x77889920, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x9ef71b25, "device_create" },
	{ 0xebbc048, "cdev_add" },
	{ 0xda94f2ff, "cdev_init" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xccc8e55b, "dma_pool_create" },
	{ 0x998968f, "kmem_cache_alloc" },
	{ 0xcb15e4f8, "kmem_cache_create" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfb578fc5, "memset" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0xa95751b2, "pci_iomap" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0x87884ac, "dma_direct_map_sg" },
	{ 0x9bdc47df, "dma_direct_unmap_sg" },
	{ 0xeb9e913d, "sgl_alloc_order" },
	{ 0x6a03751f, "sgl_free_order" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x13e829da, "dma_ops" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xf7bba152, "scsi_report_bus_reset" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0xebf9a6bf, "cdev_del" },
	{ 0x793419d2, "device_destroy" },
	{ 0x4fd793ad, "pci_choose_state" },
	{ 0x13e28305, "pci_save_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0xe1e96cf3, "pci_enable_wake" },
	{ 0x13c189ea, "pci_set_power_state" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd6103fc2, "scsi_unblock_requests" },
	{ 0x39fe5dd9, "pci_restore_state" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x775c84cf, "scsi_block_requests" },
	{ 0x99a3020f, "_dev_info" },
	{ 0xd96b290a, "kfree_skb" },
	{ 0xe92f0023, "netlink_broadcast" },
	{ 0xf2fad00c, "init_net" },
	{ 0x7791beb4, "nla_put" },
	{ 0x8bc99c65, "genlmsg_put" },
	{ 0x5dab323c, "__alloc_skb" },
	{ 0x9a828d9b, "sdev_prefix_printk" },
	{ 0xdc5a2365, "scsi_add_device" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0x4e2c352e, "scsi_remove_device" },
	{ 0x77e52315, "scsi_device_get" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x87b8798d, "sg_next" },
	{ 0xea722105, "scsi_dma_map" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x69acdf38, "memcpy" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc6cbbc89, "capable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc1f9a642, "fasync_helper" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x360262ed, "scmd_printk" },
	{ 0x11ab1a70, "blk_queue_max_hw_sectors" },
	{ 0xd53db9b7, "blk_queue_rq_timeout" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0x754d539c, "strlen" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0xef4b0e0e, "kmem_cache_destroy" },
	{ 0x4ef13d69, "kmem_cache_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf711688c, "pci_alloc_irq_vectors_affinity" },
	{ 0x6ca7d72c, "pci_free_irq_vectors" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x887f61aa, "pci_irq_vector" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x29361773, "complete" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x72b247c4, "pci_read_config_word" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc5850110, "printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v000011F8d00005220sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BE007F6B54E51D78F5E7663");
