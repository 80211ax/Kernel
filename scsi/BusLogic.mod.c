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
	{ 0xaa3ea2c6, "param_ops_charp" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0x7054a3e4, "request_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xea722105, "scsi_dma_map" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x13e829da, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x868acba5, "get_options" },
	{ 0x9efa46cb, "pci_dev_put" },
	{ 0x72b243d4, "free_dma" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe76bc880, "pci_dev_get" },
	{ 0xf162df, "dma_set_mask" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x480476be, "pci_get_device" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb578fc5, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x18866a7b, "scsi_bios_ptable" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc5850110, "printk" },
	{ 0xac94e86b, "vsprintf" },
	{ 0x1b0fe62b, "seq_puts" },
	{ 0x7fe0e5a, "seq_printf" },
	{ 0x9c51e173, "seq_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v0000104Bd00001040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Bd00000140sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Bd00008130sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "36A039AB3296E71CFD82242");
