cmd_drivers/media/video/samsung/ump/common/ump_kernel_common.o := arm-eabi-gcc -Wp,-MD,drivers/media/video/samsung/ump/common/.ump_kernel_common.o.d  -nostdinc -isystem /home/trip/android/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/../lib/gcc/arm-eabi/4.4.3/include -I/home/trip/samsung/tabplus/kernel/GT-P6200_HC_Opensource/GT-P6200_Kernel/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-s5pv310/include -Iarch/arm/plat-s5p/include -Iarch/arm/plat-samsung/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -marm -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Idrivers/media/video/samsung/ump/ -Idrivers/media/video/samsung/ump/common -Idrivers/media/video/samsung/ump/linux -Idrivers/media/video/samsung/ump/include -Idrivers/media/video/samsung/ump/linux/license/gpl/ -Idrivers/media/video/samsung/ump/../mali/common -Idrivers/media/video/samsung/ump/../mali/linux -DMALI_USE_UNIFIED_MEMORY_PROVIDER -DUSING_MEMORY=1 -DUMP_MEM_SIZE=512 -DSVN_REV= -DSVN_REV_STRING=\"\"    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(ump_kernel_common)"  -D"KBUILD_MODNAME=KBUILD_STR(ump)"  -c -o drivers/media/video/samsung/ump/common/.tmp_ump_kernel_common.o drivers/media/video/samsung/ump/common/ump_kernel_common.c

deps_drivers/media/video/samsung/ump/common/ump_kernel_common.o := \
  drivers/media/video/samsung/ump/common/ump_kernel_common.c \
  drivers/media/video/samsung/ump/../mali/common/mali_kernel_common.h \
  drivers/media/video/samsung/ump/../mali/common/mali_osk.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/trip/samsung/tabplus/kernel/GT-P6200_HC_Opensource/GT-P6200_Kernel/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  /home/trip/samsung/tabplus/kernel/GT-P6200_HC_Opensource/GT-P6200_Kernel/arch/arm/include/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
  /home/trip/samsung/tabplus/kernel/GT-P6200_HC_Opensource/GT-P6200_Kernel/arch/arm/include/asm/posix_types.h \
  drivers/media/video/samsung/ump/../mali/common/mali_kernel_memory_engine.h \
  drivers/media/video/samsung/ump/../mali/linux/mali_osk_specific.h \
  drivers/media/video/samsung/ump/../mali/common/mali_osk_bitops.h \
  drivers/media/video/samsung/ump/../mali/common/mali_osk_list.h \
  drivers/media/video/samsung/ump/common/ump_osk.h \
  drivers/media/video/samsung/ump/common/ump_kernel_memory_backend.h \
  drivers/media/video/samsung/ump/include/ump_kernel_interface.h \
  drivers/media/video/samsung/ump/include/ump_kernel_platform.h \
  drivers/media/video/samsung/ump/common/ump_kernel_types.h \
  drivers/media/video/samsung/ump/common/ump_uk_types.h \
  drivers/media/video/samsung/ump/common/ump_uk_types.h \
  drivers/media/video/samsung/ump/common/ump_ukk.h \
  drivers/media/video/samsung/ump/common/ump_kernel_common.h \
  drivers/media/video/samsung/ump/common/ump_kernel_descriptor_mapping.h \
  drivers/media/video/samsung/ump/common/ump_kernel_memory_backend.h \

drivers/media/video/samsung/ump/common/ump_kernel_common.o: $(deps_drivers/media/video/samsung/ump/common/ump_kernel_common.o)

$(deps_drivers/media/video/samsung/ump/common/ump_kernel_common.o):
