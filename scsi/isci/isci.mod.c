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
	{ 0x9bdc47df, "dma_direct_unmap_sg" },
	{ 0xddfda556, "sas_release_transport" },
	{ 0x6ca7d72c, "pci_free_irq_vectors" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0x7a932147, "pcim_enable_device" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xf8966909, "scsi_add_host_with_dma" },
	{ 0x39ba15df, "pcim_iomap_table" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x975957ec, "sas_drain_work" },
	{ 0xf162df, "dma_set_mask" },
	{ 0x8e1512ff, "sas_ssp_task_response" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0x859c219b, "sas_suspend_ha" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf2c659d, "sas_task_abort" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x8583d3ec, "pci_biosrom_size" },
	{ 0x4b47979b, "sas_phy_reset" },
	{ 0x8fc65c49, "pv_ops" },
	{ 0x7f76c9a9, "sas_eh_target_reset_handler" },
	{ 0xe81adce4, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdc8462ef, "sas_get_local_phy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0x4a8e3d34, "try_test_sas_gpio_gp_bit" },
	{ 0x4a57222b, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf711688c, "pci_alloc_irq_vectors_affinity" },
	{ 0x155f5d07, "_dev_warn" },
	{ 0x33cdd1ed, "sas_target_alloc" },
	{ 0x39fe5dd9, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xeb451f43, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xbeba269a, "sas_ioctl" },
	{ 0xa74d85c3, "dma_direct_map_page" },
	{ 0x8e061a48, "scsi_scan_host" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0xa92abb8d, "_dev_err" },
	{ 0xc6ad27e5, "efi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa730c883, "sas_unregister_ha" },
	{ 0x99ed3e41, "pcim_iomap_regions" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc5a5cea4, "dma_direct_unmap_page" },
	{ 0x99a3020f, "_dev_info" },
	{ 0x16724fed, "sas_register_ha" },
	{ 0xd9d1066f, "pci_map_biosrom" },
	{ 0x5e75453e, "sas_eh_abort_handler" },
	{ 0xbfcf4daf, "sas_resume_ha" },
	{ 0x611786ba, "devm_free_irq" },
	{ 0x509b9ea9, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe9ba3b3b, "sas_target_destroy" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x32aa7ce, "sas_eh_device_reset_handler" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xad752dbc, "sas_queuecommand" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x87fbec93, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x92df32c2, "sas_ata_schedule_reset" },
	{ 0x741520c3, "sas_remove_host" },
	{ 0x9a4444db, "param_ops_byte" },
	{ 0x887f61aa, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x13c189ea, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xa7f1800, "sas_bios_param" },
	{ 0x87884ac, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x7a6e6407, "sas_prep_resume_ha" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x52ec8fe4, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x326425ca, "pci_unmap_biosrom" },
	{ 0x82731c0b, "scsi_remove_host" },
	{ 0x5fc16264, "dmam_alloc_attrs" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x84ee6cc3, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x542cbf42, "sas_slave_configure" },
	{ 0xb6703682, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x5af55d60, "param_ops_uint" },
	{ 0x467aa9c9, "devm_request_threaded_irq" },
	{ 0x9f035a5f, "release_firmware" },
	{ 0xdc53c070, "sas_domain_attach_transport" },
	{ 0x13e829da, "dma_ops" },
	{ 0x13e28305, "pci_save_state" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libsas,scsi_transport_sas,scsi_mod";

MODULE_ALIAS("pci:v00008086d00001D61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D67sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D69sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8E005C529073FD21E7F6115");
