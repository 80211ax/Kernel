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
	{ 0x3ea760ba, "fc_linkup" },
	{ 0x86e1af90, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc50617a5, "bus_register" },
	{ 0x8d997433, "fc_exch_init" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb6f7e88d, "__put_devmap_managed_page" },
	{ 0xdeacc23a, "fc_rport_create" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xb0ddd5a1, "fc_rport_flush_queue" },
	{ 0xb4900436, "dev_printk" },
	{ 0x21dfa208, "fc_seq_els_rsp_send" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x467c781d, "skb_clone" },
	{ 0x4d2605a2, "dev_get_by_name" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x1c7d403e, "skb_trim" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x8750dfaa, "__netdev_alloc_skb" },
	{ 0xc0cac1d8, "fc_fcp_init" },
	{ 0xb6d2994b, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x572123c8, "fc_disc_config" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xae13ad33, "skb_queue_purge" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0xc646b8d1, "fc_elsct_init" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x480a8176, "fc_vport_id_lookup" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x1fd50dc0, "device_register" },
	{ 0xeb451f43, "current_task" },
	{ 0x51411062, "__ethtool_get_link_ksettings" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0xe7c7ab39, "fc_exch_recv" },
	{ 0x7c0ab4a7, "fc_lport_set_local_id" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x9166fada, "strncpy" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4a608402, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbfae392a, "skb_pull" },
	{ 0xf2fad00c, "init_net" },
	{ 0x87fcf904, "bus_unregister" },
	{ 0x8ed0fee2, "fc_lport_reset" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x77b1681, "skb_queue_tail" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd96b290a, "kfree_skb" },
	{ 0x75a4bf4b, "fc_linkdown" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb804145, "fc_rport_login" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3f45e1f1, "fc_disc_init" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xcc18d7db, "fc_rport_logoff" },
	{ 0x37a0cba, "kfree" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xaa8deb00, "skb_dequeue" },
	{ 0xa106af3b, "device_unregister" },
	{ 0x9d50ed7e, "fc_rport_destroy" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc9192e9d, "fc_lport_init" },
	{ 0xdd4dfd40, "consume_skb" },
	{ 0x14b44fa7, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9d8b05c, "dev_queue_xmit" },
	{ 0x142c009c, "skb_put" },
	{ 0x5af55d60, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9ed84d8e, "__put_page" },
	{ 0x58c5093b, "dev_get_stats" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xae9739df, "fc_rport_lookup" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libfc";


MODULE_INFO(srcversion, "957BB42F82E0A52F360C055");
