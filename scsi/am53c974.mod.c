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
	{ 0x2e87bb40, "param_ops_bool" },
	{ 0x6808c0a3, "pci_unregister_driver" },
	{ 0x477d08dc, "__pci_register_driver" },
	{ 0xb08809da, "scsi_esp_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4a29ab38, "scsi_esp_intr" },
	{ 0x5c94d1ad, "dma_alloc_attrs" },
	{ 0xe3c6a871, "pci_set_master" },
	{ 0xa95751b2, "pci_iomap" },
	{ 0x266c07d, "pci_request_regions" },
	{ 0xedef0f52, "kmem_cache_alloc_trace" },
	{ 0x9e295c8c, "kmalloc_caches" },
	{ 0xec559383, "scsi_host_alloc" },
	{ 0xbd4e1eca, "scsi_esp_template" },
	{ 0xf162df, "dma_set_mask" },
	{ 0x646826e2, "pci_enable_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbc3ed63e, "pci_read_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa00e0f78, "pci_write_config_byte" },
	{ 0x796ce90d, "scsi_esp_cmd" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x848d372e, "iowrite8" },
	{ 0xb4900436, "dev_printk" },
	{ 0xf10de535, "ioread8" },
	{ 0x9d895fd9, "scsi_host_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xf1d396e, "pci_disable_device" },
	{ 0xcd6b093b, "pci_release_regions" },
	{ 0x2fc16008, "pci_iounmap" },
	{ 0x34437b76, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1d83ee86, "scsi_esp_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=esp_scsi,scsi_mod";

MODULE_ALIAS("pci:v00001022d00002020sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1FB80BCF227603A92B03E1A");
