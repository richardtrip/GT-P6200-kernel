cmd_usr/initramfs_data.gz.o := arm-eabi-gcc -Wp,-MD,usr/.initramfs_data.gz.o.d  -nostdinc -isystem /home/trip/android/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/../lib/gcc/arm-eabi/4.4.3/include -I/home/trip/samsung/tabplus/kernel/GT-P6200_HC_Opensource/GT-P6200_Kernel/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-s5pv310/include -Iarch/arm/plat-s5p/include -Iarch/arm/plat-samsung/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables  -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -gdwarf-2        -c -o usr/initramfs_data.gz.o usr/initramfs_data.gz.S

deps_usr/initramfs_data.gz.o := \
  usr/initramfs_data.gz.S \
  /home/trip/samsung/tabplus/kernel/GT-P6200_HC_Opensource/GT-P6200_Kernel/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

usr/initramfs_data.gz.o: $(deps_usr/initramfs_data.gz.o)

$(deps_usr/initramfs_data.gz.o):
