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
	{ 0x84019a86, "sas_change_queue_depth" },
	{ 0xef4b0e0e, "kmem_cache_destroy" },
	{ 0x9bdc47df, "dma_direct_unmap_sg" },
	{ 0x940be1b3, "device_remove_file" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xd93aee01, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xddfda556, "sas_release_transport" },
	{ 0x77b1fbd2, "pci_release_region" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x3c439a6c, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x975957ec, "sas_drain_work" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xb4900436, "dev_printk" },
	{ 0x8e1512ff, "sas_ssp_task_response" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xb798643c, "sas_request_addr" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf2c659d, "sas_task_abort" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4b47979b, "sas_phy_reset" },
	{ 0x7f76c9a9, "sas_eh_target_reset_handler" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdc8462ef, "sas_get_local_phy" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x33cdd1ed, "sas_target_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xbeba269a, "sas_ioctl" },
	{ 0x72b247c4, "pci_read_config_word" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x4ef13d69, "kmem_cache_free" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xe6fb3fdf, "pci_enable_msi" },
	{ 0xa730c883, "sas_unregister_ha" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xc2663457, "device_create_file" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x998968f, "kmem_cache_alloc" },
	{ 0x16724fed, "sas_register_ha" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xbc994a9b, "driver_create_file" },
	{ 0x509b9ea9, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe9ba3b3b, "sas_target_destroy" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x32aa7ce, "sas_eh_device_reset_handler" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb264ada5, "pci_read_config_dword" },
	{ 0xad752dbc, "sas_queuecommand" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcb15e4f8, "kmem_cache_create" },
	{ 0x741520c3, "sas_remove_host" },
	{ 0xa7f1800, "sas_bios_param" },
	{ 0x37a0cba, "kfree" },
	{ 0x87884ac, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xae3cf404, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0x52ec8fe4, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0xeb251e77, "driver_remove_file" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x542cbf42, "sas_slave_configure" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xccc8e55b, "dma_pool_create" },
	{ 0x9f035a5f, "release_firmware" },
	{ 0xdc53c070, "sas_domain_attach_transport" },
	{ 0xf1091b46, "pci_request_region" },
	{ 0x13e829da, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libsas,scsi_transport_sas,scsi_mod";

MODULE_ALIAS("pci:v00009005d00000410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000412sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000416sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000041Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000041Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000432sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000043Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000043Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3052F30D8CD53E0031E74FA");
