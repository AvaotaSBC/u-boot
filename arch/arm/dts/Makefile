# SPDX-License-Identifier: GPL-2.0+

dtb-$(CONFIG_ARCH_SUNXI) += \
	sun55iw3p1-soc-system.dtb

targets += $(dtb-y)

# Add any required device tree compiler flags here
DTC_FLAGS +=

PHONY += dtbs
dtbs: $(addprefix $(obj)/, $(dtb-y))
	@:

clean-files := *.dtb
