
obj-y := prom.o cmdline.o printf.o setup.o time.o

ifdef CONFIG_IRQ_GIC
obj-y += irq-gic.o
else
obj-y += irq.o
endif

obj-$(CONFIG_TC3262_CPU_TIMER) += hpt.o
obj-$(CONFIG_PCI) += pci_en75xx.o
obj-$(CONFIG_MIPS_CMP) += malta-amon.o

ifdef CONFIG_MIPS_MT_SMP
obj-$(CONFIG_MIPS_TC3262_34K) += malta-smp.o
endif

ifdef CONFIG_USB_XHCI_MTK
obj-y += dev-xhci.o uphy.o
endif

ifneq ($(strip \
	$(CONFIG_MT7615_WHNAT_SUPPORT) \
	$(CONFIG_MT7915_WHNAT_SUPPORT)),)
obj-y += dev-woe.o
endif
