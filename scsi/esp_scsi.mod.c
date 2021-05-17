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
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xb4f68313, "spi_dv_device" },
	{ 0xcde6d350, "scsi_track_queue_full" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0xb4900436, "dev_printk" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x6c5dae23, "scsi_kmap_atomic_sg" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1b7d23cb, "spi_attach_transport" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa97f1b05, "__starget_for_each_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x56c8799d, "scsi_kunmap_atomic_sg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x22025c1, "spi_populate_tag_msg" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaca6cc28, "spi_release_transport" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7e63af5e, "__scsi_device_lookup_by_target" },
	{ 0x37a0cba, "kfree" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a4685ab, "spi_display_xfer_agreement" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13e829da, "dma_ops" },
	{ 0xea722105, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,scsi_transport_spi";


MODULE_INFO(srcversion, "619C56775FC3FE4ECBFE74B");
