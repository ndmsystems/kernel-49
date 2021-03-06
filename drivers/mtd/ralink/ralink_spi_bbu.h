#ifndef __SPI_BBU_H__
#define __SPI_BBU_H__

#include <asm/rt2880/rt_mmap.h>

#define SPI_REG_CTL		(RALINK_SPI_BASE + 0x00)
#define SPI_REG_OPCODE		(RALINK_SPI_BASE + 0x04)
#define SPI_REG_DATA0		(RALINK_SPI_BASE + 0x08)
#define SPI_REG_DATA(x)		(SPI_REG_DATA0 + (x * 4))
#define SPI_REG_MASTER		(RALINK_SPI_BASE + 0x28)
#define SPI_REG_MOREBUF		(RALINK_SPI_BASE + 0x2c)
#define SPI_REG_Q_CTL		(RALINK_SPI_BASE + 0x30)
#define SPI_REG_SPACE_CR	(RALINK_SPI_BASE + 0x3c)

#define SPI_CTL_START		0x00000100
#define SPI_CTL_BUSY		0x00010000
#define SPI_CTL_TXCNT_MASK	0x0000000f
#define SPI_CTL_RXCNT_MASK	0x000000f0
#define SPI_CTL_TXRXCNT_MASK	0x000000ff
#define SPI_CTL_SIZE_MASK	0x00180000
#define SPI_CTL_ADDREXT_MASK	0xff000000

#define SPI_QCTL_FSADSZ_MASK	0x00000300

#define SPI_MBCTL_TXCNT_MASK	0x000001ff
#define SPI_MBCTL_RXCNT_MASK	0x001ff000
#define SPI_MBCTL_TXRXCNT_MASK	0x001ff1ff
#define SPI_MBCTL_CMD_MASK	0x3f000000

#define SPI_CTL_CLK_SEL_MASK	0x03000000

#endif
