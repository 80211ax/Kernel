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
	{ 0xef4b0e0e, "kmem_cache_destroy" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0x1b130bd1, "ata_std_prereset" },
	{ 0x43052688, "ata_port_wait_eh" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xff562445, "sas_remove_children" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x123dc16, "blk_abort_request" },
	{ 0x775c84cf, "scsi_block_requests" },
	{ 0xb8d68dd2, "ata_std_sched_eh" },
	{ 0x30c6a8db, "sas_port_free" },
	{ 0x7e3d1abb, "ata_host_put" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x2978bc7f, "sas_phy_add" },
	{ 0xd6103fc2, "scsi_unblock_requests" },
	{ 0xb21c8e6, "ata_sas_slave_configure" },
	{ 0xd21b61bd, "async_schedule_node_domain" },
	{ 0x21d09b51, "ata_scsi_cmd_error_handler" },
	{ 0xbc738e3c, "sas_port_add_phy" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0xea67cc5e, "sas_rphy_free" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd602feb1, "sas_port_delete_phy" },
	{ 0x8cc4e9b8, "sas_rphy_add" },
	{ 0xd7e50a12, "ata_sas_port_suspend" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2117ca93, "ata_sas_port_init" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa8e882ea, "sas_port_delete" },
	{ 0x91fa0542, "ata_sas_async_probe" },
	{ 0x4f7b591a, "scsi_host_busy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8decff92, "sas_attach_transport" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0x5f79646e, "sas_rphy_delete" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0xeb403727, "ata_sas_port_stop" },
	{ 0x49c0bef2, "sas_expander_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xeb451f43, "current_task" },
	{ 0xf0e48c5d, "sas_read_port_mode_page" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x934616c3, "sas_end_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa6855ffb, "ata_std_error_handler" },
	{ 0xd9e3432f, "ata_scsi_port_error_handler" },
	{ 0x2e9b9a76, "ata_sas_port_start" },
	{ 0x61e074d3, "ata_std_qc_defer" },
	{ 0x4ef13d69, "kmem_cache_free" },
	{ 0xd26a5dfa, "sas_port_mark_backlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x500745a8, "sas_port_add" },
	{ 0x24d273d1, "add_timer" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf811e69d, "scsi_eh_flush_done_q" },
	{ 0xea894092, "ata_port_schedule_eh" },
	{ 0x44f7de0, "ata_sas_port_alloc" },
	{ 0x20515d6e, "ata_noop_qc_prep" },
	{ 0x87ae346d, "scsi_eh_finish_cmd" },
	{ 0x3fb159e9, "sas_phy_free" },
	{ 0x99a3020f, "_dev_info" },
	{ 0x998968f, "kmem_cache_alloc" },
	{ 0x5ec62549, "ata_dev_classify" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc06f53c6, "ata_sas_tport_delete" },
	{ 0xa916b694, "strnlen" },
	{ 0x509b9ea9, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a6298b5, "sas_phy_alloc" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x249b5e65, "ata_wait_after_reset" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf3b26b8a, "get_device" },
	{ 0xcb15e4f8, "kmem_cache_create" },
	{ 0x26c90ea4, "scsi_eh_get_sense" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xac747f18, "ata_sas_port_resume" },
	{ 0x56ab4e45, "sas_port_get_phy" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xd2cd0c08, "scsi_eh_ready_devs" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ca4bf88, "async_synchronize_full_domain" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x1032d550, "sas_port_alloc" },
	{ 0x6e90d235, "ata_host_init" },
	{ 0x96848186, "scnprintf" },
	{ 0x52ec8fe4, "request_firmware" },
	{ 0x3356c42, "scsi_schedule_eh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x55f55a77, "ata_std_postreset" },
	{ 0xd7091e65, "ata_sas_tport_add" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3d7d91fd, "sas_rphy_unlink" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbe2073e8, "ata_sas_queuecmd" },
	{ 0x7e75a9e8, "bsg_job_done" },
	{ 0x5397ae50, "ata_sas_port_destroy" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x76671aa2, "sas_rphy_remove" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9f035a5f, "release_firmware" },
	{ 0x73800ed5, "ata_sas_scsi_ioctl" },
	{ 0x8b77f47d, "__ata_change_queue_depth" },
	{ 0xd06c65ab, "ata_qc_complete" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata,scsi_mod,scsi_transport_sas";


MODULE_INFO(srcversion, "42F28C07DF48CB4F6D11E3F");
