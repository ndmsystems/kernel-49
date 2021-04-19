/**************************************************************************
 *
 *  BRIEF MODULE DESCRIPTION
 *     register definition for Ralink RT-series SoC
 *
 *  Copyright 2007 Ralink Inc.
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 *  THIS  SOFTWARE  IS PROVIDED   ``AS  IS'' AND   ANY  EXPRESS OR IMPLIED
 *  WARRANTIES,   INCLUDING, BUT NOT  LIMITED  TO, THE IMPLIED WARRANTIES OF
 *  MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN
 *  NO  EVENT  SHALL   THE AUTHOR  BE    LIABLE FOR ANY   DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 *  NOT LIMITED   TO, PROCUREMENT OF  SUBSTITUTE GOODS  OR SERVICES; LOSS OF
 *  USE, DATA,  OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 *  ANY THEORY OF LIABILITY, WHETHER IN  CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 *  THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *  You should have received a copy of the  GNU General Public License along
 *  with this program; if not, write  to the Free Software Foundation, Inc.,
 *  675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *
 **************************************************************************
 */

#ifndef __ASM_MACH_MIPS_RT2880_RT_MMAP_H
#define __ASM_MACH_MIPS_RT2880_RT_MMAP_H

#define PHYS_TO_K1(physaddr)		KSEG1ADDR(physaddr)
#define sysRegRead(phys)		(*(volatile unsigned int *)PHYS_TO_K1(phys))
#define sysRegWrite(phys, val)		((*(volatile unsigned int *)PHYS_TO_K1(phys)) = (val))

#if defined(CONFIG_RALINK_MT7621)

#define RALINK_SYSCTL_BASE		0xBE000000
#define RALINK_TIMER_BASE		0xBE000100
#define RALINK_INTCL_BASE		0xBE000200
#define RALINK_RBUS_MATRIXCTL_BASE	0xBE000400
#define RALINK_MIPS_CNT_BASE		0x1E000500
#define RALINK_PIO_BASE			0xBE000600
#define RALINK_SPDIF_BASE		0xBE000700
#define RALINK_I2C_BASE			0xBE000900
#define RALINK_I2S_BASE			0xBE000A00
#define RALINK_SPI_BASE			0xBE000B00
#define RALINK_UART_LITE1_BASE		0x1E000C00
#define RALINK_UART_LITE_BASE		RALINK_UART_LITE1_BASE
#define RALINK_UART_LITE2_BASE		0x1E000D00
#define RALINK_UART_BASE		RALINK_UART_LITE2_BASE
#define RALINK_UART_LITE3_BASE		0x1E000E00
#define RALINK_ANA_CTRL_BASE		0xBE000F00
#define RALINK_PCM_BASE			0xBE002000
#define RALINK_GDMA_BASE		0xBE002800
#define RALINK_NAND_CTRL_BASE		0xBE003000
#define RALINK_NANDECC_CTRL_BASE	0xBE003800
#define RALINK_CRYPTO_ENGINE_BASE	0xBE004000
#define RALINK_MEMCTRL_BASE		0xBE005000
#define RALINK_EXT_MC_ARB_BASE		0xBE006000
#define RALINK_HS_DMA_BASE		0xBE007000
#define RALINK_FRAME_ENGINE_BASE	0xBE100000
#define RALINK_PPE_BASE			0xBE100C00
#define RALINK_ETH_SW_BASE		0xBE110000
#define RALINK_ROM_BASE			0xBE118000
#define RALINK_MSDC_BASE		0xBE130000
#define RALINK_PCI_BASE			0xBE140000
#define RALINK_USB_HOST_BASE		0x1E1C0000
#define RALINK_USB_HOST_SIZE		0x00004000
#define RALINK_USB_IPPC_BASE		0x1E1D0700
#define RALINK_XHCI_HOST_BASE		0xBE1C0000
#define RALINK_XHCI_UPHY_BASE		0xBE1D0000
#define RALINK_11N_MAC_BASE		0xBE180000 // Unused

#define RALINK_MCNT_CFG			0xBE000500
#define RALINK_COMPARE			0xBE000504
#define RALINK_COUNT			0xBE000508

// GIC
#define RALINK_GIC_BASE			0x1FBC0000
#define RALINK_GIC_ADDRSPACE_SZ		0x20000

// CPC
#define RALINK_CPC_BASE			0x1FBF0000
#define RALINK_CPC_ADDRSPACE_SZ		0x8000

// GCMP
#define RALINK_GCMP_BASE		0x1FBF8000
#define RALINK_GCMP_ADDRSPACE_SZ	0x8000

// CM
#define CM_GCR_REG0_BASE_VALUE		0x1C000000	/* CM region 0 base address (Palmbus) */
#define CM_GCR_REG0_MASK_VALUE		0x0000FC00	/* CM region 0 mask (64M) */

#define CM_GCR_REG1_BASE_VALUE		0x60000000	/* CM region 1 base address (PCIe) */
#define CM_GCR_REG1_MASK_VALUE		0x0000F000	/* CM region 1 mask (256M) */

// Interrupt Controller
#define RALINK_INTCTL_FE		(1<<3)
#define RALINK_INTCTL_PCIE0		(1<<4)
#define RALINK_INTCTL_SYSCTL		(1<<6)
#define RALINK_INTCTL_I2C		(1<<8)
#define RALINK_INTCTL_DRAMC		(1<<9)
#define RALINK_INTCTL_PCM		(1<<10)
#define RALINK_INTCTL_HSDMA		(1<<11)
#define RALINK_INTCTL_PIO		(1<<12)
#define RALINK_INTCTL_DMA		(1<<13)
#define RALINK_INTCTL_NFI		(1<<14)
#define RALINK_INTCTL_NFIECC		(1<<15)
#define RALINK_INTCTL_I2S		(1<<16)
#define RALINK_INTCTL_SPI		(1<<17)
#define RALINK_INTCTL_SPDIF		(1<<18)
#define RALINK_INTCTL_CRYPTO		(1<<19)
#define RALINK_INTCTL_SDXC		(1<<20)
#define RALINK_INTCTL_PCTRL		(1<<21)
#define RALINK_INTCTL_USB		(1<<22)
#define RALINK_INTCTL_ESW		(1<<23)
#define RALINK_INTCTL_PCIE1		(1<<24)
#define RALINK_INTCTL_PCIE2		(1<<25)
#define RALINK_INTCTL_UART1		(1<<26)
#define RALINK_INTCTL_UART2		(1<<27)
#define RALINK_INTCTL_UART3		(1<<28)
#define RALINK_INTCTL_WDTIMER		(1<<29)
#define RALINK_INTCTL_TIMER0		(1<<30)
#define RALINK_INTCTL_TIMER1		(1<<31)

// Reset Control Register
#define RALINK_SYS_RST			(1<<0)
#define RALINK_MCM_RST			(1<<2)
#define RALINK_HSDMA_RST		(1<<5)
#define RALINK_FE_RST			(1<<6)
#define RALINK_SPDIF_RST		(1<<7)
#define RALINK_TIMER_RST		(1<<8)
#define RALINK_INTC_RST			(1<<9)
#define RALINK_MC_RST			(1<<10)
#define RALINK_PCM_RST			(1<<11)
#define RALINK_PIO_RST			(1<<13)
#define RALINK_DMA_RST			(1<<14)
#define RALINK_NAND_RST			(1<<15)
#define RALINK_I2C_RST			(1<<16)
#define RALINK_I2S_RST			(1<<17)
#define RALINK_SPI_RST			(1<<18)
#define RALINK_UART1_RST		(1<<19)
#define RALINK_UART2_RST		(1<<20)
#define RALINK_UART3_RST		(1<<21)
#define RALINK_ETH_RST			(1<<23)
#define RALINK_PCIE0_RST		(1<<24)
#define RALINK_PCIE1_RST		(1<<25)
#define RALINK_PCIE2_RST		(1<<26)
#define RALINK_AUX_STCK_RST		(1<<28)
#define RALINK_CRYPTO_RST		(1<<29)
#define RALINK_SDXC_RST			(1<<30)
#define RALINK_PPE_RST			(1<<31)

// Clock Conf Register
#define RALINK_SPDIF_CLK_EN		(1<<7)
#define RALINK_PCM_CLK_EN		(1<<11)
#define RALINK_NAND_CLK_EN		(1<<15)
#define RALINK_I2S_CLK_EN		(1<<17)
#define RALINK_PCIE0_CLK_EN		(1<<24)
#define RALINK_PCIE1_CLK_EN		(1<<25)
#define RALINK_PCIE2_CLK_EN		(1<<26)
#define RALINK_CRYPTO_CLK_EN		(1<<29)
#define RALINK_SDXC_CLK_EN		(1<<30)

// CPU PLL CFG Register
#define CPLL_SW_CONFIG			(0x1UL << 31)
#define CPLL_MULT_RATIO_SHIFT		16
#define CPLL_MULT_RATIO			(0x7UL << CPLL_MULT_RATIO_SHIFT)
#define CPLL_DIV_RATIO_SHIFT		10
#define CPLL_DIV_RATIO			(0x3UL << CPLL_DIV_RATIO_SHIFT)
#define BASE_CLOCK			50      /* Mhz */

#define RALINK_TESTSTAT			0xBE000018
#define RALINK_TESTSTAT2		0xBE00001C

#elif defined(CONFIG_RALINK_MT7628)

#define RALINK_SYSCTL_BASE		0xB0000000
#define RALINK_TIMER_BASE		0xB0000100
#define RALINK_INTCL_BASE		0xB0000200
#define RALINK_MEMCTRL_BASE		0xB0000300
#define RALINK_RBUS_MATRIXCTL_BASE	0xB0000400
#define RALINK_MIPS_CNT_BASE		0x10000500
#define RALINK_PIO_BASE			0xB0000600
#define RALINK_SPI_SLAVE_BASE		0xB0000700
#define RALINK_I2C_BASE			0xB0000900
#define RALINK_I2S_BASE			0xB0000A00
#define RALINK_SPI_BASE			0xB0000B00
#define RALINK_UART_LITE1_BASE		0x10000C00
#define RALINK_UART_LITE_BASE		RALINK_UART_LITE1_BASE
#define RALINK_UART_LITE2_BASE		0x10000D00
#define RALINK_UART_BASE		RALINK_UART_LITE2_BASE
#define RALINK_UART_LITE3_BASE		0x10000E00
#define RALINK_PCM_BASE			0xB0002000
#define RALINK_GDMA_BASE		0xB0002800
#define RALINK_AES_ENGINE_BASE		0xB0004000
#define RALINK_FRAME_ENGINE_BASE	0xB0100000
#define RALINK_ETH_SW_BASE		0xB0110000
#define RALINK_USB_DEV_BASE		0xB0120000
#define RALINK_MSDC_BASE		0xB0130000
#define RALINK_PCI_BASE			0xB0140000
#define RALINK_11N_MAC_BASE		0xB0180000
#define RALINK_USB_HOST_BASE		0x101C0000

#define RALINK_CPU_CLK_AUTO_CFG		0xB0000444
#define RALINK_MCNT_CFG			0xB0000500
#define RALINK_COMPARE			0xB0000504
#define RALINK_COUNT			0xB0000508

// Interrupt Controller
#define RALINK_INTCTL_SYSCTL		(1<<0)
#define RALINK_INTCTL_TIMER0		(1<<1)
#define RALINK_INTCTL_WDTIMER		(1<<2)
#define RALINK_INTCTL_ILL_ACCESS	(1<<3)
#define RALINK_INTCTL_PCM		(1<<4)
#define RALINK_INTCTL_UART		(1<<5)
#define RALINK_INTCTL_PIO		(1<<6)
#define RALINK_INTCTL_DMA		(1<<7)
#define RALINK_INTCTL_PC		(1<<9)
#define RALINK_INTCTL_I2S		(1<<10)
#define RALINK_INTCTL_SPI		(1<<11)
#define RALINK_INTCTL_UARTLITE		(1<<12)
#define RALINK_INTCTL_CRYPTO		(1<<13)
#define RALINK_INTCTL_SDXC		(1<<14)
#define RALINK_INTCTL_ESW		(1<<17)
#define RALINK_INTCTL_UHST		(1<<18)
#define RALINK_INTCTL_UDEV		(1<<19)
#define RALINK_INTCTL_GLOBAL		(1<<31)

// Reset Control Register
#define RALINK_SYS_RST			(1<<0)
#define RALINK_TIMER_RST		(1<<8)
#define RALINK_INTC_RST			(1<<9)
#define RALINK_MC_RST			(1<<10)
#define RALINK_PCM_RST			(1<<11)
#define RALINK_UART_RST			(1<<12)
#define RALINK_PIO_RST			(1<<13)
#define RALINK_DMA_RST			(1<<14)
#define RALINK_I2C_RST			(1<<16)
#define RALINK_I2S_RST			(1<<17)
#define RALINK_SPI_RST			(1<<18)
#define RALINK_UARTL_RST		(1<<19)
#define RALINK_FE_RST			(1<<21)
#define RALINK_UHST_RST			(1<<22)
#define RALINK_ESW_RST			(1<<23)
#define RALINK_EPHY_RST			(1<<24)
#define RALINK_UDEV_RST			(1<<25)
#define RALINK_PCIE0_RST		(1<<26)
#define RALINK_PCIE1_RST		(1<<27)
#define RALINK_MIPS_CNT_RST		(1<<28)
#define RALINK_CRYPTO_RST		(1<<29)
#define RALINK_SDXC_RST			(1<<30)

// Clock Conf Register
#define RALINK_PCM_CLK_EN		(1<<11)
#define RALINK_I2S_CLK_EN		(1<<17)
#define RALINK_UPHY0_CLK_EN		(1<<25)
#define RALINK_UPHY1_CLK_EN		(1<<22)
#define RALINK_PCIE0_CLK_EN		(1<<26)
#define RALINK_PCIE1_CLK_EN		(1<<27)
#define RALINK_CRYPTO_CLK_EN		(1<<29)
#define RALINK_SDXC_CLK_EN		(1<<30)

// CPU PLL CFG Register
#define CPLL_SW_CONFIG			(0x1UL << 31)
#define CPLL_MULT_RATIO_SHIFT		16
#define CPLL_MULT_RATIO			(0x7UL << CPLL_MULT_RATIO_SHIFT)
#define CPLL_DIV_RATIO_SHIFT		10
#define CPLL_DIV_RATIO			(0x3UL << CPLL_DIV_RATIO_SHIFT)
#define BASE_CLOCK			40	/* Mhz */

// AGPIO
#define MT7628_P0_EPHY_AIO_EN		(0x1<<16)
#define MT7628_P1_EPHY_AIO_EN		(0x1<<17)
#define MT7628_P2_EPHY_AIO_EN		(0x1<<18)
#define MT7628_P3_EPHY_AIO_EN		(0x1<<19)
#define MT7628_P4_EPHY_AIO_EN		(0x1<<20)

#elif defined(CONFIG_ECONET_EN75XX_MP)

#define RALINK_SYSCTL_BASE		0xBFB00000
#define RALINK_TIMER_BASE		0xBFBF0100
#define RALINK_MEMCTRL_BASE		0xBFB20000
#define RALINK_PIO_BASE			0xBFBF0200
#define RALINK_I2C_BASE			0xBFBF8000
#define RALINK_UART_LITE_BASE		0xBFBF0000
#define RALINK_UART_LITE2_BASE		0xBFBF0300
#define RALINK_PCM_BASE			0xBFBD0000
#define RALINK_GDMA_BASE		0xBFB30000
#define RALINK_FRAME_ENGINE_BASE	0xBFB50000
#define RALINK_ETH_SW_BASE		0xBFB58000
#define RALINK_CRYPTO_ENGINE_BASE	0xBFB70000
#define RALINK_PCI_BASE			0xBFB80000
#define RALINK_PCI_PHY0_BASE		0xBFAF2000
#define RALINK_PCI_PHY1_BASE		0xBFAC0000
#define RALINK_USB_HOST_BASE		0x1FB90000
#define RALINK_XHCI_HOST_BASE		0xBFB90000
#define RALINK_XHCI_UPHY_BASE		0xBFA80000
#define RALINK_SFC_BASE			0xBFA10000
#define RALINK_CHIP_SCU_BASE		0xBFA20000
#define RALINK_11N_MAC_BASE		0xBFB00000 // Unused

#if defined(CONFIG_ECONET_EN7528)
#define RALINK_USB_HOST_SIZE		0x00003E00
#define RALINK_USB_IPPC_BASE		0x1FB93E00
#else
#define RALINK_USB_HOST_SIZE		0x00004000
#define RALINK_USB_IPPC_BASE		0x1FA80700
#endif

#ifdef CONFIG_MIPS_TC3262_1004K
/* GIC */
#define RALINK_GIC_BASE			0x1F8C0000
#define RALINK_GIC_ADDRSPACE_SZ		0x20000

/* CPC */
#define RALINK_CPC_BASE			0x1F8E8000
#define RALINK_CPC_ADDRSPACE_SZ		0x8000

/* GCMP */
#define RALINK_GCMP_BASE		0x1F8E0000
#define RALINK_GCMP_ADDRSPACE_SZ	0x8000

/* CM */
#define CM_GCR_REG0_BASE_VALUE		0x1C000000	/* CM region 0 base address (Palmbus) */
#define CM_GCR_REG0_MASK_VALUE		0x0000FC00	/* CM region 0 mask (64M) */

#define CM_GCR_REG1_BASE_VALUE		0x20000000	/* CM region 1 base address (PCIe) */
#define CM_GCR_REG1_MASK_VALUE		0x0000F000	/* CM region 1 mask (256M) */
#else
/* Interrupt Controller */
#define RALINK_INTCL_BASE		0xBFB40000
#define RALINK_INTCTL_UARTLITE		(1<<0)
#define RALINK_INTCTL_PIO		(1<<10)
#define RALINK_INTCTL_PCM		(1<<11)
#define RALINK_INTCTL_DMA		(1<<14)
#define RALINK_INTCTL_GSW		(1<<15)
#define RALINK_INTCTL_UHST		(1<<17)
#define RALINK_INTCTL_FE		(1<<21)
#define RALINK_INTCTL_QDMA		(1<<22)
#define RALINK_INTCTL_PCIE0		(1<<23)
#define RALINK_INTCTL_PCIE1		(1<<24)

/* Reset Control Register */
#define RALINK_INTC_RST			(1<<9)
#endif

/* Reset Control Register */
#define RALINK_I2S1_RST			(1<<0)
#define RALINK_FE_QDMA_LAN_RST		(1<<1)
#define RALINK_FE_QDMA_WAN_RST		(1<<2)
#define RALINK_PCM2_RST			(1<<4)
#define RALINK_PTM_MAC_RST		(1<<5)
#define RALINK_CRYPTO_RST		(1<<6)
#define RALINK_SAR_RST			(1<<7)
#define RALINK_TIMER_RST		(1<<8)
#define RALINK_BONDING_RST		(1<<10)
#define RALINK_PCM1_RST			(1<<11)
#define RALINK_UART_RST			(1<<12)
#define RALINK_PIO_RST			(1<<13)
#define RALINK_DMA_RST			(1<<14)
#define RALINK_I2C_RST			(1<<16)
#define RALINK_I2S2_RST			(1<<17)
#define RALINK_SPI_RST			(1<<18)
#define RALINK_UARTL_RST		(1<<19)
#define RALINK_FE_RST			(1<<21)
#define RALINK_UHST_RST			(1<<22)
#define RALINK_ESW_RST			(1<<23)
#define RALINK_SFC2_RST			(1<<25)
#define RALINK_PCIE0_RST		(1<<26)
#define RALINK_PCIE1_RST		(1<<27)
#define RALINK_PCIEHB_RST		(1<<29)

#else
#error "Ralink chip undefined for MEM map"
#endif

#endif
