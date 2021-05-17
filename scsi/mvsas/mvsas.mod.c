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
	{ 0x2d3385d3, "system_wq" },
	{ 0x84019a86, "sas_change_queue_depth" },
	{ 0x9bdc47df, "dma_direct_unmap_sg" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xd93aee01, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xddfda556, "sas_release_transport" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x975957ec, "sas_drain_work" },
	{ 0xf162df, "dma_set_mask" },
	{ 0xb4900436, "dev_printk" },
	{ 0x8e1512ff, "sas_ssp_task_response" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4b47979b, "sas_phy_reset" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x7f76c9a9, "sas_eh_target_reset_handler" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdc8462ef, "sas_get_local_phy" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x33cdd1ed, "sas_target_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xeb451f43, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xbeba269a, "sas_ioctl" },
	{ 0x72b247c4, "pci_read_config_word" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xa730c883, "sas_unregister_ha" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x16724fed, "sas_register_ha" },
	{ 0x425d5c4, "sas_alloc_slow_task" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x509b9ea9, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe9ba3b3b, "sas_target_destroy" },
	{ 0x32aa7ce, "sas_eh_device_reset_handler" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb264ada5, "pci_read_config_dword" },
	{ 0xad752dbc, "sas_queuecommand" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x741520c3, "sas_remove_host" },
	{ 0xa7f1800, "sas_bios_param" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x87884ac, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x18acf9e7, "sas_free_task" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x542cbf42, "sas_slave_configure" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0xccc8e55b, "dma_pool_create" },
	{ 0xdc53c070, "sas_domain_attach_transport" },
	{ 0x13e829da, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libsas,scsi_transport_sas,scsi_mod";

MODULE_ALIAS("pci:v000011ABd00006320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006440sv*sd00006480bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006485sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00009480sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00009180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000450sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002710sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002720sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002721sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002740sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002744sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002760sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009480sv*sd00009480bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009445sv*sd00009480bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009485sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001083sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001084sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D7957F6B69CBFAC6CEC0622");
