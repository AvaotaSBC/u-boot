/* SPDX-License-Identifier: GPL-2.0-or-later */
/* Copyright(c) 2020 - 2023 Allwinner Technology Co.,Ltd. All rights reserved. */
/*
* Allwinner SoCs display driver.
*
* Copyright (C) 2023 Allwinner.
*
* This file is licensed under the terms of the GNU General Public
* License version 2.  This program is licensed "as is" without any
* warranty of any kind, whether express or implied.
*/

#ifndef _DE_WB_TYPE_H_
#define _DE_WB_TYPE_H_

#include "linux/types.h"

union wb_start_reg {
	u32 dwval;
	struct {
		u32 wb_start:1;
		u32 res0:3;
		u32 soft_reset:1;
		u32 res1:23;
		u32 auto_gate_en:1;
		u32 clk_gate:1;
		u32 res2:2;
	} bits;
};

union wb_gctrl_reg {
	u32 dwval;
	struct {
		u32 wb_en:1;
		u32 res0:3;
		u32 soft_reset:1;
		u32 res1:23;
		u32 auto_gate_en:1;
		u32 clk_gate:1;
		u32 res2:2;
	} bits;
};

union wb_size_reg {
	u32 dwval;
	struct {
		u32 width:13;
		u32 res0:3;
		u32 height:13;
		u32 res1:3;
	} bits;
};

union wb_crop_coord_reg {
	u32 dwval;
	struct {
		u32 crop_left:13;
		u32 res0:3;
		u32 crop_top:13;
		u32 res1:3;
	} bits;
};

union wb_crop_size_reg {
	u32 dwval;
	struct {
		u32 crop_width:13;
		u32 res0:3;
		u32 crop_height:13;
		u32 res1:3;
	} bits;
};

union wb_addr_reg {
	u32 dwval;
	struct {
		u32 addr:32;
	} bits;
};

union wb_high_addr_reg {
	u32 dwval;
	struct {
		u32 ch0_h_addr:8;
		u32 ch1_h_addr:8;
		u32 ch2_h_addr:8;
		u32 res0:8;
	} bits;
};

union wb_pitch_reg {
	u32 dwval;
	struct {
		u32 pitch:32;
	} bits;
};

union wb_addr_switch_reg {
	u32 dwval;
	struct {
		u32 cur_group:1;
		u32 res0:15;
		u32 auto_switch:1;
		u32 res1:3;
		u32 manual_group:1;
		u32 res2:11;
	} bits;
};

union wb_format_reg {
	u32 dwval;
	struct {
		u32 format:4;
		u32 out_bit:1;
		u32 res0:27;
	} bits;
};

union wb_int_reg {
	u32 dwval;
	struct {
		u32 int_en:1;
		u32 res0:31;
	} bits;
};

union wb_status_reg {
	u32 dwval;
	struct {
		u32 irq:1; /* wb end flag */
		u32 res0:3;
		u32 finish:1;
		u32 overflow:1;
		u32 timeout:1;
		u32 res1:1;
		u32 busy:1;
		u32 res2:23;
	} bits;
};

union wb_sftm_reg {
	u32 dwval;
	struct {
		/* vsync width in slef timing control mode */
		u32 sftm_vs:10;
		u32 res0:22;
	} bits;
};

union wb_bwc_reg {
	u32 dwval;
	struct {
		/* vsync width in slef timing control mode */
		u32 bwc_pos_num:5;
		u32 res0:26;
		u32 bwc_en:1;
	} bits;
};


union wb_bypass_reg {
	u32 dwval;
	struct {
		u32 res0:1;
		u32 cs_en:1;
		u32 fs_en:1;
		u32 res1:29;
	} bits;
};

union wb_cs_reg {
	u32 dwval;
	struct {
		u32 m:13;
		u32 res0:3;
		u32 n:13;
		u32 res1:3;
	} bits;
};

union wb_fs_size_reg {
	u32 dwval;
	struct {
		u32 width:13;
		u32 res0:3;
		u32 height:13;
		u32 res1:3;
	} bits;
};

union wb_fs_step_reg {
	u32 dwval;
	struct {
		u32 res0:2;
		u32 frac:18;
		u32 intg:2;
		u32 res1:10;
	} bits;
};

union wb_csc_ctl_reg {
	u32 dwval;
	struct {
		u32 en:1;
		u32 res0:31;
	} bits;
};

union wb_csc_const_reg {
	u32 dwval;
	struct {
		u32 d:10;
		u32 res0:22;
	} bits;
};

union wb_csc_coeff_reg {
	u32 dwval;
	struct {
		u32 c:20;
		u32 res0:12;
	} bits;
};

union wb_coeff_reg {
	u32 dwval;
	struct {
		u32 coef0:8;
		u32 coef1:8;
		u32 coef2:8;
		u32 coef3:8;
	} bits;
};

union wb_eink_ctl_reg_t {
	unsigned int dwval;
	struct {
		unsigned int wb_eink_en		:1;/* default: 0x0; */
		unsigned int win_en		:1;/* default: 0x0; */
		unsigned int panel_bit_mode	:2;/* default: 0x0; */
		unsigned int dither_mode	:4;/* default: 0x0; */
		unsigned int a2_mode		:1;/* default: 0x0; */
		unsigned int a16_gray		:1;/* default: 0x0; */
		unsigned int res0		:22;/* default:  */
	} bits;
};

union wb_eink_in_pitch_reg_t {
	unsigned int dwval;
	struct {
		unsigned int pitch		:16;/* default: 0x0; */
		unsigned int res0		:16;/* default:  */
	} bits;
};

union wb_eink_in_laddr_reg_t {
	unsigned int dwval;
	struct {
		unsigned int in_laddr		:32;/* default: 0x0; */
	} bits;
};

union wb_eink_in_haddr_reg_t {
	unsigned int dwval;
	struct {
		unsigned int in_haddr		:8;/* default: 0x0; */
		unsigned int r0			:24;/* default: 0x0; */
	} bits;
};

union wb_eink_upd_win0_reg_t {
	unsigned int dwval;
	struct {
		unsigned int win_left		:12;/* default: 0x0; */
		unsigned int res0		:4;
		unsigned int win_top		:12;
		unsigned int res1		:4;
	} bits;
};

union wb_eink_upd_win1_reg_t {
	unsigned int dwval;
	struct {
		unsigned int win_right		:12;/* default: 0x0; */
		unsigned int res0		:4;
		unsigned int win_bottom		:12;
		unsigned int res1		:4;
	} bits;
};

union wb_eink_hist_reg_t {
	unsigned int dwval;
	struct {
		unsigned int hist		:32;/* default: 0x0; */
	} bits;
};


struct wb_reg {
	union wb_gctrl_reg gctrl;           /* 0x0000 */
	union wb_size_reg size;             /* 0x0004 */
	union wb_crop_coord_reg crop_coord; /* 0x0008 */
	union wb_crop_size_reg crop_size;   /* 0x000c */
	union wb_addr_reg wb_addr_a0;       /* 0x0010 */
	union wb_addr_reg wb_addr_a1;       /* 0x0014 */
	union wb_addr_reg wb_addr_a2;       /* 0x0018 */
	union wb_high_addr_reg wb_addr_ah;  /* 0x001c */
	union wb_addr_reg wb_addr_b0;       /* 0x0020 */
	union wb_addr_reg wb_addr_b1;       /* 0x0024 */
	union wb_addr_reg wb_addr_b2;       /* 0x0028 */
	union wb_high_addr_reg wb_addr_bh;  /* 0x002c */
	union wb_pitch_reg wb_pitch0;       /* 0x0030 */
	union wb_pitch_reg wb_pitch1;       /* 0x0034 */
	u32 res0[2];                        /* 0x0038-0x003c */
	union wb_addr_switch_reg addr_switch;/* 0x0040 */
	union wb_format_reg fmt;            /* 0x0044 */
	union wb_int_reg intr;              /* 0x0048 */
	union wb_status_reg status;         /* 0x004c */
	union wb_sftm_reg sftm;             /* 0x0050 for de331 */
	union wb_bypass_reg bypass;         /* 0x0054 */
	union wb_bwc_reg bwc;               /* 0x0058 for de331*/
	u32 res2[5];                        /* 0x005c-0x006c */
	union wb_cs_reg cs_horz;            /* 0x0070 */
	union wb_cs_reg cs_vert;            /* 0x0074 */
	u32 res3[2];                        /* 0x0078-0x007c */
	union wb_fs_size_reg fs_insize;     /* 0x0080 */
	union wb_fs_size_reg fs_outsize;    /* 0x0084 */
	union wb_fs_step_reg fs_hstep;      /* 0x0088 */
	union wb_fs_step_reg fs_vstep;      /* 0x008c */
	union wb_csc_ctl_reg csc_ctl;       /* 0x0090 */
	union wb_csc_const_reg d0;
	union wb_csc_const_reg d1;
	union wb_csc_const_reg d2;
	union wb_csc_coeff_reg c0[4];       /* 0x00a0 */
	union wb_csc_coeff_reg c1[4];       /* 0x00b0 */
	union wb_csc_coeff_reg c2[4];       /* 0x00c0 */
	u32 res4[4];                        /* 0x00d0-0x00df */
	/*union wb_start_reg start;*/       /* 0x00e0 */
	u32 res_;                           /* 0x00e0 */
	u32 res5[19];                       /* 0x00e4-0x012c */
	union wb_eink_ctl_reg_t eink_ctl;   /*0x130*/
	u32 res6;  /*0x134*/
	union wb_eink_in_pitch_reg_t   eink_in_pitch; /* 0x0138 */
	union wb_eink_in_laddr_reg_t   eink_in_laddr;  /* 0x013c */
	union wb_eink_in_haddr_reg_t   eink_in_haddr; /* 0x0140 */
	union wb_eink_upd_win0_reg_t   eink_upd_win0; /* 0x0144 */
	union wb_eink_upd_win1_reg_t   eink_upd_win1; /* 0x0148 */
	unsigned int res7;				/* 0x014c */
	union wb_eink_hist_reg_t       eink_hist[32];	/* 0x0150-0x01cc */
	unsigned int res8[12];				/* 0x01d0-0x01fc */
	union wb_coeff_reg yhcoeff[16];     /* 0X0200-0x23c */
	u32 res9[16];                       /* 0X0240-0x27c */
	union wb_coeff_reg chcoeff[16];     /* 0X0280-0x2bc */
	u32 res10[16];                       /* 0x02c0-0x02fc */
};

#endif /* #ifndef _DE_WB_TYPE_H_ */
