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
	{ 0xd7cdd197, "param_array_ops" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x12dfb7e6, "noop_llseek" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x36653098, "__register_chrdev" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5a921311, "strncmp" },
	{ 0x349cba85, "strchr" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x754d539c, "strlen" },
	{ 0x9166fada, "strncpy" },
	{ 0x7fe0e5a, "seq_printf" },
	{ 0x1b0fe62b, "seq_puts" },
	{ 0x42be2223, "scsi_free_host_dev" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x37a0cba, "kfree" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0xf162df, "dma_set_mask" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x9bdc47df, "dma_direct_unmap_sg" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd93aee01, "pci_write_config_dword" },
	{ 0xedc03953, "iounmap" },
	{ 0x25f78c36, "pci_write_config_word" },
	{ 0x72b247c4, "pci_read_config_word" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x87884ac, "dma_direct_map_sg" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x13e829da, "dma_ops" },
	{ 0x29361773, "complete" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd484f1ec, "scsi_get_host_dev" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xeb451f43, "current_task" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x87b8798d, "sg_next" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001119d*sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000601sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AA04EDE766AF50381354851");
