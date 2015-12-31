# SSV6200 Kenrel Module TOP Directory

ifneq ($(KBUILD_EXTMOD),)
include $(KBUILD_EXTMOD)/config.mak
KBUILD_TOP := $(KBUILD_EXTMOD)
else
include config.mak
KBUILD_TOP := $(PWD)
endif

export KBUILD_TOP

MOD_DEF_H = include/ssv_mod_conf.h


###########################################################
# Kernel Modules to compile: 
# @ ssvdevice.ko
# @ ssv6200_sdio.ko
# @ ssv6200s_core.ko or ssv6200f_core.ko

KERNEL_MODULES := ssvdevice
KERNEL_MODULES += hci

ifneq ($(DRV_OPT), HUW_DRV)
KERNEL_MODULES += smac 
else
KERNEL_MODULES += hci_wrapper
endif


#KERNEL_MODULES += bridge
KERNEL_MODULES += hwif/sdio
#KERNEL_MODULES += ssv6200fmac

all: $(MOD_DEF_H)
	@for dir in $(KERNEL_MODULES) ; do \
	    echo "############################################"; \
	    echo "# Building Kernel Module: $$dir.ko" ; \
	    echo "############################################"; \
	    $(MAKE) -C $$dir KBUILD_DIR=$(PWD)/$$dir ; \
	    echo ""; \
	    echo ""; \
	done 

clean:
	@for dir in $(KERNEL_MODULES) ; do \
	    $(MAKE) -C $$dir clean KBUILD_DIR=$(PWD)/$$dir ; \
	done
	rm $(MOD_DEF_H)

install:
	echo "Removing /lib/modules/$(KVERSION)/$(DRVPATH) ..."
	@rm -rf /lib/modules/$(KVERSION)/$(DRVPATH)
	@for dir in $(KERNEL_MODULES) ; do \
	    $(MAKE) -C $$dir install KBUILD_DIR=$(PWD)/$$dir ; \
	done
	depmod -a


$(MOD_DEF_H): config.mak
	#@echo "#ifndef __SSV_MOD_CONF_H__" > $@
	#@echo "#define __SSV_MOD_CONF_H__" >> $@
	#for flag in $(ccflags-y_no_dash); do \
	#	if [ "$$flag" =~ ^D.* ]; then \
	#		echo "#define $$flag" | sed -e s/D//g >> $@; \
	#	fi; \
	#done
	#echo "#endif // __SSV_MOD_CONF_H__" >> $@
	env ccflags="$(ccflags-y)" ./genconf.sh $@
