cmd_sound/soc/codecs/mc1n2/mcdevprof.o := arm-eabi-gcc -Wp,-MD,sound/soc/codecs/mc1n2/.mcdevprof.o.d  -nostdinc -isystem /home/trip/android/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/../lib/gcc/arm-eabi/4.4.3/include -I/home/trip/samsung/tabplus/kernel/GT-P6200_HC_Opensource/GT-P6200_Kernel/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-s5pv310/include -Iarch/arm/plat-s5p/include -Iarch/arm/plat-samsung/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -marm -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(mcdevprof)"  -D"KBUILD_MODNAME=KBUILD_STR(snd_soc_mc1n2)"  -c -o sound/soc/codecs/mc1n2/.tmp_mcdevprof.o sound/soc/codecs/mc1n2/mcdevprof.c

deps_sound/soc/codecs/mc1n2/mcdevprof.o := \
  sound/soc/codecs/mc1n2/mcdevprof.c \
  sound/soc/codecs/mc1n2/mcdevprof.h \
  sound/soc/codecs/mc1n2/mctypedef.h \
  sound/soc/codecs/mc1n2/mcmachdep.h \

sound/soc/codecs/mc1n2/mcdevprof.o: $(deps_sound/soc/codecs/mc1n2/mcdevprof.o)

$(deps_sound/soc/codecs/mc1n2/mcdevprof.o):
