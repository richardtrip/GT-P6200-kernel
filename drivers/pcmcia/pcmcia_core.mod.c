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
	{ 0xe90dcae0, "__request_module" },
	{ 0xf9a482f9, "msleep" },
	{ 0x85b87d7c, "up_read" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x8a431e9b, "dev_set_drvdata" },
	{ 0x9bb1cb41, "dev_printk" },
	{ 0x8ae93ce5, "mutex_unlock" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x89116741, "sysfs_remove_group" },
	{ 0x1907c2a2, "down_read" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0x2fd61cd, "wait_for_completion" },
	{ 0x4abb8168, "device_register" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0x37fafda, "__mutex_init" },
	{ 0x42224298, "sscanf" },
	{ 0xc22a3607, "kthread_stop" },
	{ 0xcad79a4b, "sysfs_create_group" },
	{ 0xa2763e30, "class_unregister" },
	{ 0x84b183ae, "strncmp" },
	{ 0xe672de4b, "mutex_lock" },
	{ 0x527ecf54, "up_write" },
	{ 0x98696e20, "__class_register" },
	{ 0x33898f38, "down_write" },
	{ 0xa1a0ffe, "put_device" },
	{ 0x1000e51, "schedule" },
	{ 0x35c2ba9e, "refrigerator" },
	{ 0x310fcf7d, "wake_up_process" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x1e89d4ea, "get_device" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xa8d599b3, "kthread_create" },
	{ 0x9d669763, "memcpy" },
	{ 0x840d4b66, "dev_warn" },
	{ 0x4d58edce, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4f7f2d1b, "complete" },
	{ 0x16925514, "dev_set_name" },
	{ 0x58ef1730, "dev_get_drvdata" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xb9eb3aa9, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

