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
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x98fae479, "mraid_mm_register_adp" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xb264ada5, "pci_read_config_dword" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xccc8e55b, "dma_pool_create" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xea722105, "scsi_dma_map" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xb2cf7c01, "mraid_mm_unregister_adp" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc5850110, "printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa21fafb9, "mraid_mm_adapter_app_handle" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,megaraid_mm";

MODULE_ALIAS("pci:v00001028d0000000Esv00001028sd00000123bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv00001028sd00000520bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv00001028sd00000518bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000407sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Fsv00001028sd0000014Abc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd0000016Cbc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd0000016Dbc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd0000016Ebc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd0000016Fbc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd00000170bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000408sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000101Ed00001960sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000409sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6DCD4373AB0911FF973FAFD");
