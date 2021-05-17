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
	{ 0xa24f23d8, "__request_module" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0x53b954a2, "up_read" },
	{ 0x5d1bc8e1, "single_open" },
	{ 0x754d539c, "strlen" },
	{ 0x96d7a887, "single_release" },
	{ 0x13a91203, "blk_mq_start_request" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x7fe0e5a, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x793419d2, "device_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x65864e13, "seq_read" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb67fec0e, "uuid_parse" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb7d9b388, "misc_register" },
	{ 0x35d61ed2, "__nvme_submit_sync_cmd" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x9166fada, "strncpy" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9ef71b25, "device_create" },
	{ 0x4e3567f7, "match_int" },
	{ 0xce807a25, "up_write" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x69e683de, "uuid_gen" },
	{ 0x1e037158, "module_put" },
	{ 0x509b9ea9, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1d10e86a, "class_destroy" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7e31dc46, "nvme_complete_rq" },
	{ 0x77889920, "__class_create" },
	{ 0x3305de87, "misc_deregister" },
	{ 0x85aff1bf, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvme-core";


MODULE_INFO(srcversion, "C74F86BD402A2361D3C4FA7");
