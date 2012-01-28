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
	{ 0x9bd6e36, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x8a431e9b, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xa57afc74, "ktime_get" },
	{ 0x944639af, "usb_kill_urb" },
	{ 0x8ae93ce5, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0xd3563be, "video_register_device" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xd2b096b8, "mutex_lock_interruptible" },
	{ 0x37fafda, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0xa5419238, "video_unregister_device" },
	{ 0xb0176b4e, "usb_set_interface" },
	{ 0x328a05f1, "strncpy" },
	{ 0xe672de4b, "mutex_lock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x2151ba00, "usb_free_coherent" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe17c4947, "vm_insert_page" },
	{ 0x7f3075c1, "module_put" },
	{ 0xf0d589e6, "usb_submit_urb" },
	{ 0x37cee2ca, "kmem_cache_alloc" },
	{ 0xcc7b5aef, "video_devdata" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x3f5ded65, "input_register_device" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xddc065bb, "usb_clear_halt" },
	{ 0xe95c9f50, "input_free_device" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x72542c85, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe467410c, "input_unregister_device" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0xf83178bd, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x239464e6, "usb_ifnum_to_if" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xb645a16b, "vmalloc_to_page" },
	{ 0xb104abff, "usb_alloc_coherent" },
	{ 0x58ef1730, "dev_get_drvdata" },
	{ 0xa4aa9928, "usb_free_urb" },
	{ 0x67be508d, "video_ioctl2" },
	{ 0x51294d65, "usb_alloc_urb" },
	{ 0x599d32b1, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

