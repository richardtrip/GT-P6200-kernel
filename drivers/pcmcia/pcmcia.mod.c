#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x188eaa3b, "module_layout" },
	{ 0xe83bacfc, "bus_register" },
	{ 0x9bd6e36, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd5b037e1, "kref_put" },
	{ 0xec41fe3a, "driver_register" },
	{ 0x37fccb1c, "sysfs_remove_bin_file" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x788fe103, "iomem_resource" },
	{ 0x97255bdf, "strlen" },
	{ 0xa5cef8ad, "release_resource" },
	{ 0x9bb1cb41, "dev_printk" },
	{ 0x761b6b1e, "pcmcia_put_socket" },
	{ 0x5ccdee8e, "pcmcia_socket_class" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8ae93ce5, "mutex_unlock" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xda1a7335, "kasprintf" },
	{ 0x1248e881, "bus_rescan_devices" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3ee49f6, "pcmcia_parse_uevents" },
	{ 0x4abb8168, "device_register" },
	{ 0x37fafda, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x8c13fbbd, "class_interface_register" },
	{ 0x71c90087, "memcmp" },
	{ 0xf30168a4, "class_interface_unregister" },
	{ 0xab794e9d, "driver_unregister" },
	{ 0x328a05f1, "strncpy" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe672de4b, "mutex_lock" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x320b6d7d, "put_driver" },
	{ 0x859c6dc7, "request_threaded_irq" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xcfa596b4, "bus_unregister" },
	{ 0x7f3075c1, "module_put" },
	{ 0x61ff2398, "pccard_register_pcmcia" },
	{ 0x3dbcc7ba, "_dev_info" },
	{ 0xa4b268a6, "bus_for_each_dev" },
	{ 0x37cee2ca, "kmem_cache_alloc" },
	{ 0x75db216, "driver_create_file" },
	{ 0xa1a0ffe, "put_device" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x1e89d4ea, "get_device" },
	{ 0xe6239f35, "get_driver" },
	{ 0x83800bfa, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x9775cdc, "kref_get" },
	{ 0xc11dc621, "sysfs_create_bin_file" },
	{ 0xf19789c5, "request_firmware" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0x840d4b66, "dev_warn" },
	{ 0x4d58edce, "device_unregister" },
	{ 0x7450e872, "driver_attach" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x16925514, "dev_set_name" },
	{ 0xc553a460, "outer_cache" },
	{ 0x58ef1730, "dev_get_drvdata" },
	{ 0xc68863e1, "release_firmware" },
	{ 0x57cbca70, "pcmcia_get_socket" },
	{ 0xbe63ee40, "request_resource" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xb9eb3aa9, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia_core";

