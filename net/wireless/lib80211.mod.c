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
	{ 0x7426f76c, "init_timer_key" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xa4476cec, "del_timer_sync" },
	{ 0x11089ac7, "_ctype" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0xea147363, "printk" },
	{ 0x8a7c6f1, "add_timer" },
	{ 0x7f3075c1, "module_put" },
	{ 0x37cee2ca, "kmem_cache_alloc" },
	{ 0xc27487dd, "__bug" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x701d0ebd, "snprintf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

