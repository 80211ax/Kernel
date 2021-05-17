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
	{ 0x2e87bb40, "param_ops_bool" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x29361773, "complete" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x13e829da, "dma_ops" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x5e116a64, "scsi_dma_unmap" },
	{ 0x360262ed, "scmd_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xea722105, "scsi_dma_map" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0x99a3020f, "_dev_info" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0xf711688c, "pci_alloc_irq_vectors_affinity" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0xa95751b2, "pci_iomap" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xf162df, "dma_set_mask" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0xc96d7ae9, "scsi_device_put" },
	{ 0x4e2c352e, "scsi_remove_device" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xdc5a2365, "scsi_add_device" },
	{ 0x63700fba, "scsi_device_lookup" },
	{ 0xb4e68f2a, "scsi_host_get" },
	{ 0xc5850110, "printk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xaae5327c, "scsi_change_queue_depth" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0x2fc16008, "pci_iounmap" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x87fbec93, "__dynamic_dev_dbg" },
	{ 0x6ca7d72c, "pci_free_irq_vectors" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x887f61aa, "pci_irq_vector" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v000015ADd000007C0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "79F43C710731C282FEF27EB");
