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
	{ 0xfa845bc6, "cxgbi_ppm_ppods_reserve" },
	{ 0x9bdc47df, "dma_direct_unmap_sg" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x99119d84, "__kfree_skb" },
	{ 0x79a75ac3, "iscsi_host_remove" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf239aff1, "iscsi_tcp_set_max_r2t" },
	{ 0xb4900436, "dev_printk" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xbd12556, "cxgbi_ppm_ppod_release" },
	{ 0x8637552d, "iscsi_tcp_recv_skb" },
	{ 0x45c3a497, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xe76bc880, "pci_dev_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x18f93f64, "iscsi_unregister_transport" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x565506ad, "iscsi_session_teardown" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1376a020, "neigh_destroy" },
	{ 0x142ad814, "iscsi_host_add" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe1bf625c, "iscsi_host_alloc" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x72e7c0c9, "iscsi_lookup_endpoint" },
	{ 0xa1b5a06e, "iscsi_tcp_r2tpool_free" },
	{ 0xed4978be, "iscsi_itt_to_ctask" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb451f43, "current_task" },
	{ 0xe032db74, "cxgbi_ppm_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x215417a0, "iscsi_tcp_r2tpool_alloc" },
	{ 0xc3fa76c1, "iscsi_host_set_param" },
	{ 0x279a211e, "iscsi_host_free" },
	{ 0x42a6248f, "iscsi_suspend_tx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2371e26, "iscsi_destroy_endpoint" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xf2fad00c, "init_net" },
	{ 0x81533963, "sysfs_format_mac" },
	{ 0xae807ee, "iscsi_tcp_conn_setup" },
	{ 0x45f2ad09, "vlan_dev_real_dev" },
	{ 0x148a1454, "ipv6_dev_get_saddr" },
	{ 0xeb4728, "iscsi_set_param" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1e037158, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x5dab323c, "__alloc_skb" },
	{ 0xa7066160, "ip6_route_output_flags" },
	{ 0x1ecc5b20, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd96b290a, "kfree_skb" },
	{ 0x76140ee7, "iscsi_register_transport" },
	{ 0x855d070d, "iscsi_tcp_cleanup_task" },
	{ 0x88bf2a13, "iscsi_conn_queue_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9a8384dc, "iscsi_tcp_hdr_recv_prep" },
	{ 0xdab69cc3, "cxgbi_ppm_release" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xac2157f9, "iscsi_conn_failure" },
	{ 0x4db79bba, "ip_route_output_flow" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xf2ff3187, "iscsi_create_endpoint" },
	{ 0x37a0cba, "kfree" },
	{ 0x87884ac, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa9c71a1f, "__ip_dev_find" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x5f4520e6, "iscsi_session_setup" },
	{ 0x4ace3a08, "iscsi_host_get_param" },
	{ 0xdbc360df, "iscsi_conn_bind" },
	{ 0x9efa46cb, "pci_dev_put" },
	{ 0x68df493, "iscsi_tcp_recv_segment_is_hdr" },
	{ 0x142c009c, "skb_put" },
	{ 0x5af55d60, "param_ops_uint" },
	{ 0x13e829da, "dma_ops" },
	{ 0x66b02eee, "cxgbi_ppm_make_ppod_hdr" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcxgb,libiscsi,libiscsi_tcp,scsi_transport_iscsi,scsi_mod";


MODULE_INFO(srcversion, "F709FBED526FBD6ACD26D16");
