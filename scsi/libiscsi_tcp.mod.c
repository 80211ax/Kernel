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
	{ 0xf888ca21, "sg_init_table" },
	{ 0xdc09eab6, "skb_seq_read" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xb4900436, "dev_printk" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x87b8798d, "sg_next" },
	{ 0x47e9f9d6, "iscsi_requeue_task" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3bef2f73, "iscsi_pool_init" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xee722dcc, "crypto_ahash_final" },
	{ 0xed4978be, "iscsi_itt_to_ctask" },
	{ 0x49b3d92d, "crypto_ahash_digest" },
	{ 0x67b18763, "skb_abort_seq_read" },
	{ 0xeb451f43, "current_task" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd27732ff, "skb_prepare_seq_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x986c2209, "iscsi_conn_teardown" },
	{ 0x5b810ae8, "iscsi_put_task" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcfa8bc12, "iscsi_prep_data_out_pdu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfbc437f9, "iscsi_complete_pdu" },
	{ 0xac2157f9, "iscsi_conn_failure" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x69acdf38, "memcpy" },
	{ 0x97165440, "iscsi_dbg_trace" },
	{ 0x6a756948, "__iscsi_complete_pdu" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x47867762, "__tracepoint_iscsi_dbg_tcp" },
	{ 0x8d303b1b, "iscsi_pool_free" },
	{ 0xde8e7c20, "iscsi_verify_itt" },
	{ 0xeae3be73, "iscsi_conn_setup" },
	{ 0x7c319a28, "iscsi_update_cmdsn" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,scsi_transport_iscsi";


MODULE_INFO(srcversion, "0C30DB850B236759F2A0AB3");
