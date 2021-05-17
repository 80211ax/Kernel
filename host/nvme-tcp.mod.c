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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x26939e66, "release_sock" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x17036458, "blk_cleanup_queue" },
	{ 0xc306c3a8, "page_frag_alloc" },
	{ 0x77f295ff, "kernel_sendmsg" },
	{ 0x4dbef285, "nvme_stop_ctrl" },
	{ 0xb21c85e7, "blk_mq_tagset_busy_iter" },
	{ 0x13a91203, "blk_mq_start_request" },
	{ 0xfdc8a8ad, "sock_release" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xac7e7630, "nvmf_register_transport" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x49f961b0, "nvme_shutdown_ctrl" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x441baeb4, "nvme_set_queue_count" },
	{ 0xf9f846d2, "nvme_stop_queues" },
	{ 0x1348201b, "blk_mq_tag_to_rq" },
	{ 0x3ad36f6c, "nvme_complete_async_event" },
	{ 0x33b8193e, "nvmf_should_reconnect" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x558aff62, "blk_mq_complete_request" },
	{ 0x9aad9d1e, "nvmf_reg_write32" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x77f1537a, "blk_mq_update_nr_hw_queues" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xee722dcc, "crypto_ahash_final" },
	{ 0x482f8c4d, "sock_no_sendpage" },
	{ 0x49b3d92d, "crypto_ahash_digest" },
	{ 0x28cb6af4, "blk_mq_init_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x52191d92, "kernel_setsockopt" },
	{ 0x6aa1553b, "iov_iter_bvec" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0x19dd8af8, "kernel_connect" },
	{ 0xe76a3e8f, "sk_set_memalloc" },
	{ 0x869b4a1c, "nvme_enable_ctrl" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x7b85a2ef, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x5f49aea2, "nvmf_ip_options_match" },
	{ 0xb154e2f5, "nvmf_connect_admin_queue" },
	{ 0xeecabc7, "lock_sock_nested" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xcf28e344, "blk_mq_free_tag_set" },
	{ 0x669f7286, "nvme_init_identify" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x88652e65, "inet_pton_with_scope" },
	{ 0x5be48c24, "nvmf_reg_read64" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5ca9caef, "kernel_sock_shutdown" },
	{ 0xf2fad00c, "init_net" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xd58bbbcb, "nvme_delete_wq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7ef66c34, "nvme_init_ctrl" },
	{ 0x99a3020f, "_dev_info" },
	{ 0x29a53d4, "nvme_change_ctrl_state" },
	{ 0xd6cb13ed, "kernel_sendpage" },
	{ 0x509b9ea9, "put_device" },
	{ 0xea1eb596, "nvmf_unregister_transport" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x48ea9aa0, "nvme_cancel_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7e5399d2, "nvmf_get_address" },
	{ 0x71a00b46, "crypto_destroy_tfm" },
	{ 0x2c36aa40, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8a079dea, "nvme_should_fail" },
	{ 0x4542f931, "nvme_disable_ctrl" },
	{ 0x87fbec93, "__dynamic_dev_dbg" },
	{ 0x4e2dd6ad, "skb_copy_and_hash_datagram_iter" },
	{ 0xf3b26b8a, "get_device" },
	{ 0x6a1074b7, "kernel_recvmsg" },
	{ 0x77eb01f9, "nvme_delete_ctrl" },
	{ 0x79bbb531, "nvmf_reg_read32" },
	{ 0x64b62862, "nvme_wq" },
	{ 0x5c966d26, "__nvmf_check_ready" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x63666527, "blk_mq_quiesce_queue" },
	{ 0x627bf4b4, "nvmf_connect_io_queue" },
	{ 0x982bea36, "blk_mq_unquiesce_queue" },
	{ 0xf8fea2ef, "sock_create" },
	{ 0xe73fa95, "nvme_start_ctrl" },
	{ 0x17602b22, "kernel_bind" },
	{ 0x376f22c9, "nvme_setup_cmd" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0x99e45b2e, "iov_iter_advance" },
	{ 0xd82d4cd0, "nvme_stop_keep_alive" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xbde19f7c, "nvme_start_queues" },
	{ 0x27dbd335, "nvmf_free_options" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa084f79f, "cpumask_next_wrap" },
	{ 0x15dfb920, "nvmf_fail_nonready_command" },
	{ 0x7e31dc46, "nvme_complete_rq" },
	{ 0xd443ee8, "skb_copy_bits" },
	{ 0x1c600e88, "tcp_read_sock" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xf2e95b99, "nvme_uninit_ctrl" },
	{ 0x5591370e, "crypto_alloc_ahash" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvme-core,nvme-fabrics";


MODULE_INFO(srcversion, "10244E4E2CDC11FBAB3F244");
