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
	{ 0xfc090244, "iscsi_eh_cmd_timed_out" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xa4985ecf, "iscsi_target_alloc" },
	{ 0xe5c191db, "iscsi_eh_recover_target" },
	{ 0x4ec4caf2, "iscsi_eh_device_reset" },
	{ 0xa67c23f9, "iscsi_eh_abort" },
	{ 0x966fadde, "iscsi_queuecommand" },
	{ 0xe0873cfc, "iscsi_session_recovery_timedout" },
	{ 0x855d070d, "iscsi_tcp_cleanup_task" },
	{ 0x223eab85, "iscsi_tcp_task_xmit" },
	{ 0xcf76674d, "iscsi_tcp_task_init" },
	{ 0x6aa50cb9, "iscsi_conn_send_pdu" },
	{ 0xc3fa76c1, "iscsi_host_set_param" },
	{ 0xbac51047, "iscsi_session_get_param" },
	{ 0x1a50c279, "iscsi_conn_start" },
	{ 0x5af55d60, "param_ops_uint" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x18f93f64, "iscsi_unregister_transport" },
	{ 0x76140ee7, "iscsi_register_transport" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5591370e, "crypto_alloc_ahash" },
	{ 0xae807ee, "iscsi_tcp_conn_setup" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd4697d5b, "__tracepoint_iscsi_dbg_sw_tcp" },
	{ 0xec581443, "iscsi_conn_stop" },
	{ 0x42a6248f, "iscsi_suspend_tx" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc8d90928, "iscsi_tcp_conn_teardown" },
	{ 0x71a00b46, "crypto_destroy_tfm" },
	{ 0x7a4497db, "kzfree" },
	{ 0x36979366, "sk_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xcf737814, "blk_queue_dma_alignment" },
	{ 0x215417a0, "iscsi_tcp_r2tpool_alloc" },
	{ 0x5f4520e6, "iscsi_session_setup" },
	{ 0x142ad814, "iscsi_host_add" },
	{ 0xe1bf625c, "iscsi_host_alloc" },
	{ 0x279a211e, "iscsi_host_free" },
	{ 0x79a75ac3, "iscsi_host_remove" },
	{ 0x565506ad, "iscsi_session_teardown" },
	{ 0xa1b5a06e, "iscsi_tcp_r2tpool_free" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0x8637552d, "iscsi_tcp_recv_skb" },
	{ 0x1c600e88, "tcp_read_sock" },
	{ 0x88bf2a13, "iscsi_conn_queue_work" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x9a8384dc, "iscsi_tcp_hdr_recv_prep" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xe76a3e8f, "sk_set_memalloc" },
	{ 0xe84aa220, "fput" },
	{ 0xdbc360df, "iscsi_conn_bind" },
	{ 0xcd52b084, "sockfd_lookup" },
	{ 0x482f8c4d, "sock_no_sendpage" },
	{ 0xf239aff1, "iscsi_tcp_set_max_r2t" },
	{ 0xeb4728, "iscsi_set_param" },
	{ 0x51782f28, "kernel_getpeername" },
	{ 0x636d0fe5, "iscsi_conn_get_param" },
	{ 0x4ace3a08, "iscsi_host_get_param" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x75317af1, "kernel_getsockname" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xf5f9c3b4, "iscsi_tcp_conn_get_stats" },
	{ 0xac2157f9, "iscsi_conn_failure" },
	{ 0xeb451f43, "current_task" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbf0b2ca3, "iscsi_tcp_segment_unmap" },
	{ 0x77f295ff, "kernel_sendmsg" },
	{ 0xc75f9b4c, "iscsi_tcp_segment_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0xa485f05a, "iscsi_segment_seek_sg" },
	{ 0xd260df3c, "iscsi_segment_init_linear" },
	{ 0x24c17da1, "iscsi_tcp_dgst_header" },
	{ 0xb4900436, "dev_printk" },
	{ 0x97165440, "iscsi_dbg_trace" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,scsi_mod,libiscsi_tcp,scsi_transport_iscsi";


MODULE_INFO(srcversion, "B4EDC9D93FAA8E861C265B1");
