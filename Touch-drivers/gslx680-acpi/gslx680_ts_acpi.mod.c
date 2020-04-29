#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:MSSL1680:*");
MODULE_ALIAS("acpi*:MSSL3680:*");
MODULE_ALIAS("acpi*:PNP1680:*");
MODULE_ALIAS("acpi*:PNP3680:*");
MODULE_ALIAS("i2c:gslx680");

MODULE_INFO(srcversion, "23F446A874B2C141FB7F66B");
