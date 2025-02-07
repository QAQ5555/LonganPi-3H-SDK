// SPDX-License-Identifier: (GPL-2.0+ or MIT)
/* Copyright(c) 2020 - 2023 Allwinner Technology Co.,Ltd. All rights reserved. */
/*
 * Copyright (C) 2023 rengaomin@allwinnertech.com
 */

#ifndef _DT_BINDINGS_CLK_SUN65IW1_H_
#define _DT_BINDINGS_CLK_SUN65IW1_H_

#define CLK_PLL_PERI0_PARENT	0
#define CLK_PLL_PERI0_2X	1
#define CLK_PLL_PERI0_DIV3	2
#define CLK_PLL_PERI0_800M	3
#define CLK_PLL_PERI0_480M	4
#define CLK_PLL_PERI0_600M	5
#define CLK_PLL_PERI0_400M	6
#define CLK_PLL_PERI0_300M	7
#define CLK_PLL_PERI0_200M	8
#define CLK_PLL_PERI0_160M	9
#define CLK_PLL_PERI0_16M	10
#define CLK_PLL_PERI0_150M	11
#define CLK_PLL_PERI1_PARENT	12
#define CLK_PLL_PERI1_2X	13
#define CLK_PLL_PERI1_800M	14
#define CLK_PLL_PERI1_480M	15
#define CLK_PLL_PERI1_600M	16
#define CLK_PLL_PERI1_400M	17
#define CLK_PLL_PERI1_300M	18
#define CLK_PLL_PERI1_200M	19
#define CLK_PLL_PERI1_160M	20
#define CLK_PLL_PERI1_150M	21
#define CLK_PLL_OUTP		22
#define CLK_PLL_GPU		23
#define CLK_PLL_VIDEO0_PARENT	24
#define CLK_PLL_VIDEO0_4X	25
#define CLK_PLL_VIDEO0_3X	26
#define CLK_PLL_VIDEO1_PARENT	27
#define CLK_PLL_VIDEO1_4X	28
#define CLK_PLL_VIDEO1_3X	29
#define CLK_PLL_VIDEO2_PARENT	30
#define CLK_PLL_VIDEO2_4X	31
#define CLK_PLL_VIDEO2_3X	32
#define CLK_PLL_VE		33
#define CLK_AHB			34
#define CLK_APB0		35
#define CLK_APB1		36
#define CLK_APB_UART		37
#define CLK_CCI			38
#define CLK_GIC			39
#define CLK_NSI			40
#define CLK_NSI_CFG		41
#define CLK_MBUS		42
#define CLK_APB_IOMMU		43
#define CLK_STBY_PERI0PLL_CLK_GATE	44
#define CLK_AHB_SMHC2_GATE	45
#define CLK_AHB_SMHC1_GATE	46
#define CLK_AHB_SMHC0_GATE	47
#define CLK_AHB_HSI_GATE	48
#define CLK_AHB_USB1_GATE	49
#define CLK_AHB_USB0_GATE	50
#define CLK_AHB_SECURE_SYS_GATE	51
#define CLK_AHB_GPU_GATE	52
#define CLK_AHB_VIDEO_OUT1_GATE	53
#define CLK_AHB_VIDEO_OUT0_GATE	54
#define CLK_AHB_VIDEO_IN_GATE	55
#define CLK_AHB_VE0_GATE	56
#define CLK_MBUS_DMAC0_GATE	57
#define CLK_GMAC0_AXI_GATE	58
#define CLK_CE_SYS_AXI_GATE	59
#define CLK_GPU_AXI_GATE	60
#define CLK_MBUS_DE_SYS_GATE	61
#define CLK_MBUS_VIDEO_OUT0_GATE	62
#define CLK_MBUS_VIDEO_IN_GATE	63
#define CLK_MBUS_VE0_GATE	64
#define CLK_AHB_DMA		65
#define CLK_AHB_SPINLOCK	66
#define CLK_AHB_MSGBOX_CPUX	67
#define CLK_AHB_MSGBOX_CPUS	68
#define CLK_APB_PWM0		69
#define CLK_DCU			70
#define CLK_AHB_DAP		71
#define CLK_TIMER0		72
#define CLK_TIMER1		73
#define CLK_TIMER2		74
#define CLK_TIMER3		75
#define CLK_AHB_TIMER		76
#define CLK_DE			77
#define CLK_AHB_DE0		78
#define CLK_G2D			79
#define CLK_AHB_G2D		80
#define CLK_EINK_PANEL		81
#define CLK_AHB_EINK		82
#define CLK_VE0			83
#define CLK_AHB_VE0		84
#define CLK_CE_SYS		85
#define CLK_AHB_GPU		86
#define CLK_AHB_MEMC		87
#define CLK_SMHC0		88
#define CLK_BUS_SMHC0		89
#define CLK_SMHC1		90
#define CLK_BUS_SMHC1		91
#define CLK_SMHC2		92
#define CLK_BUS_SMHC2		93
#define CLK_BUS_UART0		94
#define CLK_BUS_UART1		95
#define CLK_BUS_UART2		96
#define CLK_BUS_UART3		97
#define CLK_BUS_UART4		98
#define CLK_BUS_UART5		99
#define CLK_BUS_UART6		100
#define CLK_BUS_UART7		101
#define CLK_BUS_TWI0		102
#define CLK_BUS_TWI1		103
#define CLK_BUS_TWI2		104
#define CLK_BUS_TWI3		105
#define CLK_BUS_TWI4		106
#define CLK_BUS_TWI5		107
#define CLK_SPI0		108
#define CLK_AHB_SPI0		109
#define CLK_SPI1		110
#define CLK_AHB_SPI1		111
#define CLK_SPI2		112
#define CLK_AHB_SPI2		113
#define CLK_GPADC0		114
#define CLK_APB_GPADC0		115
#define CLK_APB_TSENSOR		116
#define CLK_IRRX0		117
#define CLK_APB_IRRX0		118
#define CLK_IRTX		119
#define CLK_APB_IRTX		120
#define CLK_I2S0		121
#define CLK_APB_I2S0		122
#define CLK_I2S1		123
#define CLK_APB_I2S1		124
#define CLK_I2S2		125
#define CLK_APB_I2S2		126
#define CLK_I2S3		127
#define CLK_I2S3_ASRC		128
#define CLK_APB_I2S3		129
#define CLK_OWA0_TX		130
#define CLK_OWA0_RX		131
#define CLK_APB_OWA0		132
#define CLK_DMIC		133
#define CLK_APB_DMIC		134
#define CLK_ADDA_DAC		135
#define CLK_ADDA_ADC		136
#define CLK_APB_ADDA		137
#define CLK_USB			138
#define CLK_USB0_DEV		139
#define CLK_USB0_EHCI		140
#define CLK_USB0_OHCI		141
#define CLK_BUS_USB		142
#define CLK_USB1_EHCI		143
#define CLK_USB1_OHCI		144
#define CLK_USB0_USB1_PHY_REF	145
#define CLK_AHB_USB0_USB1	146
#define CLK_USB2_U2_PHY_REF	147
#define CLK_USB2_SUSPEND	148
#define CLK_USB2_REF		149
#define CLK_USB2_U3_ONLY_UTMI	150
#define CLK_USB2_U2_ONLY_PIPE	151
#define CLK_PCIE0_AUX		152
#define CLK_PCIE0_AXI_S		153
#define CLK_HSI_PHY_CFG		154
#define CLK_HSI_PHY_REF		155
#define CLK_HSI_SYS		156
#define CLK_HSI_AXI		157
#define CLK_GMAC0_PHY		158
#define CLK_AHB_GMAC0		159
#define CLK_DSI0		160
#define CLK_AHB_DSI		161
#define CLK_TCON_TV0		162
#define CLK_EDP			163
#define CLK_AHB_VO0		164
#define CLK_AHB_VO1		165
#define CLK_LEDC		166
#define CLK_APB_LEDC		167
#define CLK_CSI_MASTER0		168
#define CLK_CSI_MASTER1		169
#define CLK_CSI_MASTER2		170
#define CLK_CSI_MASTER3		171
#define CLK_CSI			172
#define CLK_ISP			173
#define CLK_VIDEO_IN		174

#define CLK_MAX_NO		(CLK_VIDEO_IN + 1)

#endif /* _DT_BINDINGS_CLK_SUN65IW1_H_ */
