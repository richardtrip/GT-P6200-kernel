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
	{ 0xacc1ebd1, "param_ops_charp" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x27ac1e95, "iw_handler_get_thrspy" },
	{ 0x759cec60, "iw_handler_set_thrspy" },
	{ 0x380b1f4b, "iw_handler_get_spy" },
	{ 0xb0608003, "iw_handler_set_spy" },
	{ 0x5578344c, "single_release" },
	{ 0xc7cbeea6, "seq_read" },
	{ 0x15849488, "seq_lseek" },
	{ 0xafe9c436, "eth_change_mtu" },
	{ 0x6de2bd67, "eth_validate_addr" },
	{ 0xf015026, "eth_mac_addr" },
	{ 0x860674ca, "skb_pad" },
	{ 0xae69ae6f, "consume_skb" },
	{ 0xe56dac45, "seq_putc" },
	{ 0xf97e2ff8, "seq_printf" },
	{ 0x14cf9b76, "seq_puts" },
	{ 0xaafc59d7, "single_open" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xc666311c, "proc_create_data" },
	{ 0x5a8c0ac9, "proc_mkdir" },
	{ 0xc9509a82, "pcmcia_register_driver" },
	{ 0x80e12e9e, "__netif_schedule" },
	{ 0xcccca482, "_test_and_clear_bit_le" },
	{ 0x53b5cf95, "wireless_spy_update" },
	{ 0x71c90087, "memcmp" },
	{ 0xdb2c2826, "netif_rx" },
	{ 0x4b0e67d7, "eth_type_trans" },
	{ 0x33e8ae59, "skb_pull" },
	{ 0xd44a7f1f, "skb_put" },
	{ 0xeecac7c4, "dev_alloc_skb" },
	{ 0x2a03ca69, "register_netdev" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x328a05f1, "strncpy" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0x4373156b, "pcmcia_map_mem_page" },
	{ 0xf62b332c, "pcmcia_request_window" },
	{ 0x9ae8abcf, "pcmcia_request_configuration" },
	{ 0xf30bf034, "pcmcia_request_irq" },
	{ 0x7426f76c, "init_timer_key" },
	{ 0x8897578f, "alloc_etherdev_mq" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x1ad1f2e7, "_memcpy_fromio" },
	{ 0x5093fa82, "_clear_bit_le" },
	{ 0x313341a3, "_set_bit_le" },
	{ 0x5f754e5a, "memset" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8a7c6f1, "add_timer" },
	{ 0xea147363, "printk" },
	{ 0xb95f98d6, "_memset_io" },
	{ 0x7f63b31e, "_memcpy_toio" },
	{ 0xda5ea696, "_test_and_set_bit_le" },
	{ 0x61144e, "pcmcia_dev_present" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x97255bdf, "strlen" },
	{ 0x9d669763, "memcpy" },
	{ 0x5c9e356a, "free_netdev" },
	{ 0x76b39533, "unregister_netdev" },
	{ 0x464a136b, "pcmcia_disable_device" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0x1b945caf, "del_timer" },
	{ 0xf117444c, "netif_device_detach" },
	{ 0x2f0d2430, "netif_device_attach" },
	{ 0x428cd124, "pcmcia_unregister_driver" },
	{ 0x93147917, "remove_proc_entry" },
	{ 0xc553a460, "outer_cache" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia";

MODULE_ALIAS("pcmcia:m01A6c0000f*fn*pfn*pa*pb*pc*pd*");
