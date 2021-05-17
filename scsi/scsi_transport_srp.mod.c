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
	{ 0x9481586, "transport_class_register" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xb4900436, "dev_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5e16711d, "transport_destroy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xdaf97dab, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xef9ddd57, "device_del" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xdcc6051c, "transport_add_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x240345dd, "transport_configure_device" },
	{ 0x2c0ba747, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x10936407, "device_add" },
	{ 0x2555de64, "transport_class_unregister" },
	{ 0xff17b2c5, "scsi_target_unblock" },
	{ 0x509b9ea9, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409fad5b, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xf3b26b8a, "get_device" },
	{ 0xd8e396d9, "__scsi_iterate_devices" },
	{ 0xe4ec10de, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0xcfed9b44, "device_initialize" },
	{ 0xa71f567e, "transport_remove_device" },
	{ 0x8fd157f, "scsi_target_block" },
	{ 0x14b44fa7, "dev_set_name" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "98CE3517D3DF1DD42043CF1");
