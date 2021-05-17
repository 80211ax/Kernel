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
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x54f5e0e4, "target_unregister_template" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x60aa0588, "target_register_template" },
	{ 0x754d539c, "strlen" },
	{ 0x349cba85, "strchr" },
	{ 0x441299bf, "qlt_rdy_to_xfer" },
	{ 0x2e452e2b, "qlt_lport_register" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x430712d6, "core_tpg_register" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0x11089ac7, "_ctype" },
	{ 0x4184bff1, "target_execute_cmd" },
	{ 0x8b031375, "transport_generic_request_failure" },
	{ 0x8e5845c0, "target_remove_session" },
	{ 0xa41e71fa, "target_wait_for_sess_cmds" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xcefbcf38, "target_setup_session" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xf7afb369, "btree_init" },
	{ 0x2e7b299b, "qlt_xmit_response" },
	{ 0x90c931bc, "target_submit_cmd" },
	{ 0x363f9683, "target_submit_tmr" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xeee3f880, "transport_generic_free_cmd" },
	{ 0x50df94f5, "btree_insert" },
	{ 0x4f2593f0, "btree_update" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xede9a09a, "btree_lookup" },
	{ 0x8d9fe367, "qlt_stop_phase2" },
	{ 0x759bfe36, "btree_destroy" },
	{ 0x890fa0fa, "btree_get_prev" },
	{ 0xf3b95d79, "btree_remove" },
	{ 0xef92ef33, "btree_last" },
	{ 0xf331236f, "btree_geo32" },
	{ 0x999e8297, "vfree" },
	{ 0x8328836d, "qlt_lport_deregister" },
	{ 0x96e390d2, "target_show_dynamic_sessions" },
	{ 0xac203a62, "target_put_sess_cmd" },
	{ 0xf6af1166, "qlt_free_mcmd" },
	{ 0xc4145318, "qlt_free_cmd" },
	{ 0xc0b719d8, "qlt_unreg_sess" },
	{ 0x1df68396, "target_sess_cmd_list_set_waiting" },
	{ 0x36924aeb, "qlt_xmit_tm_rsp" },
	{ 0x4464fde2, "qlt_abort_cmd" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xb4e68f2a, "scsi_host_get" },
	{ 0x83d91206, "fc_vport_create" },
	{ 0x538e9202, "fc_vport_terminate" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x63b1cdc3, "core_tpg_deregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeb451f43, "current_task" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0xe13c973, "qlt_enable_vha" },
	{ 0x7e730c34, "qlt_stop_phase1" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,qla2xxx,scsi_mod,scsi_transport_fc";


MODULE_INFO(srcversion, "71FA7D98482A890D5CB6BEB");
