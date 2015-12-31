cmd_/home/alex/work/source/Along_A33_Android/working/android/6051.Q0.1008.03.211301/ssv6xxx/smac/wapi_sms4.o := /home/alex/work/source/Along_A33_Android/working/android/../lichee/out/sun8iw5p1/android/common/buildroot/external-toolchain/bin/arm-linux-gnueabi-gcc -Wp,-MD,/home/alex/work/source/Along_A33_Android/working/android/6051.Q0.1008.03.211301/ssv6xxx/smac/.wapi_sms4.o.d  -nostdinc -isystem /home/alex/work/source/Along_A33_Android/working/lichee/out/sun8iw5p1/android/common/buildroot/external-toolchain/bin/../lib/gcc/arm-linux-gnueabi/4.6.3/include -I/home/alex/work/source/Along_A33_Android/working/lichee/linux-3.4/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /home/alex/work/source/Along_A33_Android/working/lichee/linux-3.4/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-sunxi/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -marm -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -g -pg -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCONFIG_SSV_SUPPORT_ANDROID -DCONFIG_SSV_SUPPORT_AES_ASM -DCONFIG_SSV_OPENFILE_LOADFW -DEXTERNAL_SSV6XXX_FW_NAME=\"/etc/firmware/ssv6051-sw.bin\" -DCONFIG_FW_ALIGNMENT_CHECK -DCONFIG_PLATFORM_SDIO_OUTPUT_TIMING=3 -DCONFIG_SSV_EXTERNAL_MAC -DEXTERNAL_MAC_INPUT_PATH=\"/data/wifimac.txt\" -DSSV_XTAL=24 -DSSV_VOLT_REGULATOR=0 -DSSV_INTERNAL_LDO=1 -DSSV_IPD -Werror -g -DCONFIG_SSV_CABRIO_E -DCONFIG_SSV6200_CLI_ENABLE -DCONFIG_SSV6XXX_DEBUGFS -DCONFIG_SSV_TX_LOWTHRESHOLD -DRATE_CONTROL_REALTIME_UPDATA -DCONFIG_SSV6200_HAS_RX_WORKQUEUE -DUSE_THREAD_RX -DUSE_THREAD_TX -DENABLE_AGGREGATE_IN_TIME -DENABLE_INCREMENTAL_AGGREGATION -DUSE_GENERIC_DECI_TBL -DUSE_LOCAL_CRYPTO -DUSE_LOCAL_WEP_CRYPTO -DUSE_LOCAL_TKIP_CRYPTO -DUSE_LOCAL_CCMP_CRYPTO -DUSE_LOCAL_SMS4_CRYPTO -DCONFIG_SSV_WAPI -DMULTI_THREAD_ENCRYPT -DFW_WSID_WATCH_LIST -DSSV6200_ECO -DHAS_CRYPTO_LOCK -DENABLE_TX_Q_FLOW_CONTROL -I/home/alex/work/source/Along_A33_Android/working/android/6051.Q0.1008.03.211301/ssv6xxx -I/home/alex/work/source/Along_A33_Android/working/android/6051.Q0.1008.03.211301/ssv6xxx/include  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(wapi_sms4)"  -D"KBUILD_MODNAME=KBUILD_STR(ssv6051)" -c -o /home/alex/work/source/Along_A33_Android/working/android/6051.Q0.1008.03.211301/ssv6xxx/smac/.tmp_wapi_sms4.o /home/alex/work/source/Along_A33_Android/working/android/6051.Q0.1008.03.211301/ssv6xxx/smac/wapi_sms4.c

source_/home/alex/work/source/Along_A33_Android/working/android/6051.Q0.1008.03.211301/ssv6xxx/smac/wapi_sms4.o := /home/alex/work/source/Along_A33_Android/working/android/6051.Q0.1008.03.211301/ssv6xxx/smac/wapi_sms4.c

deps_/home/alex/work/source/Along_A33_Android/working/android/6051.Q0.1008.03.211301/ssv6xxx/smac/wapi_sms4.o := \
  include/linux/kernel.h \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/compaction.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  include/linux/sysinfo.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/alex/work/source/Along_A33_Android/working/lichee/linux-3.4/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
  /home/alex/work/source/Along_A33_Android/working/lichee/linux-3.4/arch/arm/include/asm/posix_types.h \
  include/asm-generic/posix_types.h \
  /home/alex/work/source/Along_A33_Android/working/lichee/out/sun8iw5p1/android/common/buildroot/external-toolchain/bin/../lib/gcc/arm-linux-gnueabi/4.6.3/include/stdarg.h \
  include/linux/linkage.h \
  /home/alex/work/source/Along_A33_Android/working/lichee/linux-3.4/arch/arm/include/asm/linkage.h \
  include/linux/bitops.h \
  /home/alex/work/source/Along_A33_Android/working/lichee/linux-3.4/arch/arm/include/asm/bitops.h \
    $(wildcard include/config/smp.h) \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  include/linux/typecheck.h \
  /home/alex/work/source/Along_A33_Android/working/lichee/linux-3.4/arch/arm/include/asm/irqflags.h \
  /home/alex/work/source/Along_A33_Android/working/lichee/linux-3.4/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /home/alex/work/source/Along_A33_Android/working/lichee/linux-3.4/arch/arm/include/asm/hwcap.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/lock.h \
  include/asm-generic/bitops/le.h \
  /home/alex/work/source/Along_A33_Android/working/lichee/linux-3.4/arch/arm/include/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/linux/swab.h \
  /home/alex/work/source/Along_A33_Android/working/lichee/linux-3.4/arch/arm/include/asm/swab.h \
  include/linux/byteorder/generic.h \
  include/asm-generic/bitops/ext2-atomic-setbit.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/printk.h \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
  include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
  include/linux/dynamic_debug.h \
  /home/alex/work/source/Along_A33_Android/working/lichee/linux-3.4/arch/arm/include/asm/div64.h \
  /home/alex/work/source/Along_A33_Android/working/lichee/linux-3.4/arch/arm/include/asm/compiler.h \
  /home/alex/work/source/Along_A33_Android/working/lichee/linux-3.4/arch/arm/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/debug/bugverbose.h) \
    $(wildcard include/config/arm/lpae.h) \
  include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /home/alex/work/source/Along_A33_Android/working/lichee/linux-3.4/arch/arm/include/asm/string.h \

/home/alex/work/source/Along_A33_Android/working/android/6051.Q0.1008.03.211301/ssv6xxx/smac/wapi_sms4.o: $(deps_/home/alex/work/source/Along_A33_Android/working/android/6051.Q0.1008.03.211301/ssv6xxx/smac/wapi_sms4.o)

$(deps_/home/alex/work/source/Along_A33_Android/working/android/6051.Q0.1008.03.211301/ssv6xxx/smac/wapi_sms4.o):
