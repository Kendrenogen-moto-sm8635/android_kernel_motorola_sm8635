/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2021, Linux Foundation. All rights reserved.
 * Copyright (c) 2023-2024 Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef UFS_QCOM_PHY_QMP_V4_H_
#define UFS_QCOM_PHY_QMP_V4_H_

#include "phy-qcom-ufs-i.h"

/* QCOM UFS PHY control registers */
#define COM_BASE	0x000
#define COM_SIZE	0x1C0
#define PHY_BASE	0xC00
#define PHY_SIZE	0x200
#define PCS2_BASE	0x200
#define PCS2_SIZE	0x40
#define TX_BASE(n)	(0x400 + (0x400 * n))
#define TX_SIZE		0x188
#define RX_BASE(n)	(0x600 + (0x400 * n))
#define RX_SIZE		0x200
#define COM_OFF(x)	(COM_BASE + x)
#define PHY_OFF(x)	(PHY_BASE + x)
#define TX_OFF(n, x)	(TX_BASE(n) + x)
#define RX_OFF(n, x)	(RX_BASE(n) + x)

/* UFS PHY QSERDES COM registers */
#define QSERDES_COM_SYSCLK_EN_SEL		COM_OFF(0x94)
#define QSERDES_COM_HSCLK_SEL			COM_OFF(0x158)
#define QSERDES_COM_HSCLK_HS_SWITCH_SEL		COM_OFF(0x15C)
#define QSERDES_COM_LOCK_CMP_EN			COM_OFF(0xA4)
#define QSERDES_COM_VCO_TUNE_MAP		COM_OFF(0x10C)
#define QSERDES_COM_PLL_IVCO			COM_OFF(0x58)
#define QSERDES_COM_VCO_TUNE_INITVAL2		COM_OFF(0x124)
#define QSERDES_COM_BIN_VCOCAL_HSCLK_SEL	COM_OFF(0x1BC)
#define QSERDES_COM_DEC_START_MODE0		COM_OFF(0xBC)
#define QSERDES_COM_CP_CTRL_MODE0		COM_OFF(0x74)
#define QSERDES_COM_PLL_RCTRL_MODE0		COM_OFF(0x7C)
#define QSERDES_COM_PLL_CCTRL_MODE0		COM_OFF(0x84)
#define QSERDES_COM_LOCK_CMP1_MODE0		COM_OFF(0xAC)
#define QSERDES_COM_LOCK_CMP2_MODE0		COM_OFF(0xB0)
#define QSERDES_COM_BIN_VCOCAL_CMP_CODE1_MODE0	COM_OFF(0x1AC)
#define QSERDES_COM_BIN_VCOCAL_CMP_CODE2_MODE0	COM_OFF(0x1B0)
#define QSERDES_COM_DEC_START_MODE1		COM_OFF(0xC4)
#define QSERDES_COM_CP_CTRL_MODE1		COM_OFF(0x78)
#define QSERDES_COM_PLL_RCTRL_MODE1		COM_OFF(0x80)
#define QSERDES_COM_PLL_CCTRL_MODE1		COM_OFF(0x88)
#define QSERDES_COM_LOCK_CMP1_MODE1		COM_OFF(0xB4)
#define QSERDES_COM_LOCK_CMP2_MODE1		COM_OFF(0xB8)
#define QSERDES_COM_BIN_VCOCAL_CMP_CODE1_MODE1	COM_OFF(0x1B4)
#define QSERDES_COM_BIN_VCOCAL_CMP_CODE2_MODE1	COM_OFF(0x1B8)
#define QSERDES_COM_CMN_IPTRIM			COM_OFF(0x60)

/* UFS PHY registers */
#define UFS_PHY_PHY_START			PHY_OFF(0x00)
#define UFS_PHY_POWER_DOWN_CONTROL		PHY_OFF(0x04)
#define UFS_PHY_SW_RESET			PHY_OFF(0x08)
#define UFS_PHY_PCS_READY_STATUS		PHY_OFF(0x180)
#define UFS_PHY_LINECFG_DISABLE			PHY_OFF(0x148)
#define UFS_PHY_MULTI_LANE_CTRL1		PHY_OFF(0x1E0)
#define UFS_PHY_RX_SIGDET_CTRL2			PHY_OFF(0x158)
#define UFS_PHY_TX_LARGE_AMP_DRV_LVL		PHY_OFF(0x30)
#define UFS_PHY_TX_SMALL_AMP_DRV_LVL		PHY_OFF(0x38)
#define UFS_PHY_TX_MID_TERM_CTRL1		PHY_OFF(0x1D8)
#define UFS_PHY_DEBUG_BUS_CLKSEL		PHY_OFF(0x124)
#define UFS_PHY_PLL_CNTL			PHY_OFF(0x2C)
#define UFS_PHY_TIMER_20US_CORECLK_STEPS_MSB	PHY_OFF(0x0C)
#define UFS_PHY_TIMER_20US_CORECLK_STEPS_LSB	PHY_OFF(0x10)
#define UFS_PHY_TX_PWM_GEAR_BAND		PHY_OFF(0x160)
#define UFS_PHY_TX_HS_GEAR_BAND			PHY_OFF(0x168)
#define UFS_PHY_TX_HSGEAR_CAPABILITY		PHY_OFF(0x74)
#define UFS_PHY_RX_HSGEAR_CAPABILITY		PHY_OFF(0xB4)
#define UFS_PHY_RX_MIN_HIBERN8_TIME		PHY_OFF(0x150)
#define UFS_PHY_BIST_FIXED_PAT_CTRL		PHY_OFF(0x60)
#define UFS_PHY_RX_SIGDET_CTRL1			PHY_OFF(0x154)

/* UFS PHY TX registers */
#define QSERDES_TX0_PWM_GEAR_1_DIVIDER_BAND0_1	TX_OFF(0, 0x178)
#define QSERDES_TX0_PWM_GEAR_2_DIVIDER_BAND0_1	TX_OFF(0, 0x17C)
#define QSERDES_TX0_PWM_GEAR_3_DIVIDER_BAND0_1	TX_OFF(0, 0x180)
#define QSERDES_TX0_PWM_GEAR_4_DIVIDER_BAND0_1	TX_OFF(0, 0x184)
#define QSERDES_TX0_LANE_MODE_1			TX_OFF(0, 0x84)
#define QSERDES_TX0_LANE_MODE_3			TX_OFF(0, 0x8C)
#define QSERDES_TX0_RES_CODE_LANE_OFFSET_TX	TX_OFF(0, 0x3C)
#define QSERDES_TX0_RES_CODE_LANE_OFFSET_RX	TX_OFF(0, 0x40)
#define QSERDES_TX0_TRAN_DRVR_EMP_EN		TX_OFF(0, 0xC0)

#define QSERDES_TX1_PWM_GEAR_1_DIVIDER_BAND0_1	TX_OFF(1, 0x178)
#define QSERDES_TX1_PWM_GEAR_2_DIVIDER_BAND0_1	TX_OFF(1, 0x17C)
#define QSERDES_TX1_PWM_GEAR_3_DIVIDER_BAND0_1	TX_OFF(1, 0x180)
#define QSERDES_TX1_PWM_GEAR_4_DIVIDER_BAND0_1	TX_OFF(1, 0x184)
#define QSERDES_TX1_LANE_MODE_1			TX_OFF(1, 0x84)
#define QSERDES_TX1_LANE_MODE_3			TX_OFF(1, 0x8C)
#define QSERDES_TX1_RES_CODE_LANE_OFFSET_TX	TX_OFF(1, 0x3C)
#define QSERDES_TX1_RES_CODE_LANE_OFFSET_RX	TX_OFF(1, 0x40)
#define QSERDES_TX1_TRAN_DRVR_EMP_EN		TX_OFF(1, 0xC0)

/* UFS PHY RX registers */
#define QSERDES_RX0_SIGDET_LVL				RX_OFF(0, 0x120)
#define QSERDES_RX0_SIGDET_CNTRL			RX_OFF(0, 0x11C)
#define QSERDES_RX0_SIGDET_DEGLITCH_CNTRL		RX_OFF(0, 0x124)
#define QSERDES_RX0_RX_BAND				RX_OFF(0, 0x128)
#define QSERDES_RX0_UCDR_FASTLOCK_FO_GAIN		RX_OFF(0, 0x30)
#define QSERDES_RX0_UCDR_SO_SATURATION_AND_ENABLE	RX_OFF(0, 0x34)
#define QSERDES_RX0_UCDR_PI_CONTROLS			RX_OFF(0, 0x44)
#define QSERDES_RX0_UCDR_FASTLOCK_COUNT_LOW		RX_OFF(0, 0x3C)
#define QSERDES_RX0_UCDR_PI_CTRL2			RX_OFF(0, 0x48)
#define QSERDES_RX0_RX_TERM_BW				RX_OFF(0, 0x80)
#define QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL1		RX_OFF(0, 0xE8)
#define QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL2		RX_OFF(0, 0xEC)
#define QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL3		RX_OFF(0, 0xF0)
#define QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL4		RX_OFF(0, 0xF4)
#define QSERDES_RX0_RX_EQ_OFFSET_ADAPTOR_CNTRL1		RX_OFF(0, 0x110)
#define QSERDES_RX0_RX_OFFSET_ADAPTOR_CNTRL2		RX_OFF(0, 0x114)
#define QSERDES_RX0_RX_IDAC_MEASURE_TIME		RX_OFF(0, 0x100)
#define QSERDES_RX0_RX_IDAC_TSETTLE_LOW			RX_OFF(0, 0xF8)
#define QSERDES_RX0_RX_IDAC_TSETTLE_HIGH		RX_OFF(0, 0xFC)
#define QSERDES_RX0_RX_MODE_00_LOW			RX_OFF(0, 0x15C)
#define QSERDES_RX0_RX_MODE_00_HIGH			RX_OFF(0, 0x160)
#define QSERDES_RX0_RX_MODE_00_HIGH2			RX_OFF(0, 0x164)
#define QSERDES_RX0_RX_MODE_00_HIGH3			RX_OFF(0, 0x168)
#define QSERDES_RX0_RX_MODE_00_HIGH4			RX_OFF(0, 0x16C)
#define QSERDES_RX0_RX_MODE_01_LOW			RX_OFF(0, 0x170)
#define QSERDES_RX0_RX_MODE_01_HIGH			RX_OFF(0, 0x174)
#define QSERDES_RX0_RX_MODE_01_HIGH2			RX_OFF(0, 0x178)
#define QSERDES_RX0_RX_MODE_01_HIGH3			RX_OFF(0, 0x17C)
#define QSERDES_RX0_RX_MODE_01_HIGH4			RX_OFF(0, 0x180)
#define QSERDES_RX0_RX_MODE_10_LOW			RX_OFF(0, 0x184)
#define QSERDES_RX0_RX_MODE_10_HIGH			RX_OFF(0, 0x188)
#define QSERDES_RX0_RX_MODE_10_HIGH2			RX_OFF(0, 0x18C)
#define QSERDES_RX0_RX_MODE_10_HIGH3			RX_OFF(0, 0x190)
#define QSERDES_RX0_RX_MODE_10_HIGH4			RX_OFF(0, 0x194)
#define QSERDES_RX0_DCC_CTRL1				RX_OFF(0, 0x1A8)
#define QSERDES_RX0_GM_CAL				RX_OFF(0, 0xDC)
#define QSERDES_RX0_AC_JTAG_ENABLE			RX_OFF(0, 0x68)
#define QSERDES_RX0_UCDR_FO_GAIN			RX_OFF(0, 0x08)
#define QSERDES_RX0_UCDR_SO_GAIN			RX_OFF(0, 0x14)
#define QSERDES_RX0_RX_INTERFACE_MODE			RX_OFF(0, 0x134)

#define QSERDES_RX1_SIGDET_LVL				RX_OFF(1, 0x120)
#define QSERDES_RX1_SIGDET_CNTRL			RX_OFF(1, 0x11C)
#define QSERDES_RX1_SIGDET_DEGLITCH_CNTRL		RX_OFF(1, 0x124)
#define QSERDES_RX1_RX_BAND				RX_OFF(1, 0x128)
#define QSERDES_RX1_UCDR_FASTLOCK_FO_GAIN		RX_OFF(1, 0x30)
#define QSERDES_RX1_UCDR_SO_SATURATION_AND_ENABLE	RX_OFF(1, 0x34)
#define QSERDES_RX1_UCDR_PI_CONTROLS			RX_OFF(1, 0x44)
#define QSERDES_RX1_UCDR_FASTLOCK_COUNT_LOW		RX_OFF(1, 0x3C)
#define QSERDES_RX1_UCDR_PI_CTRL2			RX_OFF(1, 0x48)
#define QSERDES_RX1_RX_TERM_BW				RX_OFF(1, 0x80)
#define QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL1		RX_OFF(1, 0xE8)
#define QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL2		RX_OFF(1, 0xEC)
#define QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL3		RX_OFF(1, 0xF0)
#define QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL4		RX_OFF(1, 0xF4)
#define QSERDES_RX1_RX_EQ_OFFSET_ADAPTOR_CNTRL1		RX_OFF(1, 0x110)
#define QSERDES_RX1_RX_OFFSET_ADAPTOR_CNTRL2		RX_OFF(1, 0x114)
#define QSERDES_RX1_RX_IDAC_MEASURE_TIME		RX_OFF(1, 0x100)
#define QSERDES_RX1_RX_IDAC_TSETTLE_LOW			RX_OFF(1, 0xF8)
#define QSERDES_RX1_RX_IDAC_TSETTLE_HIGH		RX_OFF(1, 0xFC)
#define QSERDES_RX1_RX_MODE_00_LOW			RX_OFF(1, 0x15C)
#define QSERDES_RX1_RX_MODE_00_HIGH			RX_OFF(1, 0x160)
#define QSERDES_RX1_RX_MODE_00_HIGH2			RX_OFF(1, 0x164)
#define QSERDES_RX1_RX_MODE_00_HIGH3			RX_OFF(1, 0x168)
#define QSERDES_RX1_RX_MODE_00_HIGH4			RX_OFF(1, 0x16C)
#define QSERDES_RX1_RX_MODE_01_LOW			RX_OFF(1, 0x170)
#define QSERDES_RX1_RX_MODE_01_HIGH			RX_OFF(1, 0x174)
#define QSERDES_RX1_RX_MODE_01_HIGH2			RX_OFF(1, 0x178)
#define QSERDES_RX1_RX_MODE_01_HIGH3			RX_OFF(1, 0x17C)
#define QSERDES_RX1_RX_MODE_01_HIGH4			RX_OFF(1, 0x180)
#define QSERDES_RX1_RX_MODE_10_LOW			RX_OFF(1, 0x184)
#define QSERDES_RX1_RX_MODE_10_HIGH			RX_OFF(1, 0x188)
#define QSERDES_RX1_RX_MODE_10_HIGH2			RX_OFF(1, 0x18C)
#define QSERDES_RX1_RX_MODE_10_HIGH3			RX_OFF(1, 0x190)
#define QSERDES_RX1_RX_MODE_10_HIGH4			RX_OFF(1, 0x194)
#define QSERDES_RX1_DCC_CTRL1				RX_OFF(1, 0x1A8)
#define QSERDES_RX1_GM_CAL				RX_OFF(1, 0xDC)
#define QSERDES_RX1_AC_JTAG_ENABLE			RX_OFF(1, 0x68)
#define QSERDES_RX1_UCDR_FO_GAIN			RX_OFF(1, 0x08)
#define QSERDES_RX1_UCDR_SO_GAIN			RX_OFF(1, 0x14)
#define QSERDES_RX1_RX_INTERFACE_MODE			RX_OFF(1, 0x134)

#define UFS_PHY_RX_LINECFG_DISABLE_BIT		BIT(1)
#define QSERDES_RX_INTERFACE_MODE_CLOCK_EDGE_BIT	BIT(5)

/*
 * This structure represents the v4 specific phy.
 * common_cfg MUST remain the first field in this structure
 * in case extra fields are added. This way, when calling
 * get_ufs_qcom_phy() of generic phy, we can extract the
 * common phy structure (struct ufs_qcom_phy) out of it
 * regardless of the relevant specific phy.
 */
struct ufs_qcom_phy_qmp_v4 {
	struct ufs_qcom_phy common_cfg;
};

static struct ufs_qcom_phy_calibration phy_cal_table_rate_A[] = {
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_POWER_DOWN_CONTROL, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_SYSCLK_EN_SEL, 0xD9),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_HSCLK_SEL, 0x11),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_HSCLK_HS_SWITCH_SEL, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP_EN, 0x42),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_MAP, 0x02),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_IVCO, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_INITVAL2, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BIN_VCOCAL_HSCLK_SEL, 0x11),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DEC_START_MODE0, 0x82),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CP_CTRL_MODE0, 0x14),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_RCTRL_MODE0, 0x18),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CCTRL_MODE0, 0x18),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP1_MODE0, 0xFF),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP2_MODE0, 0x19),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BIN_VCOCAL_CMP_CODE1_MODE0, 0xAC),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BIN_VCOCAL_CMP_CODE2_MODE0, 0x1E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DEC_START_MODE1, 0x98),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CP_CTRL_MODE1, 0x14),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_RCTRL_MODE1, 0x18),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CCTRL_MODE1, 0x18),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP1_MODE1, 0x65),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP2_MODE1, 0x1E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BIN_VCOCAL_CMP_CODE1_MODE1, 0xDD),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BIN_VCOCAL_CMP_CODE2_MODE1, 0x23),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_PWM_GEAR_1_DIVIDER_BAND0_1, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_PWM_GEAR_2_DIVIDER_BAND0_1, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_PWM_GEAR_3_DIVIDER_BAND0_1, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_PWM_GEAR_4_DIVIDER_BAND0_1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_LANE_MODE_1, 0xE5),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_LANE_MODE_3, 0x3F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_RES_CODE_LANE_OFFSET_TX, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_RES_CODE_LANE_OFFSET_RX, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_TRAN_DRVR_EMP_EN, 0x0C),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_SIGDET_LVL, 0x24),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_SIGDET_CNTRL, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_SIGDET_DEGLITCH_CNTRL, 0x1E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_BAND, 0x18),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_FASTLOCK_FO_GAIN, 0x0A),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_SO_SATURATION_AND_ENABLE, 0x5A),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_PI_CONTROLS, 0xF1),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_FASTLOCK_COUNT_LOW, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_PI_CTRL2, 0x81),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_FO_GAIN, 0x0E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_SO_GAIN, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_TERM_BW, 0x6F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL1, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL2, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL3, 0x4A),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL4, 0x0A),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_EQ_OFFSET_ADAPTOR_CNTRL1, 0x17),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_OFFSET_ADAPTOR_CNTRL2, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_IDAC_MEASURE_TIME, 0x20),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_IDAC_TSETTLE_LOW, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_IDAC_TSETTLE_HIGH, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_00_LOW, 0xBF),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_00_HIGH, 0xBF),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_00_HIGH2, 0x7F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_00_HIGH3, 0x7F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_00_HIGH4, 0x2D),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_01_LOW, 0x6D),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_01_HIGH, 0x6D),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_01_HIGH2, 0xED),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_01_HIGH3, 0x3B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_01_HIGH4, 0x3C),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_10_LOW, 0xE0),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_10_HIGH, 0xC8),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_10_HIGH2, 0xC8),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_10_HIGH3, 0x3B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_10_HIGH4, 0xB7),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_DCC_CTRL1, 0x0C),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_GM_CAL, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_SIGDET_CTRL2, 0x6D),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_LARGE_AMP_DRV_LVL, 0x0A),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_SMALL_AMP_DRV_LVL, 0x02),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_MID_TERM_CTRL1, 0x43),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_DEBUG_BUS_CLKSEL, 0x1F),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_MIN_HIBERN8_TIME, 0xFF),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_BIST_FIXED_PAT_CTRL, 0x0A),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_SIGDET_CTRL1, 0x0E),
};

static struct ufs_qcom_phy_calibration phy_cal_table_rate_A_no_g4[] = {
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_POWER_DOWN_CONTROL, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_SYSCLK_EN_SEL, 0xD9),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_HSCLK_SEL, 0x11),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_HSCLK_HS_SWITCH_SEL, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP_EN, 0x42),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_MAP, 0x02),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_IVCO, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_INITVAL2, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BIN_VCOCAL_HSCLK_SEL, 0x11),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DEC_START_MODE0, 0x82),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CP_CTRL_MODE0, 0x14),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_RCTRL_MODE0, 0x18),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CCTRL_MODE0, 0x18),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP1_MODE0, 0xFF),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP2_MODE0, 0x19),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BIN_VCOCAL_CMP_CODE1_MODE0, 0xAC),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BIN_VCOCAL_CMP_CODE2_MODE0, 0x1E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DEC_START_MODE1, 0x98),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CP_CTRL_MODE1, 0x14),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_RCTRL_MODE1, 0x18),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CCTRL_MODE1, 0x18),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP1_MODE1, 0x65),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP2_MODE1, 0x1E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BIN_VCOCAL_CMP_CODE1_MODE1, 0xDD),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BIN_VCOCAL_CMP_CODE2_MODE1, 0x23),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_PWM_GEAR_1_DIVIDER_BAND0_1, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_PWM_GEAR_2_DIVIDER_BAND0_1, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_PWM_GEAR_3_DIVIDER_BAND0_1, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_PWM_GEAR_4_DIVIDER_BAND0_1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_LANE_MODE_1, 0xF5),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_LANE_MODE_3, 0x3F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_RES_CODE_LANE_OFFSET_TX, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_RES_CODE_LANE_OFFSET_RX, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_TRAN_DRVR_EMP_EN, 0x0C),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_SIGDET_LVL, 0x24),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_SIGDET_CNTRL, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_SIGDET_DEGLITCH_CNTRL, 0x1E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_BAND, 0x18),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_FASTLOCK_FO_GAIN, 0x0A),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_SO_SATURATION_AND_ENABLE, 0x5A),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_PI_CONTROLS, 0xF1),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_FASTLOCK_COUNT_LOW, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_PI_CTRL2, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_FO_GAIN, 0x0E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_SO_GAIN, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_TERM_BW, 0x1B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL1, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL2, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL3, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL4, 0x1A),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_EQ_OFFSET_ADAPTOR_CNTRL1, 0x17),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_OFFSET_ADAPTOR_CNTRL2, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_IDAC_MEASURE_TIME, 0x10),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_IDAC_TSETTLE_LOW, 0xC0),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_IDAC_TSETTLE_HIGH, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_00_LOW, 0x6D),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_00_HIGH, 0x6D),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_00_HIGH2, 0xED),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_00_HIGH3, 0x3B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_00_HIGH4, 0x3C),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_01_LOW, 0xE0),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_01_HIGH, 0xC8),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_01_HIGH2, 0xC8),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_01_HIGH3, 0x3B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_01_HIGH4, 0xB7),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_10_LOW, 0xE0),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_10_HIGH, 0xC8),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_10_HIGH2, 0xC8),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_10_HIGH3, 0x3B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_10_HIGH4, 0xB7),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_DCC_CTRL1, 0x0C),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_SIGDET_CTRL2, 0x6D),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_LARGE_AMP_DRV_LVL, 0x0A),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_SMALL_AMP_DRV_LVL, 0x02),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_MID_TERM_CTRL1, 0x43),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_DEBUG_BUS_CLKSEL, 0x1F),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_MIN_HIBERN8_TIME, 0xFF),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_PLL_CNTL, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TIMER_20US_CORECLK_STEPS_MSB, 0x16),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TIMER_20US_CORECLK_STEPS_LSB, 0xD8),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_PWM_GEAR_BAND, 0xAA),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_HS_GEAR_BAND, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_HSGEAR_CAPABILITY, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_HSGEAR_CAPABILITY, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_SIGDET_CTRL1, 0x0E),
};

static struct ufs_qcom_phy_calibration phy_cal_table_2nd_lane[] = {
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_PWM_GEAR_1_DIVIDER_BAND0_1, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_PWM_GEAR_2_DIVIDER_BAND0_1, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_PWM_GEAR_3_DIVIDER_BAND0_1, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_PWM_GEAR_4_DIVIDER_BAND0_1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_LANE_MODE_1, 0xE5),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_LANE_MODE_3, 0x3F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_RES_CODE_LANE_OFFSET_TX, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_RES_CODE_LANE_OFFSET_RX, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_TRAN_DRVR_EMP_EN, 0x0C),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_SIGDET_LVL, 0x24),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_SIGDET_CNTRL, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_SIGDET_DEGLITCH_CNTRL, 0x1E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_BAND, 0x18),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_FASTLOCK_FO_GAIN, 0x0A),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_SO_SATURATION_AND_ENABLE, 0x5A),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_PI_CONTROLS, 0xF1),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_FASTLOCK_COUNT_LOW, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_PI_CTRL2, 0x81),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_FO_GAIN, 0x0E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_SO_GAIN, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_TERM_BW, 0x6F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL1, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL2, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL3, 0x4A),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL4, 0x0A),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_EQ_OFFSET_ADAPTOR_CNTRL1, 0x17),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_OFFSET_ADAPTOR_CNTRL2, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_IDAC_MEASURE_TIME, 0x20),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_IDAC_TSETTLE_LOW, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_IDAC_TSETTLE_HIGH, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_00_LOW, 0xBF),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_00_HIGH, 0xBF),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_00_HIGH2, 0x7F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_00_HIGH3, 0x7F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_00_HIGH4, 0x2D),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_01_LOW, 0x6D),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_01_HIGH, 0x6D),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_01_HIGH2, 0xED),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_01_HIGH3, 0x3B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_01_HIGH4, 0x3C),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_10_LOW, 0xE0),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_10_HIGH, 0xC8),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_10_HIGH2, 0xC8),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_10_HIGH3, 0x3B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_10_HIGH4, 0xB7),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_DCC_CTRL1, 0x0C),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_GM_CAL, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_MULTI_LANE_CTRL1, 0x02),
};

static struct ufs_qcom_phy_calibration phy_cal_table_2nd_lane_no_g4[] = {
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_PWM_GEAR_1_DIVIDER_BAND0_1, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_PWM_GEAR_2_DIVIDER_BAND0_1, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_PWM_GEAR_3_DIVIDER_BAND0_1, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_PWM_GEAR_4_DIVIDER_BAND0_1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_LANE_MODE_1, 0xF5),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_LANE_MODE_3, 0x3F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_RES_CODE_LANE_OFFSET_TX, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_RES_CODE_LANE_OFFSET_RX, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_TRAN_DRVR_EMP_EN, 0x0C),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_SIGDET_LVL, 0x24),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_SIGDET_CNTRL, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_SIGDET_DEGLITCH_CNTRL, 0x1E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_BAND, 0x18),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_FASTLOCK_FO_GAIN, 0x0A),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_SO_SATURATION_AND_ENABLE, 0x5A),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_PI_CONTROLS, 0xF1),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_FASTLOCK_COUNT_LOW, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_PI_CTRL2, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_FO_GAIN, 0x0E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_SO_GAIN, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_TERM_BW, 0x1B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL1, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL2, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL3, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL4, 0x1A),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_EQ_OFFSET_ADAPTOR_CNTRL1, 0x17),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_OFFSET_ADAPTOR_CNTRL2, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_IDAC_MEASURE_TIME, 0x10),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_IDAC_TSETTLE_LOW, 0xC0),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_IDAC_TSETTLE_HIGH, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_00_LOW, 0x6D),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_00_HIGH, 0x6D),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_00_HIGH2, 0xED),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_00_HIGH3, 0x3B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_00_HIGH4, 0x3C),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_01_LOW, 0xE0),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_01_HIGH, 0xC8),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_01_HIGH2, 0xC8),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_01_HIGH3, 0x3B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_01_HIGH4, 0xB7),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_10_LOW, 0xE0),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_10_HIGH, 0xC8),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_10_HIGH2, 0xC8),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_10_HIGH3, 0x3B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_10_HIGH4, 0xB7),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_DCC_CTRL1, 0x0C),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_MULTI_LANE_CTRL1, 0x02),
};

static struct ufs_qcom_phy_calibration phy_cal_table_rate_B[] = {
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_MAP, 0x06),
};

#endif
