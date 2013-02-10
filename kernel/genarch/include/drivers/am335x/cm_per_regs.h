/*
 * Copyright (c) 2013 Maurizio Lombardi
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * - The name of the author may not be used to endorse or promote products
 *   derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/** @addtogroup genarch
 * @{
 */
/**
 * @file
 * @brief Texas Instruments AM335x clock module registers.
 */

#ifndef _KERN_AM335X_CM_PER_REGS_H_
#define _KERN_AM335X_CM_PER_REGS_H_

typedef struct am335x_cm_per_regs {

	ioport32_t l4ls_clkstctrl;
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKTRCTRL_MASK  0x3
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKTRCTRL_SHIFT 0
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_L4LS_GCLK_FLAG (1 << 8)
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_UART_GFCLK_FLAG (1 << 10)
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_CAN_CLK_FLAG (1 << 11)
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER7_GCLK_FLAG (1 << 13)
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER2_GCLK_FLAG (1 << 14)
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER3_GCLK_FLAG (1 << 15)
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER4_GCLK_FLAG (1 << 16)
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_LCDC_GCLK_FLAG (1 << 17)
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_GPIO1_GDBCLK_FLAG (1 << 19)
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_GPIO2_GDBCLK_FLAG (1 << 20)
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_GPIO3_GDBCLK_FLAG (1 << 21)
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_I2C_FCLK_FLAG (1 << 24)
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_SPI_GCLK_FLAG (1 << 25)
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER5_GCLK_FLAG (1 << 27)
#define AM335x_CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER6_GCLK_FLAG (1 << 28)

	ioport32_t l3ls_clkstctrl;
#define AM335x_CM_PER_L3LS_CLKSTCTRL_CLKTRCTRL_MASK  0x3
#define AM335x_CM_PER_L3LS_CLKSTCTRL_CLKTRCTRL_SHIFT 0
#define AM335x_CM_PER_L3LS_CLKSTCTRL_CLKACTIVITY_L3S_GCLK_FLAG (1 << 3)

	ioport32_t l4fw_clkstctrl;
#define AM335x_CM_PER_L4FW_CLKSTCTRL_CLKTRCTRL_MASK  0x3
#define AM335x_CM_PER_L4FW_CLKSTCTRL_CLKTRCTRL_SHIFT 0
#define AM335x_CM_PER_L4FW_CLKSTCTRL_CLKACTIVITY_L3S_GCLK_FLAG (1 << 8)

	ioport32_t l3_clkstctrl;
#define AM335x_CM_PER_L3_CLKSTCTRL_CLKTRCTRL_MASK  0x3
#define AM335x_CM_PER_L3_CLKSTCTRL_CLKTRCTRL_SHIFT 0
#define AM335x_CM_PER_L3_CLKSTCTRL_CLKACTIVITY_EMIF_GCLK_FLAG (1 << 2)
#define AM335x_CM_PER_L3_CLKSTCTRL_CLKACTIVITY_MMC_FCLK_FLAG  (1 << 3)
#define AM335x_CM_PER_L3_CLKSTCTRL_CLKACTIVITY_L3_GCLK_FLAG   (1 << 4)
#define AM335x_CM_PER_L3_CLKSTCTRL_CLKACTIVITY_CPTS_RFT_GCLK_FLAG (1 << 6)
#define AM335x_CM_PER_L3_CLKSTCTRL_CLKACTIVITY_MCASP_GCLK_FLAG (1 << 7)

	ioport32_t const pad0;

	ioport32_t cpgmac0_clkctrl;
#define AM335x_CM_PER_CPGMAC0_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_CPGMAC0_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_CPGMAC0_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_CPGMAC0_CLKCTRL_IDLEST_SHIFT     16
#define AM335x_CM_PER_CPGMAC0_CLKCTRL_STBYST_FLAG      (1 << 18)

	ioport32_t lcdc_clkctrl;
#define AM335x_CM_PER_LCDC_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_LCDC_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_LCDC_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_LCDC_CLKCTRL_IDLEST_SHIFT     16
#define AM335x_CM_PER_LCDC_CLKCTRL_STBYST_FLAG      (1 << 18)

	ioport32_t usb0_clkctrl;
#define AM335x_CM_PER_USB0_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_USB0_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_USB0_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_USB0_CLKCTRL_IDLEST_SHIFT     16
#define AM335x_CM_PER_USB0_CLKCTRL_STBYST_FLAG      (1 << 18)

	ioport32_t const pad1;

	ioport32_t tptc0_clkctrl;
#define AM335x_CM_PER_TPTC0_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_TPTC0_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_TPTC0_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_TPTC0_CLKCTRL_IDLEST_SHIFT     16
#define AM335x_CM_PER_TPTC0_CLKCTRL_STBYST_FLAG      (1 << 18)

	ioport32_t emif_clkctrl;
#define AM335x_CM_PER_EMIF_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_EMIF_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_EMIF_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_EMIF_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t ocmcram_clkctrl;
#define AM335x_CM_PER_OCMCRAM_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_OCMCRAM_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_OCMCRAM_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_OCMCRAM_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t gpmc_clkctrl;
#define AM335x_CM_PER_GPMC_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_GPMC_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_GPMC_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_GPMC_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t mcasp0_clkctrl;
#define AM335x_CM_PER_MCASP0_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_MCASP0_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_MCASP0_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_MCASP0_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t uart5_clkctrl;
#define AM335x_CM_PER_UART5_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_UART5_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_UART5_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_UART5_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t mmc0_clkctrl;
#define AM335x_CM_PER_MMC0_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_MMC0_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_MMC0_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_MMC0_CLKCTRL_IDLEST_SHIFT     16

	ioport32_ elm_clkctrl;
#define AM335x_CM_PER_ELM_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_ELM_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_ELM_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_ELM_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t i2c2_clkctrl;
#define AM335x_CM_PER_I2C2_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_I2C2_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_I2C2_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_I2C2_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t i2c1_clkctrl;
#define AM335x_CM_PER_I2C1_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_I2C1_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_I2C1_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_I2C1_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t spi0_clkctrl;
#define AM335x_CM_PER_SPI0_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_SPI0_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_SPI0_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_SPI0_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t spi1_clkctrl;
#define AM335x_CM_PER_SPI1_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_SPI1_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_SPI1_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_SPI1_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t const pad2[3];

	ioport32_t l4ls_clkctrl;
#define AM335x_CM_PER_L4LS_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_L4LS_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_L4LS_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_L4LS_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t l4fw_clkctrl;
#define AM335x_CM_PER_L4FW_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_L4FW_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_L4FW_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_L4FW_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t mcasp1_clkctrl;
#define AM335x_CM_PER_MCASP1_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_MCASP1_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_MCASP1_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_MCASP1_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t uart1_clkctrl;
#define AM335x_CM_PER_UART1_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_UART1_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_UART1_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_UART1_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t uart2_clkctrl;
#define AM335x_CM_PER_UART2_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_UART2_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_UART2_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_UART2_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t uart3_clkctrl;
#define AM335x_CM_PER_UART3_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_UART3_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_UART3_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_UART3_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t uart4_clkctrl;
#define AM335x_CM_PER_UART4_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_UART4_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_UART4_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_UART4_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t timer7_clkctrl;
#define AM335x_CM_PER_TIMER7_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_TIMER7_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_TIMER7_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_TIMER7_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t timer2_clkctrl;
#define AM335x_CM_PER_TIMER2_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_TIMER2_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_TIMER2_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_TIMER2_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t timer3_clkctrl;
#define AM335x_CM_PER_TIMER3_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_TIMER3_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_TIMER3_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_TIMER3_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t timer4_clkctrl;
#define AM335x_CM_PER_TIMER4_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_TIMER4_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_TIMER4_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_TIMER4_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t const pad3[8];

	ioport32_t gpio1_clkctrl;
#define AM335x_CM_PER_GPIO1_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_GPIO1_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_GPIO1_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_GPIO1_CLKCTRL_IDLEST_SHIFT     16
#define AM335x_CM_PER_GPIO1_CLKCTRL_OPTFCLKEN_FLAG   (1 << 18)

	ioport32_t gpio2_clkctrl;
#define AM335x_CM_PER_GPIO2_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_GPIO2_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_GPIO2_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_GPIO2_CLKCTRL_IDLEST_SHIFT     16
#define AM335x_CM_PER_GPIO2_CLKCTRL_OPTFCLKEN_FLAG   (1 << 18)

	ioport32_t gpio3_clkctrl;
#define AM335x_CM_PER_GPIO3_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_GPIO3_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_GPIO3_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_GPIO3_CLKCTRL_IDLEST_SHIFT     16
#define AM335x_CM_PER_GPIO3_CLKCTRL_OPTFCLKEN_FLAG   (1 << 18)

	ioport32_t const pad4;

	ioport32_t tpcc_clkctrl;
#define AM335x_CM_PER_TPCC_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_TPCC_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_TPCC_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_TPCC_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t dcan0_clkctrl;
#define AM335x_CM_PER_DCAN0_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_DCAN0_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_DCAN0_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_DCAN0_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t dcan1_clkctrl;
#define AM335x_CM_PER_DCAN1_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_DCAN1_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_DCAN1_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_DCAN1_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t epwmss1_clkctrl;
#define AM335x_CM_PER_EPWMSS1_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_EPWMSS1_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_EPWMSS1_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_EPWMSS1_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t emiffw_clkctrl;
#define AM335x_CM_PER_EMIFFW_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_EMIFFW_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_EMIFFW_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_EMIFFW_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t epwmss0_clkctrl;
#define AM335x_CM_PER_EPWMSS0_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_EPWMSS0_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_EPWMSS0_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_EPWMSS0_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t epwmss2_clkctrl;
#define AM335x_CM_PER_EPWMSS2_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_EPWMSS2_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_EPWMSS2_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_EPWMSS2_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t l3instr_clkctrl;
#define AM335x_CM_PER_L3INSTR_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_L3INSTR_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_L3INSTR_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_L3INSTR_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t l3_clkctrl;
#define AM335x_CM_PER_L3_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_L3_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_L3_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_L3_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t ieee5000_clkctrl;
#define AM335x_CM_PER_IEEE5000_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_IEEE5000_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_IEEE5000_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_IEEE5000_CLKCTRL_IDLEST_SHIFT     16
#define AM335x_CM_PER_IEEE5000_CLKCTRL_STBYST_FLAG      (1 << 18)

	ioport32_t pruicss_clkctrl;
#define AM335x_CM_PER_PRUICSS_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_PRUICSS_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_PRUICSS_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_PRUICSS_CLKCTRL_IDLEST_SHIFT     16
#define AM335x_CM_PER_PRUICSS_CLKCTRL_STBYST_FLAG      (1 << 18)

	ioport32_t timer5_clkctrl;
#define AM335x_CM_PER_TIMER5_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_TIMER5_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_TIMER5_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_TIMER5_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t timer6_clkctrl;
#define AM335x_CM_PER_TIMER6_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_TIMER6_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_TIMER6_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_TIMER6_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t mmc1_clkctrl;
#define AM335x_CM_PER_MMC1_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_MMC1_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_MMC1_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_MMC1_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t mmc2_clkctrl;
#define AM335x_CM_PER_MMC2_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_MMC2_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_MMC2_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_MMC2_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t tptc1_clkctrl;
#define AM335x_CM_PER_TPTC1_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_TPTC1_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_TPTC1_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_TPTC1_CLKCTRL_IDLEST_SHIFT     16
#define AM335x_CM_PER_TPTC1_CLKCTRL_STBYST_FLAG      (1 << 18)

	ioport32_t tptc2_clkctrl;
#define AM335x_CM_PER_TPTC2_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_TPTC2_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_TPTC2_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_TPTC2_CLKCTRL_IDLEST_SHIFT     16
#define AM335x_CM_PER_TPTC2_CLKCTRL_STBYST_FLAG      (1 << 18)

	ioport32_t const pad5[2];

	ioport32_t spinlock_clkctrl;
#define AM335x_CM_PER_SPINLOCK_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_SPINLOCK_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_SPINLOCK_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_SPINLOCK_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t mailbox0_clkctrl;
#define AM335x_CM_PER_MAILBOX0_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_MAILBOX0_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_MAILBOX0_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_MAILBOX0_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t const pad6[2];

	ioport32_t l4hs_clkstctrl;
#define AM335x_CM_PER_L4HS_CLKSTCTRL_CLKTRCTRL_MASK     0x3
#define AM335x_CM_PER_L4HS_CLKSTCTRL_CLKTRCTRL_SHIFT    0
#define AM335x_CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_L4HS_FLAG        (1 << 3)
#define AM335x_CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_CPSW_250MHZ_FLAG (1 << 4)
#define AM335x_CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_CPSW_50MHZ_FLAG  (1 << 5)
#define AM335x_CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_CPSW_5MHZ_FLAG   (1 << 6)

	ioport32_t l4hs_clkctrl;
#define AM335x_CM_PER_L4HS_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_L4HS_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_L4HS_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_L4HS_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t const pad7[2];

	ioport32_t l3_clkstctrl;
#define AM335x_CM_PER_L3_CLKSTCTRL_CLKTRCTRL_MASK     0x3
#define AM335x_CM_PER_L3_CLKSTCTRL_CLKTRCTRL_SHIFT    0
#define AM335x_CM_PER_L3_CLKSTCTRL_CLKACTIVITY_OCPWP_L3_FLAG (1 << 4)
#define AM335x_CM_PER_L3_CLKSTCTRL_CLKACTIVITY_OCPWP_L4_FLAG (1 << 5)

	ioport32_t ocpwp_clkctrl;
#define AM335x_CM_PER_OCPWP_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_OCPWP_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_OCPWP_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_OCPWP_CLKCTRL_IDLEST_SHIFT     16
#define AM335x_CM_PER_OCPWP_CLKCTRL_STBYST_FLAG      (1 << 18)

	ioport32_t const pad8[3];

	ioport32_t pruicss_clkstctrl;
#define AM335x_CM_PER_PRUICSS_CLKSTCTRL_CLKTRCTRL_MASK     0x3
#define AM335x_CM_PER_PRUICSS_CLKSTCTRL_CLKTRCTRL_SHIFT    0
#define AM335x_CM_PER_PRUICSS_CLKSTCTRL_CLKACTIVITY_PRUICSS_OCP_FLAG  (1 << 4)
#define AM335x_CM_PER_PRUICSS_CLKSTCTRL_CLKACTIVITY_PRUICSS_IEP_FLAG  (1 << 5)
#define AM335x_CM_PER_PRUICSS_CLKSTCTRL_CLKACTIVITY_PRUICSS_UART_FLAG (1 << 5)

	ioport32_t cpsw_clkstctrl;
#define AM335x_CM_PER_CPSW_CLKSTCTRL_CLKTRCTRL_MASK     0x3
#define AM335x_CM_PER_CPSW_CLKSTCTRL_CLKTRCTRL_SHIFT    0
#define AM335x_CM_PER_CPSW_CLKSTCTRL_CLKACTIVITY_CPSW_125MHZ_FLAG  (1 << 4)

	ioport32_t lcdc_clkstctrl;
#define AM335x_CM_PER_LCDC_CLKSTCTRL_CLKTRCTRL_MASK     0x3
#define AM335x_CM_PER_LCDC_CLKSTCTRL_CLKTRCTRL_SHIFT    0
#define AM335x_CM_PER_LCDC_CLKSTCTRL_CLKACTIVITY_LCDC_L3_OCP_FLAG  (1 << 4)
#define AM335x_CM_PER_LCDC_CLKSTCTRL_CLKACTIVITY_LCDC_L4_OCP_FLAG  (1 << 5)

	ioport32_t clkdiv32_clkctrl;
#define AM335x_CM_PER_CLKDIV32_CLKCTRL_MODULEMODE_MASK  0x3
#define AM335x_CM_PER_CLKDIV32_CLKCTRL_MODULEMODE_SHIFT 0
#define AM335x_CM_PER_CLKDIV32_CLKCTRL_IDLEST_MASK      (0x3 << 16)
#define AM335x_CM_PER_CLKDIV32_CLKCTRL_IDLEST_SHIFT     16

	ioport32_t clk24mhz_clkstctrl;
#define AM335x_CM_PER_CLK24MHZ_CLKSTCTRL_CLKTRCTRL_MASK     0x3
#define AM335x_CM_PER_CLK24MHZ_CLKSTCTRL_CLKTRCTRL_SHIFT    0
#define AM335x_CM_PER_CLK24MHZ_CLKSTCTRL_CLKACTIVITY_CLK24MHZ_FLAG  (1 << 4)

} am335x_cm_per_regs_t;

#endif

/**
 * @}
 */
