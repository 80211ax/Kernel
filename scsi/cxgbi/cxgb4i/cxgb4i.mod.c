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
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x5af55d60, "param_ops_uint" },
	{ 0x84ee6cc3, "param_ops_ushort" },
	{ 0xfc090244, "iscsi_eh_cmd_timed_out" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xa4985ecf, "iscsi_target_alloc" },
	{ 0xe5c191db, "iscsi_eh_recover_target" },
	{ 0x4ec4caf2, "iscsi_eh_device_reset" },
	{ 0xa67c23f9, "iscsi_eh_abort" },
	{ 0x966fadde, "iscsi_queuecommand" },
	{ 0xef346615, "cxgbi_attr_is_visible" },
	{ 0x60a29edf, "cxgbi_ep_disconnect" },
	{ 0x10928c11, "cxgbi_ep_poll" },
	{ 0xf6bf5371, "cxgbi_ep_connect" },
	{ 0xe0873cfc, "iscsi_session_recovery_timedout" },
	{ 0x7aa1bd5f, "cxgbi_parse_pdu_itt" },
	{ 0xecdbf4b7, "cxgbi_conn_init_pdu" },
	{ 0xec19c243, "cxgbi_conn_xmit_pdu" },
	{ 0xdaa11b91, "cxgbi_conn_alloc_pdu" },
	{ 0x66a72741, "cxgbi_cleanup_task" },
	{ 0x223eab85, "iscsi_tcp_task_xmit" },
	{ 0xcf76674d, "iscsi_tcp_task_init" },
	{ 0xa5cfdb6c, "cxgbi_get_conn_stats" },
	{ 0x6aa50cb9, "iscsi_conn_send_pdu" },
	{ 0x6abc4fcb, "cxgbi_set_host_param" },
	{ 0x855bcff8, "cxgbi_get_host_param" },
	{ 0xbac51047, "iscsi_session_get_param" },
	{ 0x636d0fe5, "iscsi_conn_get_param" },
	{ 0xd9f6162, "cxgbi_get_ep_param" },
	{ 0xdf6357fe, "cxgbi_set_conn_param" },
	{ 0xc8d90928, "iscsi_tcp_conn_teardown" },
	{ 0xec581443, "iscsi_conn_stop" },
	{ 0x1a50c279, "iscsi_conn_start" },
	{ 0xda46589d, "cxgbi_bind_conn" },
	{ 0x8fec0dad, "cxgbi_create_conn" },
	{ 0xc01c70e7, "cxgbi_destroy_session" },
	{ 0x1df7a7d, "cxgbi_create_session" },
	{ 0x9a3283, "cxgbi_iscsi_cleanup" },
	{ 0x7fdb6004, "cxgbi_device_unregister_all" },
	{ 0x676a11a9, "cxgb4_unregister_uld" },
	{ 0x7579daf2, "cxgb4_register_uld" },
	{ 0x231f7be0, "cxgbi_iscsi_init" },
	{ 0x885a732d, "cxgbi_conn_tx_open" },
	{ 0x6270107c, "cxgbi_sock_established" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xdd4fbb4b, "cxgbi_conn_pdu_ready" },
	{ 0x7612c688, "___pskb_trim" },
	{ 0xc9001dfc, "cxgb4_pktgl_to_skb" },
	{ 0x2a9e300, "cxgb4_clip_get" },
	{ 0x62904cbb, "__neigh_event_send" },
	{ 0x1376a020, "neigh_destroy" },
	{ 0x85aff1bf, "try_module_get" },
	{ 0x3c7143da, "cxgb4_port_idx" },
	{ 0xb8610563, "cxgb4_port_chan" },
	{ 0xd69a0294, "cxgb4_best_mtu" },
	{ 0x90237968, "cxgb4_l2t_get" },
	{ 0x48f0cb4f, "cxgb4_alloc_atid" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4464fa52, "cxgbi_sock_act_open_req_arp_failure" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xfd93d7cf, "cxgbi_sock_closed" },
	{ 0x3dc9edb0, "cxgb4_clip_release" },
	{ 0xb393c8e4, "cxgb4_free_atid" },
	{ 0xa93c03d5, "cxgb4_l2t_release" },
	{ 0xdd6fef, "cxgbi_sock_purge_wr_queue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x871aa364, "cxgb4_remove_tid" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b074623, "cxgbi_sock_fail_act_open" },
	{ 0x1e037158, "module_put" },
	{ 0xcdccc72d, "cxgbi_sock_free_cpl_skbs" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc011af75, "cxgbi_ddp_set_one_ppod" },
	{ 0x698c2d34, "cxgbi_sock_skb_entail" },
	{ 0x5dab323c, "__alloc_skb" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c56e69f, "cxgbi_hbas_add" },
	{ 0x3a269e05, "cxgbi_device_unregister" },
	{ 0xe19849fe, "cxgbi_device_portmap_create" },
	{ 0xe701e71c, "cxgbi_ddp_ppm_setup" },
	{ 0x312cae4f, "cxgbi_device_register" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x255d5682, "cxgb4_l2t_send" },
	{ 0x9c984773, "cxgb4_select_ntuple" },
	{ 0xba27616, "cxgbi_sock_rcv_peer_close" },
	{ 0xbed67811, "cxgbi_sock_rcv_abort_rpl" },
	{ 0x7b63b1ab, "cxgbi_sock_rcv_close_conn_rpl" },
	{ 0x29361773, "complete" },
	{ 0xd96b290a, "kfree_skb" },
	{ 0xacce26fd, "cxgb4_ofld_send" },
	{ 0x1fbcf02b, "cxgbi_sock_rcv_wr_ack" },
	{ 0x99119d84, "__kfree_skb" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,scsi_mod,libcxgbi,libiscsi_tcp,cxgb4";


MODULE_INFO(srcversion, "82CDF75609BC718E02EA00F");
