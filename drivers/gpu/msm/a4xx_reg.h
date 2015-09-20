/* Copyright (c) 2013-2014, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _A4XX_REG_H
#define _A4XX_REG_H

/* A4XX interrupt bits */
#define A4XX_INT_RBBM_GPU_IDLE			0
#define A4XX_INT_RBBM_AHB_ERROR			1
#define A4XX_INT_RBBM_REG_TIMEOUT		2
#define A4XX_INT_RBBM_ME_MS_TIMEOUT		3
#define A4XX_INT_RBBM_PFP_MS_TIMEOUT		4
#define A4XX_INT_RBBM_ETS_MS_TIMEOUT		5
#define A4XX_INT_RBBM_ASYNC_OVERFLOW		6
#define A4XX_INT_RBBM_GPC_ERR			7
#define A4XX_INT_CP_SW				8
#define A4XX_INT_CP_OPCODE_ERROR		9
#define A4XX_INT_CP_RESERVED_BIT_ERROR		10
#define A4XX_INT_CP_HW_FAULT			11
#define A4XX_INT_CP_DMA				12
#define A4XX_INT_CP_IB2_INT			13
#define A4XX_INT_CP_IB1_INT			14
#define A4XX_INT_CP_RB_INT			15
#define A4XX_INT_CP_REG_PROTECT_FAULT		16
#define A4XX_INT_CP_RB_DONE_TS			17
#define A4XX_INT_CP_VS_DONE_TS			18
#define A4XX_INT_CP_PS_DONE_TS			19
#define A4XX_INT_CACHE_FLUSH_TS			20
#define A4XX_INT_CP_AHB_ERROR_HALT		21
#define A4XX_INT_RBBM_ATB_BUS_OVERFLOW		22
#define A4XX_INT_MISC_HANG_DETECT		24
#define A4XX_INT_UCHE_OOB_ACCESS		25
#define A4XX_INT_RBBM_DPM_CALC_ERR		28
#define A4XX_INT_RBBM_DPM_EPOCH_ERR		29
#define A4XX_INT_RBBM_DPM_THERMAL_YELLOW_ERR	30
#define A4XX_INT_RBBM_DPM_THERMAL_RED_ERR	31

/* RB registers */
#define A4XX_RB_GMEM_BASE_ADDR		0xcc0

#define A4XX_RB_PERFCTR_RB_SEL_0	0xcc7
#define A4XX_RB_PERFCTR_RB_SEL_1	0xcc8
#define A4XX_RB_PERFCTR_RB_SEL_2	0xcc9
#define A4XX_RB_PERFCTR_RB_SEL_3	0xcca
#define A4XX_RB_PERFCTR_RB_SEL_4	0xccb
#define A4XX_RB_PERFCTR_RB_SEL_5	0xccc
#define A4XX_RB_PERFCTR_RB_SEL_6	0xccd
#define A4XX_RB_PERFCTR_RB_SEL_7	0xcce

enum a4xx_rb_perfctr_rb_sel {
	RB_VALID_SAMPLES = 0x25,
	RB_Z_FAIL = 0x28,
	RB_S_FAIL = 0x29,
};

/* RBBM registers */
#define A4XX_RBBM_CLOCK_CTL_TP0			0x4
#define A4XX_RBBM_CLOCK_CTL_TP1			0x5
#define A4XX_RBBM_CLOCK_CTL_TP2			0x6
#define A4XX_RBBM_CLOCK_CTL_TP3			0x7
#define A4XX_RBBM_CLOCK_CTL2_TP0		0x8
#define A4XX_RBBM_CLOCK_CTL2_TP1		0x9
#define A4XX_RBBM_CLOCK_CTL2_TP2		0xA
#define A4XX_RBBM_CLOCK_CTL2_TP3		0xB
#define A4XX_RBBM_CLOCK_HYST_TP0		0xC
#define A4XX_RBBM_CLOCK_HYST_TP1		0xD
#define A4XX_RBBM_CLOCK_HYST_TP2		0xE
#define A4XX_RBBM_CLOCK_HYST_TP3		0xF
#define A4XX_RBBM_CLOCK_DELAY_TP0		0x10
#define A4XX_RBBM_CLOCK_DELAY_TP1		0x11
#define A4XX_RBBM_CLOCK_DELAY_TP2		0x12
#define A4XX_RBBM_CLOCK_DELAY_TP3		0x13
#define A4XX_RBBM_CLOCK_CTL_UCHE		0x14
#define A4XX_RBBM_CLOCK_CTL2_UCHE		0x15
#define A4XX_RBBM_CLOCK_CTL3_UCHE		0x16
#define A4XX_RBBM_CLOCK_CTL4_UCHE		0x17
#define A4XX_RBBM_CLOCK_HYST_UCHE		0x18
#define A4XX_RBBM_CLOCK_DELAY_UCHE		0x19
#define A4XX_RBBM_CLOCK_MODE_GPC		0x1a
#define A4XX_RBBM_CLOCK_DELAY_GPC		0x1b
#define A4XX_RBBM_CLOCK_HYST_GPC		0x1c
#define A4XX_RBBM_CLOCK_CTL_TSE_RAS_RBBM	0x1d
#define A4XX_RBBM_CLOCK_HYST_TSE_RAS_RBBM	0x1e
#define A4XX_RBBM_CLOCK_DELAY_TSE_RAS_RBBM	0x1f
#define A4XX_RBBM_CLOCK_CTL			0x20
#define A4XX_RBBM_SP_HYST_CNT			0x21
#define A4XX_RBBM_SW_RESET_CMD			0x22
#define A4XX_RBBM_AHB_CTL0			0x23
#define A4XX_RBBM_AHB_CTL1			0x24
#define A4XX_RBBM_AHB_CMD			0x25
#define A4XX_RBBM_GPR0_CTL		0x29
#define A4XX_RBBM_WAIT_IDLE_CLOCKS_CTL		0x2b
#define A4XX_RBBM_INTERFACE_HANG_INT_CTL	0x2f
#define A4XX_RBBM_INT_CLEAR_CMD			0x36
#define A4XX_RBBM_INT_0_MASK			0x37
#define A4XX_RBBM_ALWAYSON_COUNTER_CNTL		0x3d
#define A4XX_RBBM_RBBM_CTL			0x3e
#define A4XX_RBBM_CLOCK_CTL2			0x42
#define A4XX_RBBM_BLOCK_SW_RESET_CMD		0x45
#define A4XX_RBBM_EXT_TRACE_BUS_CTL		0x49
#define A4XX_RBBM_CFG_DEBBUS_SEL_A		0x4a
#define A4XX_RBBM_CFG_DEBBUS_SEL_B		0x4b
#define A4XX_RBBM_CFG_DEBBUS_SEL_C		0x4c
#define A4XX_RBBM_CFG_DEBBUS_SEL_D		0x4d
#define A4XX_RBBM_CFG_DEBBUS_SEL_PING_INDEX_SHIFT	0
#define A4XX_RBBM_CFG_DEBBUS_SEL_PING_BLK_SEL_SHIFT	8
#define A4XX_RBBM_CFG_DEBBUS_SEL_PONG_INDEX_SHIFT	16
#define A4XX_RBBM_CFG_DEBBUS_SEL_PONG_BLK_SEL_SHIFT	24

#define A4XX_RBBM_CFG_DEBBUS_CTLT		0x4e
#define A4XX_RBBM_CFG_DEBBUS_CTLT_ENT_SHIFT		0
#define A4XX_RBBM_CFG_DEBBUS_CTLT_GRANU_SHIFT		12
#define A4XX_RBBM_CFG_DEBBUS_CTLT_SEGT_SHIFT		28

#define A4XX_RBBM_CFG_DEBBUS_CTLM		0x4f
#define A4XX_RBBM_CFG_DEBBUS_CTLT_ENABLE_SHIFT		24

#define A4XX_RBBM_CFG_DEBBUS_OPL		0x50
#define A4XX_RBBM_CFG_DEBBUS_OPE		0x51
#define A4XX_RBBM_CFG_DEBBUS_IVTL_0		0x52
#define A4XX_RBBM_CFG_DEBBUS_IVTL_1		0x53
#define A4XX_RBBM_CFG_DEBBUS_IVTL_2		0x54
#define A4XX_RBBM_CFG_DEBBUS_IVTL_3		0x55

#define A4XX_RBBM_CFG_DEBBUS_MASKL_0		0x56
#define A4XX_RBBM_CFG_DEBBUS_MASKL_1		0x57
#define A4XX_RBBM_CFG_DEBBUS_MASKL_2		0x58
#define A4XX_RBBM_CFG_DEBBUS_MASKL_3		0x59


#define A4XX_RBBM_CFG_DEBBUS_BYTEL_0		0x5a
#define A4XX_RBBM_CFG_DEBBUS_BYTEL_0_BYTEL0_SHIFT	0
#define A4XX_RBBM_CFG_DEBBUS_BYTEL_0_BYTEL1_SHIFT	4
#define A4XX_RBBM_CFG_DEBBUS_BYTEL_0_BYTEL2_SHIFT	8
#define A4XX_RBBM_CFG_DEBBUS_BYTEL_0_BYTEL3_SHIFT	12
#define A4XX_RBBM_CFG_DEBBUS_BYTEL_0_BYTEL4_SHIFT	16
#define A4XX_RBBM_CFG_DEBBUS_BYTEL_0_BYTEL5_SHIFT	20
#define A4XX_RBBM_CFG_DEBBUS_BYTEL_0_BYTEL6_SHIFT	24
#define A4XX_RBBM_CFG_DEBBUS_BYTEL_0_BYTEL7_SHIFT	28

#define A4XX_RBBM_CFG_DEBBUS_BYTEL_1			0x5b
#define A4XX_RBBM_CFG_DEBBUS_BYTEL_1_BYTEL8_SHIFT	0
#define A4XX_RBBM_CFG_DEBBUS_BYTEL_1_BYTEL9_SHIFT	4
#define A4XX_RBBM_CFG_DEBBUS_BYTEL_1_BYTEL10_SHIFT	8
#define A4XX_RBBM_CFG_DEBBUS_BYTEL_1_BYTEL11_SHIFT	12
#define A4XX_RBBM_CFG_DEBBUS_BYTEL_1_BYTEL12_SHIFT	16
#define A4XX_RBBM_CFG_DEBBUS_BYTEL_1_BYTEL13_SHIFT	20
#define A4XX_RBBM_CFG_DEBBUS_BYTEL_1_BYTEL14_SHIFT	24
#define A4XX_RBBM_CFG_DEBBUS_BYTEL_1_BYTEL15_SHIFT	28

#define A4XX_RBBM_CFG_DEBBUS_IVTE_0		0x5c
#define A4XX_RBBM_CFG_DEBBUS_IVTE_1		0x5d
#define A4XX_RBBM_CFG_DEBBUS_IVTE_2		0x5e
#define A4XX_RBBM_CFG_DEBBUS_IVTE_3		0x5f
#define A4XX_RBBM_CFG_DEBBUS_MASKE_0		0x60
#define A4XX_RBBM_CFG_DEBBUS_MASKE_1		0x61
#define A4XX_RBBM_CFG_DEBBUS_MASKE_2		0x62
#define A4XX_RBBM_CFG_DEBBUS_MASKE_3		0x63
#define A4XX_RBBM_CFG_DEBBUS_NIBBLEE		0x64
#define A4XX_RBBM_CFG_DEBBUS_PTRC0		0x65
#define A4XX_RBBM_CFG_DEBBUS_PTRC1		0x66
#define A4XX_RBBM_CFG_DEBBUS_LOADREG		0x67
#define A4XX_RBBM_CLOCK_CTL_SP0			0x68
#define A4XX_RBBM_CLOCK_CTL_SP1			0x69
#define A4XX_RBBM_CLOCK_CTL_SP2			0x6A
#define A4XX_RBBM_CLOCK_CTL_SP3			0x6B
#define A4XX_RBBM_CLOCK_CTL2_SP0		0x6C
#define A4XX_RBBM_CLOCK_CTL2_SP1		0x6D
#define A4XX_RBBM_CLOCK_CTL2_SP2		0x6E
#define A4XX_RBBM_CLOCK_CTL2_SP3		0x6F
#define A4XX_RBBM_CLOCK_HYST_SP0		0x70
#define A4XX_RBBM_CLOCK_HYST_SP1		0x71
#define A4XX_RBBM_CLOCK_HYST_SP2		0x72
#define A4XX_RBBM_CLOCK_HYST_SP3		0x73
#define A4XX_RBBM_CLOCK_DELAY_SP0		0x74
#define A4XX_RBBM_CLOCK_DELAY_SP1		0x75
#define A4XX_RBBM_CLOCK_DELAY_SP2		0x76
#define A4XX_RBBM_CLOCK_DELAY_SP3		0x77
#define A4XX_RBBM_CLOCK_CTL_RB0			0x78
#define A4XX_RBBM_CLOCK_CTL_RB1			0x79
#define A4XX_RBBM_CLOCK_CTL_RB2			0x7A
#define A4XX_RBBM_CLOCK_CTL_RB3			0x7B
#define A4XX_RBBM_CLOCK_CTL2_RB0		0x7C
#define A4XX_RBBM_CLOCK_CTL2_RB1		0x7D
#define A4XX_RBBM_CLOCK_CTL2_RB2		0x7E
#define A4XX_RBBM_CLOCK_CTL2_RB3		0x7F
#define A4XX_RBBM_CLOCK_HYST_COM_DCOM		0x80
#define A4XX_RBBM_CLOCK_CTL_COM_DCOM		0x81
#define A4XX_RBBM_CLOCK_CTL_MARB_CCU0		0x82
#define A4XX_RBBM_CLOCK_CTL_MARB_CCU1		0x83
#define A4XX_RBBM_CLOCK_CTL_MARB_CCU2		0x84
#define A4XX_RBBM_CLOCK_CTL_MARB_CCU3		0x85
#define A4XX_RBBM_CLOCK_HYST_RB_MARB_CCU0	0x86
#define A4XX_RBBM_CLOCK_HYST_RB_MARB_CCU1	0x87
#define A4XX_RBBM_CLOCK_HYST_RB_MARB_CCU2	0x88
#define A4XX_RBBM_CLOCK_HYST_RB_MARB_CCU3	0x89
#define A4XX_RBBM_CLOCK_CTL_HLSQ		0x8a
#define A4XX_RBBM_CLOCK_HYST_HLSQ		0x8b

#define A4XX_RBBM_CLOCK_DELAY_HLSQ		0x8c
#define A4XX_CGC_HLSQ_TP_EARLY_CYC_MASK		0x00700000
#define A4XX_CGC_HLSQ_TP_EARLY_CYC_SHIFT	20

#define A4XX_RBBM_CLOCK_DELAY_COM_DCOM		0x8d
#define A4XX_RBBM_CLOCK_DELAY_RB_MARB_CCU_L1_0	0x8e
#define A4XX_RBBM_CLOCK_DELAY_RB_MARB_CCU_L1_1	0x8f
#define A4XX_RBBM_CLOCK_DELAY_RB_MARB_CCU_L1_2	0x90
#define A4XX_RBBM_CLOCK_DELAY_RB_MARB_CCU_L1_3	0x91

#define A4XX_RBBM_CFG_DEBBUS_IDX		0x93
#define A4XX_RBBM_CFG_DEBBUS_CLRC		0x94
#define A4XX_RBBM_CFG_DEBBUS_LOADIVT		0x95

#define A4XX_RBBM_POWER_CNTL_IP			0x98
#define A4XX_RBBM_SP_REGFILE_SLEEP_CNTL_0	0x99
#define A4XX_RBBM_SP_REGFILE_SLEEP_CNTL_1	0x9a
#define A4XX_RBBM_PERFCTR_CP_0_LO		0x9c
#define A4XX_RBBM_PERFCTR_CP_0_HI		0x9d
#define A4XX_RBBM_PERFCTR_CP_1_LO		0x9e
#define A4XX_RBBM_PERFCTR_CP_1_HI		0x9f
#define A4XX_RBBM_PERFCTR_CP_2_LO		0xa0
#define A4XX_RBBM_PERFCTR_CP_2_HI		0xa1
#define A4XX_RBBM_PERFCTR_CP_3_LO		0xa2
#define A4XX_RBBM_PERFCTR_CP_3_HI		0xa3
#define A4XX_RBBM_PERFCTR_CP_4_LO		0xa4
#define A4XX_RBBM_PERFCTR_CP_4_HI		0xa5
#define A4XX_RBBM_PERFCTR_CP_5_LO		0xa6
#define A4XX_RBBM_PERFCTR_CP_5_HI		0xa7
#define A4XX_RBBM_PERFCTR_CP_6_LO		0xa8
#define A4XX_RBBM_PERFCTR_CP_6_HI		0xa9
#define A4XX_RBBM_PERFCTR_CP_7_LO		0xaa
#define A4XX_RBBM_PERFCTR_CP_7_HI		0xab
#define A4XX_RBBM_PERFCTR_RBBM_0_LO		0xac
#define A4XX_RBBM_PERFCTR_RBBM_0_HI		0xad
#define A4XX_RBBM_PERFCTR_RBBM_1_LO		0xae
#define A4XX_RBBM_PERFCTR_RBBM_1_HI		0xaf
#define A4XX_RBBM_PERFCTR_RBBM_2_LO		0xb0
#define A4XX_RBBM_PERFCTR_RBBM_2_HI		0xb1
#define A4XX_RBBM_PERFCTR_RBBM_3_LO		0xb2
#define A4XX_RBBM_PERFCTR_RBBM_3_HI		0xb3
#define A4XX_RBBM_PERFCTR_PC_0_LO		0xb4
#define A4XX_RBBM_PERFCTR_PC_0_HI		0xb5
#define A4XX_RBBM_PERFCTR_PC_1_LO		0xb6
#define A4XX_RBBM_PERFCTR_PC_1_HI		0xb7
#define A4XX_RBBM_PERFCTR_PC_2_LO		0xb8
#define A4XX_RBBM_PERFCTR_PC_2_HI		0xb9
#define A4XX_RBBM_PERFCTR_PC_3_LO		0xba
#define A4XX_RBBM_PERFCTR_PC_3_HI		0xbb
#define A4XX_RBBM_PERFCTR_PC_4_LO		0xbc
#define A4XX_RBBM_PERFCTR_PC_4_HI		0xbd
#define A4XX_RBBM_PERFCTR_PC_5_LO		0xbe
#define A4XX_RBBM_PERFCTR_PC_5_HI		0xbf
#define A4XX_RBBM_PERFCTR_PC_6_LO		0xc0
#define A4XX_RBBM_PERFCTR_PC_6_HI		0xc1
#define A4XX_RBBM_PERFCTR_PC_7_LO		0xc2
#define A4XX_RBBM_PERFCTR_PC_7_HI		0xc3
#define A4XX_RBBM_PERFCTR_VFD_0_LO		0xc4
#define A4XX_RBBM_PERFCTR_VFD_0_HI		0xc5
#define A4XX_RBBM_PERFCTR_VFD_1_LO		0xc6
#define A4XX_RBBM_PERFCTR_VFD_1_HI		0xc7
#define A4XX_RBBM_PERFCTR_VFD_2_LO		0xc8
#define A4XX_RBBM_PERFCTR_VFD_2_HI		0xc9
#define A4XX_RBBM_PERFCTR_VFD_3_LO		0xca
#define A4XX_RBBM_PERFCTR_VFD_3_HI		0xcb
#define A4XX_RBBM_PERFCTR_VFD_4_LO		0xcc
#define A4XX_RBBM_PERFCTR_VFD_4_HI		0xcd
#define A4XX_RBBM_PERFCTR_VFD_5_LO		0xce
#define A4XX_RBBM_PERFCTR_VFD_5_HI		0xcf
#define A4XX_RBBM_PERFCTR_VFD_6_LO		0xd0
#define A4XX_RBBM_PERFCTR_VFD_6_HI		0xd1
#define A4XX_RBBM_PERFCTR_VFD_7_LO		0xd2
#define A4XX_RBBM_PERFCTR_VFD_7_HI		0xd3
#define A4XX_RBBM_PERFCTR_HLSQ_0_LO		0xd4
#define A4XX_RBBM_PERFCTR_HLSQ_0_HI		0xd5
#define A4XX_RBBM_PERFCTR_HLSQ_1_LO		0xd6
#define A4XX_RBBM_PERFCTR_HLSQ_1_HI		0xd7
#define A4XX_RBBM_PERFCTR_HLSQ_2_LO		0xd8
#define A4XX_RBBM_PERFCTR_HLSQ_2_HI		0xd9
#define A4XX_RBBM_PERFCTR_HLSQ_3_LO		0xda
#define A4XX_RBBM_PERFCTR_HLSQ_3_HI		0xdb
#define A4XX_RBBM_PERFCTR_HLSQ_4_LO		0xdc
#define A4XX_RBBM_PERFCTR_HLSQ_4_HI		0xdd
#define A4XX_RBBM_PERFCTR_HLSQ_5_LO		0xde
#define A4XX_RBBM_PERFCTR_HLSQ_5_HI		0xdf
#define A4XX_RBBM_PERFCTR_HLSQ_6_LO		0xe0
#define A4XX_RBBM_PERFCTR_HLSQ_6_HI		0xe1
#define A4XX_RBBM_PERFCTR_HLSQ_7_LO		0xe2
#define A4XX_RBBM_PERFCTR_HLSQ_7_HI		0xe3
#define A4XX_RBBM_PERFCTR_VPC_0_LO		0xe4
#define A4XX_RBBM_PERFCTR_VPC_0_HI		0xe5
#define A4XX_RBBM_PERFCTR_VPC_1_LO		0xe6
#define A4XX_RBBM_PERFCTR_VPC_1_HI		0xe7
#define A4XX_RBBM_PERFCTR_VPC_2_LO		0xe8
#define A4XX_RBBM_PERFCTR_VPC_2_HI		0xe9
#define A4XX_RBBM_PERFCTR_VPC_3_LO		0xea
#define A4XX_RBBM_PERFCTR_VPC_3_HI		0xeb
#define A4XX_RBBM_PERFCTR_CCU_0_LO		0xec
#define A4XX_RBBM_PERFCTR_CCU_0_HI		0xed
#define A4XX_RBBM_PERFCTR_CCU_1_LO		0xee
#define A4XX_RBBM_PERFCTR_CCU_1_HI		0xef
#define A4XX_RBBM_PERFCTR_CCU_2_LO		0xf0
#define A4XX_RBBM_PERFCTR_CCU_2_HI		0xf1
#define A4XX_RBBM_PERFCTR_CCU_3_LO		0xf2
#define A4XX_RBBM_PERFCTR_CCU_3_HI		0xf3
#define A4XX_RBBM_PERFCTR_TSE_0_LO		0xf4
#define A4XX_RBBM_PERFCTR_TSE_0_HI		0xf5
#define A4XX_RBBM_PERFCTR_TSE_1_LO		0xf6
#define A4XX_RBBM_PERFCTR_TSE_1_HI		0xf7
#define A4XX_RBBM_PERFCTR_TSE_2_LO		0xf8
#define A4XX_RBBM_PERFCTR_TSE_2_HI		0xf9
#define A4XX_RBBM_PERFCTR_TSE_3_LO		0xfa
#define A4XX_RBBM_PERFCTR_TSE_3_HI		0xfb
#define A4XX_RBBM_PERFCTR_RAS_0_LO		0xfc
#define A4XX_RBBM_PERFCTR_RAS_0_HI		0xfd
#define A4XX_RBBM_PERFCTR_RAS_1_LO		0xfe
#define A4XX_RBBM_PERFCTR_RAS_1_HI		0xff
#define A4XX_RBBM_PERFCTR_RAS_2_LO		0x100
#define A4XX_RBBM_PERFCTR_RAS_2_HI		0x101
#define A4XX_RBBM_PERFCTR_RAS_3_LO		0x102
#define A4XX_RBBM_PERFCTR_RAS_3_HI		0x103
#define A4XX_RBBM_PERFCTR_UCHE_0_LO		0x104
#define A4XX_RBBM_PERFCTR_UCHE_0_HI		0x105
#define A4XX_RBBM_PERFCTR_UCHE_1_LO		0x106
#define A4XX_RBBM_PERFCTR_UCHE_1_HI		0x107
#define A4XX_RBBM_PERFCTR_UCHE_2_LO		0x108
#define A4XX_RBBM_PERFCTR_UCHE_2_HI		0x109
#define A4XX_RBBM_PERFCTR_UCHE_3_LO		0x10a
#define A4XX_RBBM_PERFCTR_UCHE_3_HI		0x10b
#define A4XX_RBBM_PERFCTR_UCHE_4_LO		0x10c
#define A4XX_RBBM_PERFCTR_UCHE_4_HI		0x10d
#define A4XX_RBBM_PERFCTR_UCHE_5_LO		0x10e
#define A4XX_RBBM_PERFCTR_UCHE_5_HI		0x10f
#define A4XX_RBBM_PERFCTR_UCHE_6_LO		0x110
#define A4XX_RBBM_PERFCTR_UCHE_6_HI		0x111
#define A4XX_RBBM_PERFCTR_UCHE_7_LO		0x112
#define A4XX_RBBM_PERFCTR_UCHE_7_HI		0x113
#define A4XX_RBBM_PERFCTR_TP_0_LO		0x114
#define A4XX_RBBM_PERFCTR_TP_0_HI		0x115
#define A4XX_RBBM_PERFCTR_TP_1_LO		0x116
#define A4XX_RBBM_PERFCTR_TP_1_HI		0x117
#define A4XX_RBBM_PERFCTR_TP_2_LO		0x118
#define A4XX_RBBM_PERFCTR_TP_2_HI		0x119
#define A4XX_RBBM_PERFCTR_TP_3_LO		0x11a
#define A4XX_RBBM_PERFCTR_TP_3_HI		0x11b
#define A4XX_RBBM_PERFCTR_TP_4_LO		0x11c
#define A4XX_RBBM_PERFCTR_TP_4_HI		0x11d
#define A4XX_RBBM_PERFCTR_TP_5_LO		0x11e
#define A4XX_RBBM_PERFCTR_TP_5_HI		0x11f
#define A4XX_RBBM_PERFCTR_TP_6_LO		0x120
#define A4XX_RBBM_PERFCTR_TP_6_HI		0x121
#define A4XX_RBBM_PERFCTR_TP_7_LO		0x122
#define A4XX_RBBM_PERFCTR_TP_7_HI		0x123
#define A4XX_RBBM_PERFCTR_SP_0_LO		0x124
#define A4XX_RBBM_PERFCTR_SP_0_HI		0x125
#define A4XX_RBBM_PERFCTR_SP_1_LO		0x126
#define A4XX_RBBM_PERFCTR_SP_1_HI		0x127
#define A4XX_RBBM_PERFCTR_SP_2_LO		0x128
#define A4XX_RBBM_PERFCTR_SP_2_HI		0x129
#define A4XX_RBBM_PERFCTR_SP_3_LO		0x12a
#define A4XX_RBBM_PERFCTR_SP_3_HI		0x12b
#define A4XX_RBBM_PERFCTR_SP_4_LO		0x12c
#define A4XX_RBBM_PERFCTR_SP_4_HI		0x12d
#define A4XX_RBBM_PERFCTR_SP_5_LO		0x12e
#define A4XX_RBBM_PERFCTR_SP_5_HI		0x12f
#define A4XX_RBBM_PERFCTR_SP_6_LO		0x130
#define A4XX_RBBM_PERFCTR_SP_6_HI		0x131
#define A4XX_RBBM_PERFCTR_SP_7_LO		0x132
#define A4XX_RBBM_PERFCTR_SP_7_HI		0x133
#define A4XX_RBBM_PERFCTR_SP_8_LO		0x134
#define A4XX_RBBM_PERFCTR_SP_8_HI		0x135
#define A4XX_RBBM_PERFCTR_SP_9_LO		0x136
#define A4XX_RBBM_PERFCTR_SP_9_HI		0x137
#define A4XX_RBBM_PERFCTR_SP_10_LO		0x138
#define A4XX_RBBM_PERFCTR_SP_10_HI		0x139
#define A4XX_RBBM_PERFCTR_SP_11_LO		0x13a
#define A4XX_RBBM_PERFCTR_SP_11_HI		0x13b
#define A4XX_RBBM_PERFCTR_RB_0_LO		0x13c
#define A4XX_RBBM_PERFCTR_RB_0_HI		0x13d
#define A4XX_RBBM_PERFCTR_RB_1_LO		0x13e
#define A4XX_RBBM_PERFCTR_RB_1_HI		0x13f
#define A4XX_RBBM_PERFCTR_RB_2_LO		0x140
#define A4XX_RBBM_PERFCTR_RB_2_HI		0x141
#define A4XX_RBBM_PERFCTR_RB_3_LO		0x142
#define A4XX_RBBM_PERFCTR_RB_3_HI		0x143
#define A4XX_RBBM_PERFCTR_RB_4_LO		0x144
#define A4XX_RBBM_PERFCTR_RB_4_HI		0x145
#define A4XX_RBBM_PERFCTR_RB_5_LO		0x146
#define A4XX_RBBM_PERFCTR_RB_5_HI		0x147
#define A4XX_RBBM_PERFCTR_RB_6_LO		0x148
#define A4XX_RBBM_PERFCTR_RB_6_HI		0x149
#define A4XX_RBBM_PERFCTR_RB_7_LO		0x14a
#define A4XX_RBBM_PERFCTR_RB_7_HI		0x14b
#define A4XX_RBBM_PERFCTR_VSC_0_LO		0x14c
#define A4XX_RBBM_PERFCTR_VSC_0_HI		0x14d
#define A4XX_RBBM_PERFCTR_VSC_1_LO		0x14e
#define A4XX_RBBM_PERFCTR_VSC_1_HI		0x14f
#define A4XX_RBBM_PERFCTR_PWR_0_LO		0x166
#define A4XX_RBBM_PERFCTR_PWR_0_HI		0x167
#define A4XX_RBBM_PERFCTR_PWR_1_LO		0x168
#define A4XX_RBBM_PERFCTR_PWR_1_HI		0x169
#define A4XX_RBBM_ALWAYSON_COUNTER_LO		0x16e
#define A4XX_RBBM_ALWAYSON_COUNTER_HI		0x16f
#define A4XX_RBBM_PERFCTR_CTL			0x170
#define A4XX_RBBM_PERFCTR_LOAD_CMD0		0x171
#define A4XX_RBBM_PERFCTR_LOAD_CMD1		0x172
#define A4XX_RBBM_PERFCTR_LOAD_CMD2		0x173
#define A4XX_RBBM_PERFCTR_LOAD_VALUE_LO		0x174
#define A4XX_RBBM_PERFCTR_LOAD_VALUE_HI		0x175
#define A4XX_RBBM_PERFCTR_RBBM_SEL_0		0x176
#define A4XX_RBBM_PERFCTR_RBBM_SEL_1		0x177
#define A4XX_RBBM_PERFCTR_RBBM_SEL_2		0x178
#define A4XX_RBBM_PERFCTR_RBBM_SEL_3		0x179
#define A4XX_RBBM_GPU_BUSY_MASKED		0x17a
#define A4XX_RBBM_INT_0_STATUS			0x17d
#define A4XX_RBBM_AHB_ME_SPLIT_STATUS		0x18c
#define A4XX_RBBM_AHB_PFP_SPLIT_STATUS		0x18d
#define A4XX_RBBM_AHB_ERROR_STATUS		0x18f
#define A4XX_RBBM_STATUS			0x191
#define A4XX_RBBM_CFG_COUNTER0			0x1a2
#define A4XX_RBBM_CFG_DEBBUS_TRACE_BUF0		0x1a9
#define A4XX_RBBM_CFG_DEBBUS_TRACE_BUF1		0x1aa
#define A4XX_RBBM_CFG_DEBBUS_TRACE_BUF2		0x1ab
#define A4XX_RBBM_CFG_DEBBUS_TRACE_BUF3		0x1ac
#define A4XX_RBBM_CFG_DEBBUS_TRACE_BUF4		0x1ad
#define A4XX_RBBM_CFG_DEBBUS_MISR0		0x1ae
#define A4XX_RBBM_CFG_DEBBUS_MISR1		0x1af
#define A4XX_RBBM_POWER_STATUS			0x1b0
#define A4XX_RBBM_WAIT_IDLE_CLOCKS_CTL2		0x1b8
#define A4XX_RBBM_PPD_CTRL			0x1b9
#define A4XX_RBBM_PPD_EPOCH_INTRA_TH_1		0x1ba
#define A4XX_RBBM_PPD_EPOCH_INTRA_TH_2		0x1bb
#define A4XX_RBBM_PPD_EPOCH_INTER_TH_HI_CLR_TH  0x1bc
#define A4XX_RBBM_PPD_EPOCH_INTER_TH_LO         0x1bd
/* SECVID registers */
#define A4XX_RBBM_SECVID_TRUST_CONFIG		0xf000
#define A4XX_RBBM_SECVID_TRUST_CONTROL		0xf400
#define A4XX_RBBM_SECVID_TSB_TRUSTED_BASE	0xf800
#define A4XX_RBBM_SECVID_TSB_TRUSTED_SIZE	0xf801
#define A4XX_RBBM_SECVID_TSB_CONTROL		0xf802

/* CP registers */
#define A4XX_CP_RB_BASE			0x200
#define A4XX_CP_RB_CNTL			0x201
#define A4XX_CP_RB_RPTR_ADDR		0x203
#define A4XX_CP_RB_RPTR			0x204
#define A4XX_CP_RB_WPTR			0x205
#define A4XX_CP_IB1_BASE		0x206
#define A4XX_CP_IB1_BUFSZ		0x207
#define A4XX_CP_IB2_BASE		0x208
#define A4XX_CP_IB2_BUFSZ		0x209
#define A4XX_CP_ROQ_ADDR		0x21C
#define A4XX_CP_ROQ_DATA		0x21D
#define A4XX_CP_MEQ_ADDR		0x21E
#define A4XX_CP_MEQ_DATA		0x21F
#define A4XX_CP_MERCIU_ADDR		0x220
#define A4XX_CP_MERCIU_DATA		0x221
#define A4XX_CP_MERCIU_DATA2		0x222
#define A4XX_CP_PFP_UCODE_ADDR		0x223
#define A4XX_CP_PFP_UCODE_DATA		0x224
#define A4XX_CP_ME_RAM_WADDR		0x225
#define A4XX_CP_ME_RAM_RADDR		0x226
#define A4XX_CP_ME_RAM_DATA		0x227

#define A4XX_CP_DEBUG			0x22e
#define A4XX_CP_POWER_COLLAPSE_CNTL	0x234
/*
 * CP debug settings for A4xx cores
 * MIU_128BIT_WRITE_ENABLE [25] - Allow 128 bit writes to the VBIF
 */
#define A4XX_CP_DEBUG_DEFAULT (1 << 25)

#define A4XX_CP_PROTECT_REG_0		0x240
#define A4XX_CP_PROTECT_REG_1		0x241
#define A4XX_CP_PROTECT_REG_3		0x242
#define A4XX_CP_PROTECT_REG_4		0x243
#define A4XX_CP_PROTECT_REG_5		0x244
#define A4XX_CP_PROTECT_REG_6		0x245
#define A4XX_CP_PROTECT_REG_7		0x246
#define A4XX_CP_PROTECT_REG_8		0x248
#define A4XX_CP_PROTECT_REG_9		0x249
#define A4XX_CP_PROTECT_REG_A		0x24a
#define A4XX_CP_PROTECT_REG_B		0x24b
#define A4XX_CP_PROTECT_REG_C		0x24c
#define A4XX_CP_PROTECT_REG_D		0x24d
#define A4XX_CP_PROTECT_REG_E		0x24e
#define A4XX_CP_PROTECT_REG_F		0x24f

#define A4XX_CP_PROTECT_CTRL		0x250
#define A4XX_CP_SCRATCH_UMASK		0x228
#define A4XX_CP_SCRATCH_ADDR		0x229
#define A4XX_CP_CNTL			0x22c
#define A4XX_CP_ME_CNTL			0x22d
#define A4XX_CP_STATE_DEBUG_INDEX	0x22F
#define A4XX_CP_STATE_DEBUG_DATA	0x230
#define A4XX_CP_PROTECT_CTRL		0x250
#define A4XX_CP_ME_STATUS		0x4D1
#define A4XX_CP_WFI_PEND_CTR		0x4d2
#define A4XX_CP_HW_FAULT		0x4D8
#define A4XX_CP_PROTECT_STATUS		0x4da
#define A4XX_CP_PERFCTR_CP_SEL_0	0x500
#define A4XX_CP_PERFCTR_CP_SEL_1	0x501
#define A4XX_CP_PERFCTR_CP_SEL_2	0x502
#define A4XX_CP_PERFCTR_CP_SEL_3	0x503
#define A4XX_CP_PERFCTR_CP_SEL_4	0x504
#define A4XX_CP_PERFCTR_CP_SEL_5	0x505
#define A4XX_CP_PERFCTR_CP_SEL_6	0x506
#define A4XX_CP_PERFCTR_CP_SEL_7	0x507

#define A4XX_CP_SCRATCH_REG0		0x578
#define A4XX_CP_SCRATCH_REG6		0x57e
#define A4XX_CP_SCRATCH_REG7		0x57f

/* SP registers */
#define A4XX_SP_SP_CTRL			0x22C0
#define A4XX_SP_INSTR_CACHE_CTRL	0x22c1
#define A4XX_SP_VS_OBJ_START		0x22e1
#define A4XX_SP_VS_PVT_MEM_ADDR		0x22e3
#define A4XX_SP_FS_CTRL_1		0x22e9
#define A4XX_SP_FS_OBJ_START		0x22eb
#define A4XX_SP_FS_PVT_MEM_ADDR		0x22ed
#define A4XX_SP_CS_CTRL_0		0x2300
#define A4XX_SP_CS_OBJ_OFFSET		0x2301
#define A4XX_SP_CS_OBJ_START		0x2302
#define A4XX_SP_CS_PVT_MEM_PARAM	0x2303
#define A4XX_SP_CS_PVT_MEM_ADDR		0x2304
#define A4XX_SP_CS_PVT_MEM_SIZE		0x2305
#define A4XX_SP_CS_LENGTH		0x2306
#define A4XX_SP_MODE_CONTROL		0xec3
#define A4XX_SP_PERFCTR_SP_SEL_0	0xec4
#define A4XX_SP_PERFCTR_SP_SEL_1	0xec5
#define A4XX_SP_PERFCTR_SP_SEL_2	0xec6
#define A4XX_SP_PERFCTR_SP_SEL_3	0xec7
#define A4XX_SP_PERFCTR_SP_SEL_4	0xec8
#define A4XX_SP_PERFCTR_SP_SEL_5	0xec9
#define A4XX_SP_PERFCTR_SP_SEL_6	0xeca
#define A4XX_SP_PERFCTR_SP_SEL_7	0xecb
#define A4XX_SP_PERFCTR_SP_SEL_8	0xecc
#define A4XX_SP_PERFCTR_SP_SEL_9	0xecd
#define A4XX_SP_PERFCTR_SP_SEL_10	0xece
#define A4XX_SP_PERFCTR_SP_SEL_11	0xecf
#define A4XX_SP_VS_PVT_MEM_ADDR		0x22e3
#define A4XX_SP_FS_PVT_MEM_ADDR		0x22ed
#define A4XX_SP_VS_OBJ_START		0x22e1
#define A4XX_SP_FS_OBJ_START		0x22eb

enum a4xx_sp_perfctr_sp_sel {
	SP_FS_STAGE_BARY_INSTRUCTIONS = 0x10,
};

/* VPC registers */
#define A4XX_VPC_DEBUG_RAM_SEL		0xe60
#define A4XX_VPC_DEBUG_RAM_READ		0xe61
#define A4XX_VPC_PERFCTR_VPC_SEL_0	0xe65
#define A4XX_VPC_PERFCTR_VPC_SEL_1	0xe66
#define A4XX_VPC_PERFCTR_VPC_SEL_2	0xe67
#define A4XX_VPC_PERFCTR_VPC_SEL_3	0xe68

/* UCHE register */
#define UCHE_TRAP_BASE_LO               0xe83
#define UCHE_TRAP_BASE_HI               0xe84
#define A4XX_UCHE_INVALIDATE0		0xe8a
#define A4XX_UCHE_INVALIDATE1		0xe8b
#define A4XX_UCHE_CACHE_WAYS_VFD	0xe8c

/* VSC registers */
#define A4XX_VSC_SIZE_ADDRESS		0xc01
#define A4XX_VSC_PIPE_DATA_ADDRESS_0	0xc10
#define A4XX_VSC_PIPE_DATA_ADDRESS_1	0xc11
#define A4XX_VSC_PIPE_DATA_ADDRESS_2	0xc12
#define A4XX_VSC_PIPE_DATA_ADDRESS_3	0xc13
#define A4XX_VSC_PIPE_DATA_ADDRESS_4	0xc14
#define A4XX_VSC_PIPE_DATA_ADDRESS_5	0xc15
#define A4XX_VSC_PIPE_DATA_ADDRESS_6	0xc16
#define A4XX_VSC_PIPE_DATA_ADDRESS_7	0xc17
#define A4XX_VSC_PIPE_DATA_LENGTH_0	0xc18
#define A4XX_VSC_PIPE_DATA_LENGTH_1	0xc19
#define A4XX_VSC_PIPE_DATA_LENGTH_2	0xc1a
#define A4XX_VSC_PIPE_DATA_LENGTH_3	0xc1b
#define A4XX_VSC_PIPE_DATA_LENGTH_4	0xc1c
#define A4XX_VSC_PIPE_DATA_LENGTH_5	0xc1d
#define A4XX_VSC_PIPE_DATA_LENGTH_6	0xc1e
#define A4XX_VSC_PIPE_DATA_LENGTH_7	0xc1f
#define A4XX_VSC_PERFCTR_VSC_SEL_0	0xc50
#define A4XX_VSC_PERFCTR_VSC_SEL_1	0xc51

/* VFD registers */
#define A4XX_VFD_CONTROL_0		0x2200
#define A4XX_VFD_FETCH_INSTR_0_0	0x220a
#define A4XX_VFD_FETCH_INSTR_1_31	0x2287
#define A4XX_VFD_PERFCTR_VFD_SEL_0	0xe43
#define A4XX_VFD_PERFCTR_VFD_SEL_1	0xe44
#define A4XX_VFD_PERFCTR_VFD_SEL_2	0xe45
#define A4XX_VFD_PERFCTR_VFD_SEL_3	0xe46
#define A4XX_VFD_PERFCTR_VFD_SEL_4	0xe47
#define A4XX_VFD_PERFCTR_VFD_SEL_5	0xe48
#define A4XX_VFD_PERFCTR_VFD_SEL_6	0xe49
#define A4XX_VFD_PERFCTR_VFD_SEL_7	0xe4a
#define A4XX_VFD_FETCH_INSTR_1_0	0x220b
#define A4XX_VFD_FETCH_INSTR_1_1	0x220f
#define A4XX_VFD_FETCH_INSTR_1_2	0x2213
#define A4XX_VFD_FETCH_INSTR_1_3	0x2217
#define A4XX_VFD_FETCH_INSTR_1_4	0x221b
#define A4XX_VFD_FETCH_INSTR_1_5	0x221f
#define A4XX_VFD_FETCH_INSTR_1_6	0x2223
#define A4XX_VFD_FETCH_INSTR_1_7	0x2227
#define A4XX_VFD_FETCH_INSTR_1_8	0x222b
#define A4XX_VFD_FETCH_INSTR_1_9	0x222f
#define A4XX_VFD_FETCH_INSTR_1_10	0x2233
#define A4XX_VFD_FETCH_INSTR_1_11	0x2237
#define A4XX_VFD_FETCH_INSTR_1_12	0x223b
#define A4XX_VFD_FETCH_INSTR_1_13	0x223f
#define A4XX_VFD_FETCH_INSTR_1_14	0x2243
#define A4XX_VFD_FETCH_INSTR_1_15	0x2247
#define A4XX_VFD_FETCH_INSTR_1_16	0x224b
#define A4XX_VFD_FETCH_INSTR_1_17	0x224f
#define A4XX_VFD_FETCH_INSTR_1_18	0x2253
#define A4XX_VFD_FETCH_INSTR_1_19	0x2257
#define A4XX_VFD_FETCH_INSTR_1_20	0x225b
#define A4XX_VFD_FETCH_INSTR_1_21	0x225f
#define A4XX_VFD_FETCH_INSTR_1_22	0x2263
#define A4XX_VFD_FETCH_INSTR_1_23	0x2267
#define A4XX_VFD_FETCH_INSTR_1_24	0x226b
#define A4XX_VFD_FETCH_INSTR_1_25	0x226f
#define A4XX_VFD_FETCH_INSTR_1_26	0x2273
#define A4XX_VFD_FETCH_INSTR_1_27	0x2277
#define A4XX_VFD_FETCH_INSTR_1_28	0x227b
#define A4XX_VFD_FETCH_INSTR_1_29	0x227f
#define A4XX_VFD_FETCH_INSTR_1_30	0x2283
#define A4XX_VFD_FETCH_INSTR_1_31	0x2287


enum a4xx_vfd_perfctr_vfd_sel {
	VFD_VPC_BYPASS_TRANS = 0x2,
	VFD_UPPER_SHADER_FIBERS = 0xb,
	VFD_LOWER_SHADER_FIBERS = 0xc,
};

/* VBIF registers */
#define A4XX_VBIF_VERSION			0x3000
#define A4XX_VBIF_CLKON				0x3001
#define A4XX_VBIF_CLKON_FORCE_ON_TESTBUS_MASK	0x1
#define A4XX_VBIF_CLKON_FORCE_ON_TESTBUS_SHIFT	0x1

#define A4XX_VBIF_ABIT_SORT		0x301c
#define A4XX_VBIF_ABIT_SORT_CONF	0x301d
#define A4XX_VBIF_GATE_OFF_WRREQ_EN	0x302a
#define A4XX_VBIF_IN_RD_LIM_CONF0	0x302c
#define A4XX_VBIF_IN_RD_LIM_CONF1	0x302d
#define A4XX_VBIF_IN_WR_LIM_CONF0	0x3030
#define A4XX_VBIF_IN_WR_LIM_CONF1	0x3031
#define A4XX_VBIF_ROUND_ROBIN_QOS_ARB	0x3049
#define A4XX_VBIF_TEST_BUS_OUT_CTRL		0x3084
#define A4XX_VBIF_TEST_BUS_OUT_CTRL_EN_MASK	0x1
#define A4XX_VBIF_TEST_BUS_OUT_CTRL_EN_SHIFT	0x0

#define A4XX_VBIF_TEST_BUS1_CTRL0	0x3085
#define A4XX_VBIF_TEST_BUS1_CTRL1			0x3086
#define A4XX_VBIF_TEST_BUS1_CTRL1_DATA_SEL_MASK		0xF
#define A4XX_VBIF_TEST_BUS1_CTRL1_DATA_SEL_SHIFT	0

#define A4XX_VBIF_TEST_BUS2_CTRL0	0x3087
#define A4XX_VBIF_TEST_BUS2_CTRL1			0x3088
#define A4XX_VBIF_TEST_BUS2_CTRL1_DATA_SEL_MASK		0xF
#define A4XX_VBIF_TEST_BUS2_CTRL1_DATA_SEL_SHIFT	0x0

#define A4XX_VBIF_TEST_BUS_OUT		0x308c

#define A4XX_VBIF_PERF_CNT_EN0		0x30c0
#define A4XX_VBIF_PERF_CNT_EN1		0x30c1
#define A4XX_VBIF_PERF_CNT_EN2		0x30c2
#define A4XX_VBIF_PERF_CNT_EN3		0x30c3
#define A4XX_VBIF_PERF_CNT_CLR0		0x30c8
#define A4XX_VBIF_PERF_CNT_CLR1		0x30c9
#define A4XX_VBIF_PERF_CNT_CLR2		0x30ca
#define A4XX_VBIF_PERF_CNT_CLR3		0x30cb
#define A4XX_VBIF_PERF_CNT_SEL0		0x30d0
#define A4XX_VBIF_PERF_CNT_SEL1		0x30d1
#define A4XX_VBIF_PERF_CNT_SEL2		0x30d2
#define A4XX_VBIF_PERF_CNT_SEL3		0x30d3
#define A4XX_VBIF_PERF_CNT_LOW0		0x30d8
#define A4XX_VBIF_PERF_CNT_LOW1		0x30d9
#define A4XX_VBIF_PERF_CNT_LOW2		0x30da
#define A4XX_VBIF_PERF_CNT_LOW3		0x30db
#define A4XX_VBIF_PERF_CNT_HIGH0	0x30e0
#define A4XX_VBIF_PERF_CNT_HIGH1	0x30e1
#define A4XX_VBIF_PERF_CNT_HIGH2	0x30e2
#define A4XX_VBIF_PERF_CNT_HIGH3	0x30e3

#define A4XX_VBIF_PERF_CNT_SEL_MASK	0x7F

/* offset of clear register from select register */
#define A4XX_VBIF_PERF_CLR_REG_SEL_OFF	8
/* offset of enable register from select register */
#define A4XX_VBIF_PERF_EN_REG_SEL_OFF	16
/* offset of high counter from low counter value */
#define A4XX_VBIF_PERF_HIGH_REG_LOW_OFF	8

#define A4XX_VBIF_PERF_PWR_CNT_EN0	0x3100
#define A4XX_VBIF_PERF_PWR_CNT_EN1	0x3101
#define A4XX_VBIF_PERF_PWR_CNT_EN2	0x3102
#define A4XX_VBIF_PERF_PWR_CNT_EN3	0x3103
#define A4XX_VBIF_PERF_PWR_CNT_CLR0	0x3108
#define A4XX_VBIF_PERF_PWR_CNT_CLR1	0x3109
#define A4XX_VBIF_PERF_PWR_CNT_CLR2	0x310A
#define A4XX_VBIF_PERF_PWR_CNT_CLR3	0x310B
#define A4XX_VBIF_PERF_PWR_CNT_LOW0	0x3110
#define A4XX_VBIF_PERF_PWR_CNT_LOW1	0x3111
#define A4XX_VBIF_PERF_PWR_CNT_LOW2	0x3112
#define A4XX_VBIF_PERF_PWR_CNT_LOW3	0x3113
#define A4XX_VBIF_PERF_PWR_CNT_HIGH0	0x3118
#define A4XX_VBIF_PERF_PWR_CNT_HIGH1	0x3119
#define A4XX_VBIF_PERF_PWR_CNT_HIGH2	0x311a
#define A4XX_VBIF_PERF_PWR_CNT_HIGH3	0x311b

/* offset of clear register from the enable register */
#define A4XX_VBIF_PERF_PWR_CLR_REG_EN_OFF	8
/* offset of high counter from low counter value */
#define A4XX_VBIF_PERF_PWR_HIGH_REG_LOW_OFF	8

/* Bit flags for RBBM_CTL */
#define A4XX_RBBM_RBBM_CTL_RESET_PWR_CTR0	0x00000001
#define A4XX_RBBM_RBBM_CTL_RESET_PWR_CTR1	0x00000002
#define A4XX_RBBM_RBBM_CTL_ENABLE_PWR_CTR0	0x00000010
#define A4XX_RBBM_RBBM_CTL_ENABLE_PWR_CTR1	0x00000020

/* GRAS registers */
#define A4XX_GRAS_PERFCTR_TSE_SEL_0	0xc88
#define A4XX_GRAS_PERFCTR_TSE_SEL_1	0xc89
#define A4XX_GRAS_PERFCTR_TSE_SEL_2	0xc8a
#define A4XX_GRAS_PERFCTR_TSE_SEL_3	0xc8b
#define A4XX_GRAS_PERFCTR_RAS_SEL_0	0xc8c
#define A4XX_GRAS_PERFCTR_RAS_SEL_1	0xc8d
#define A4XX_GRAS_PERFCTR_RAS_SEL_2	0xc8e
#define A4XX_GRAS_PERFCTR_RAS_SEL_3	0xc8f

/* PC registers */
#define A4XX_PC_PERFCTR_PC_SEL_0	0xd10
#define A4XX_PC_PERFCTR_PC_SEL_1	0xd11
#define A4XX_PC_PERFCTR_PC_SEL_2	0xd12
#define A4XX_PC_PERFCTR_PC_SEL_3	0xd13
#define A4XX_PC_PERFCTR_PC_SEL_4	0xd14
#define A4XX_PC_PERFCTR_PC_SEL_5	0xd15
#define A4XX_PC_PERFCTR_PC_SEL_6	0xd16
#define A4XX_PC_PERFCTR_PC_SEL_7	0xd17

enum a4xx_pc_perfctr_pc_sel {
	PC_INSTANCES = 0x1,
	PC_VERTEX_HITS = 0x8,
	PC_GENERATED_FIBERS = 0x12,
	PC_GENERATED_WAVES = 0x13,
};

/* HLSQ registers */
#define A4XX_HLSQ_TIMEOUT_THRESHOLD     0xe00
#define A4XX_HLSQ_STATE_RESTORE_TRIGGER	0xe01
#define A4XX_HLSQ_MODE_CONTROL		0xe05
#define A4XX_HLSQ_PERFCTR_HLSQ_SEL_0	0xe06
#define A4XX_HLSQ_PERFCTR_HLSQ_SEL_1	0xe07
#define A4XX_HLSQ_PERFCTR_HLSQ_SEL_2	0xe08
#define A4XX_HLSQ_PERFCTR_HLSQ_SEL_3	0xe09
#define A4XX_HLSQ_PERFCTR_HLSQ_SEL_4	0xe0a
#define A4XX_HLSQ_PERFCTR_HLSQ_SEL_5	0xe0b
#define A4XX_HLSQ_PERFCTR_HLSQ_SEL_6	0xe0c
#define A4XX_HLSQ_PERFCTR_HLSQ_SEL_7	0xe0d
#define A4XX_HLSQ_SPTP_RDSEL		0xe30
#define A4xx_HLSQ_CONTROL_0		0x23c0
#define A4xx_HLSQ_CONTROL_1		0x23c1
#define A4xx_HLSQ_CONTROL_2		0x23c2
#define A4xx_HLSQ_CONTROL_3		0x23c3
#define A4xx_HLSQ_CONTROL_4		0x23c4
#define A4XX_HLSQ_CS_CONTROL		0x23ca
#define A4XX_HLSQ_CL_NDRANGE_0		0x23cd
#define A4XX_HLSQ_CL_NDRANGE_1		0x23ce
#define A4XX_HLSQ_CL_NDRANGE_2		0x23cf
#define A4XX_HLSQ_CL_NDRANGE_3		0x23d0
#define A4XX_HLSQ_CL_NDRANGE_4		0x23d1
#define A4XX_HLSQ_CL_NDRANGE_5		0x23d2
#define A4XX_HLSQ_CL_NDRANGE_6		0x23d3
#define A4XX_HLSQ_CL_CONTROL_0		0x23d4
#define A4XX_HLSQ_CL_CONTROL_1		0x23d5
#define A4XX_HLSQ_CL_KERNEL_CONST	0x23d6
#define A4XX_HLSQ_CL_KERNEL_GROUP_X	0x23d7
#define A4XX_HLSQ_CL_KERNEL_GROUP_Y	0x23d8
#define A4XX_HLSQ_CL_KERNEL_GROUP_Z	0x23d9
#define A4XX_HLSQ_CL_WG_OFFSET		0x23da
#define A4XX_HLSQ_UPDATE_CONTROL	0x23db

enum a4xx_hlsq_perfctr_hlsq_sel {
	HLSQ_SP_VS_STAGE_CONSTANT = 0x0,
	HLSQ_SP_VS_STAGE_INSTRUCTIONS = 0x1,
	HLSQ_SP_FS_STAGE_CONSTANT = 0x2,
	HLSQ_SP_FS_STAGE_INSTRUCTIONS = 0x3,
	HLSQ_FS_STAGE_16_WAVES = 0x8,
	HLSQ_FS_STAGE_32_WAVES = 0x9,
	HLSQ_FS_STAGE_64_WAVES = 0xa,
	HLSQ_VS_STAGE_16_WAVES = 0xb,
	HLSQ_VS_STAGE_32_WAVES = 0xc,
};

/* CCU registers */
#define A4XX_RB_PERFCTR_CCU_SEL_0	0xccf
#define A4XX_RB_PERFCTR_CCU_SEL_1	0xcd0
#define A4XX_RB_PERFCTR_CCU_SEL_2	0xcd1
#define A4XX_RB_PERFCTR_CCU_SEL_3	0xcd2

enum a4xx_cu_perfctr_ccu_sel {
	CCU_VBIF_STALL = 0x1,
	CCU_VBIF_LATENCY_CYCLES = 0x4,
	CCU_VBIF_LATENCY_SAMPLES = 0x5,
	CCU_Z_READ = 0x13,
	CCU_Z_WRITE = 0x14,
	CCU_C_READ = 0x15,
	CCU_C_WRITE = 0x16,
};

/* UCHE registers */
#define A4XX_UCHE_PERFCTR_UCHE_SEL_0	0xe8e
#define A4XX_UCHE_PERFCTR_UCHE_SEL_1	0xe8f
#define A4XX_UCHE_PERFCTR_UCHE_SEL_2	0xe90
#define A4XX_UCHE_PERFCTR_UCHE_SEL_3	0xe91
#define A4XX_UCHE_PERFCTR_UCHE_SEL_4	0xe92
#define A4XX_UCHE_PERFCTR_UCHE_SEL_5	0xe93
#define A4XX_UCHE_PERFCTR_UCHE_SEL_6	0xe94
#define A4XX_UCHE_PERFCTR_UCHE_SEL_7	0xe95

/* TPL1 registers */
enum a4xx_uche_perfctr_uche_sel {
	UCHE_READ_REQUESTS_MARB = 0x8,
	UCHE_READ_REQUESTS_SP = 0x9,
	UCHE_WRITE_REQUESTS_MARB = 0xa,
	UCHE_WRITE_REQUESTS_SP = 0xb,
	UCHE_WRITE_REQUESTS_VPC = 0x14,
};

/* TPL1 registers */
#define A4XX_TPL1_TP_MODE_CONTROL	0xf03
#define A4XX_TPL1_PERFCTR_TP_SEL_0	0xf04
#define A4XX_TPL1_PERFCTR_TP_SEL_1	0xf05
#define A4XX_TPL1_PERFCTR_TP_SEL_2	0xf06
#define A4XX_TPL1_PERFCTR_TP_SEL_3	0xf07
#define A4XX_TPL1_PERFCTR_TP_SEL_4	0xf08
#define A4XX_TPL1_PERFCTR_TP_SEL_5	0xf09
#define A4XX_TPL1_PERFCTR_TP_SEL_6	0xf0a
#define A4XX_TPL1_PERFCTR_TP_SEL_7	0xf0b
#define A4XX_TPL1_TP_TEX_TSIZE_1	0x23a0
#define A4XX_TPL1_TP_CS_BORDER_COLOR_BASE_ADDR	0x23A4
#define A4XX_TPL1_TP_CS_SAMPLER_BASE_ADDR	0x23A5
#define A4XX_TPL1_TP_CS_TEXMEMOBJ_BASE_ADDR	0x23A6

enum a4xx_tpl1_perfctr_tp_sel {
	TP_OUTPUT_TEXELS_POINT = 0x2,
	TP_OUTPUT_TEXELS_BILINEAR = 0x3,
	TP_OUTPUT_TEXELS_MIP = 0x4,
	TP_OUTPUT_TEXELS_ANISO = 0x5,
	TP_OUTPUT_TEXELS_OPS16 = 0x6,
	TP_OUTPUT_TEXELS_OPS32 = 0x7,
	TP_ZERO_LOD = 0xe,
	TP_LATENCY = 0x12,
	TP_LATENCY_TRANS = 0x13,
};

/* Enum for debug bus */
enum a4xx_rbbm_debbus_id {
	A4XX_RBBM_DEBBUS_CP_ID = 0x1,
	A4XX_RBBM_DEBBUS_RBBM_ID = 0x2,
	A4XX_RBBM_DEBBUS_VBIF_ID = 0x3,
	A4XX_RBBM_DEBBUS_HLSQ_ID = 0x4,
	A4XX_RBBM_DEBBUS_UCHE_ID = 0x5,
	A4XX_RBBM_DEBBUS_DPM_ID  = 0x6,
	A4XX_RBBM_DEBBUS_TESS_ID = 0x7,
	A4XX_RBBM_DEBBUS_PC_ID   = 0x8,
	A4XX_RBBM_DEBBUS_VFD_ID  = 0x9,
	A4XX_RBBM_DEBBUS_VPC_ID  = 0xa,
	A4XX_RBBM_DEBBUS_TSE_ID  = 0xb,
	A4XX_RBBM_DEBBUS_RAS_ID  = 0xc,
	A4XX_RBBM_DEBBUS_VSC_ID  = 0xd,
	A4XX_RBBM_DEBBUS_COM_ID  = 0xe,
	A4XX_RBBM_DEBBUS_DCOM_ID = 0xf,
	A4XX_RBBM_DEBBUS_SP_0_ID = 0x10,
	A4XX_RBBM_DEBBUS_SP_1_ID = 0x11,
	A4XX_RBBM_DEBBUS_SP_2_ID = 0x12,
	A4XX_RBBM_DEBBUS_SP_3_ID = 0x13,
	A4XX_RBBM_DEBBUS_TPL1_0_ID = 0x18,
	A4XX_RBBM_DEBBUS_TPL1_1_ID = 0x19,
	A4XX_RBBM_DEBBUS_TPL1_2_ID = 0x1a,
	A4XX_RBBM_DEBBUS_TPL1_3_ID = 0x1b,
	A4XX_RBBM_DEBBUS_RB_0_ID = 0x20,
	A4XX_RBBM_DEBBUS_RB_1_ID = 0x21,
	A4XX_RBBM_DEBBUS_RB_2_ID = 0x22,
	A4XX_RBBM_DEBBUS_RB_3_ID = 0x23,
	A4XX_RBBM_DEBBUS_MARB_0_ID = 0x28,
	A4XX_RBBM_DEBBUS_MARB_1_ID = 0x29,
	A4XX_RBBM_DEBBUS_MARB_2_ID = 0x2a,
	A4XX_RBBM_DEBBUS_MARB_3_ID = 0x2b,
	A4XX_RBBM_DEBBUS_CCU_0_ID = 0x30,
	A4XX_RBBM_DEBBUS_CCU_1_ID = 0x31,
	A4XX_RBBM_DEBBUS_CCU_2_ID = 0x32,
	A4XX_RBBM_DEBBUS_CCU_3_ID = 0x33
};

#define A4XX_NUM_AXI_ARB_BLOCKS	2
#define A4XX_NUM_XIN_BLOCKS	5

#endif /* _A4XX_REG_H */
