/*
 * drivers/video/sunxi/disp2/disp/de/lowlevel_v2x/de_vep_table.c
 *
 * Copyright (c) 2007-2019 Allwinnertech Co., Ltd.
 * Author: zhengxiaobin <zhengxiaobin@allwinnertech.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#include "de_vep_table.h"

int y2r[192] = {
	/* bt601 */
	0x000012A0, 0x0, 0x00000000, 0x0, 0x00001989, 0x0, 0xFFF21168,
	    0xFFFFFFFF, 0x000012A0, 0x0, 0xFFFFF9BE, 0xFFFFFFFF, 0xFFFFF2FE,
	    0xFFFFFFFF, 0x000877CF, 0x0,
	0x000012A0, 0x0, 0x0000204A, 0x0, 0x00000000, 0x0, 0xFFEEB127,
	    0xFFFFFFFF, 0x00000000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0,
	    0x00001000, 0x0,

	/* bt709 */
	0x000012A0, 0x0, 0x00000000, 0x0, 0x00001CB0, 0x0, 0xFFF07DF4,
	    0xFFFFFFFF, 0x000012A0, 0x0, 0xfffffC98, 0xFFFFFFFF, 0xfffff775,
	    0xFFFFFFFF, 0x0004CFDF, 0x0,
	0x000012A0, 0x0, 0x000021D7, 0x0, 0x00000000, 0x0, 0xFFEDEA7F,
	    0xFFFFFFFF, 0x00000000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0,
	    0x00001000, 0x0,

	/* ycc */
	0x00001000, 0x0, 0x00000000, 0x0, 0x0000166F, 0x0, 0xFFF4C84B,
	    0xFFFFFFFF, 0x00001000, 0x0, 0xFFFFFA78, 0xFFFFFFFF, 0xFFFFF491,
	    0xFFFFFFFF, 0x00087B16, 0x0,
	0x00001000, 0x0, 0x00001C56, 0x0, 0x00000000, 0x0, 0xFFF1D4FE,
	    0xFFFFFFFF, 0x00000000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0,
	    0x00001000, 0x0,

	/* ehance */
	0x00001000, 0x0, 0x00000000, 0x0, 0x00001933, 0x0, 0xFFF36666,
	    0xFFFFFFFF, 0x00001000, 0x0, 0xFFFFFD02, 0xFFFFFFFF, 0xFFFFF883,
	    0xFFFFFFFF, 0x00053D71, 0x0,
	0x00001000, 0x0, 0x00001DB2, 0x0, 0x00000000, 0x0, 0xFFF126E9,
	    0xFFFFFFFF, 0x00000000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0,
	    0x00001000, 0x0,

	/* bt601 studio */
	0x00001000, 0x0, 0x00000000, 0x0, 0x000015F0, 0x0, 0xFFF50831,
	    0xFFFFFFFF, 0x00001000, 0x0, 0xFFFFFAA0, 0xFFFFFFFF, 0xFFFFF4FA,
	    0xFFFFFFFF, 0x00083333, 0x0,
	0x00001000, 0x0, 0x00001BB6, 0x0, 0x00000000, 0x0, 0xFFF224DD,
	    0xFFFFFFFF, 0x00000000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0,
	    0x00001000, 0x0,

	/* bt709 studio */
	0x00001000, 0x0, 0x00000000, 0x0, 0x000018A4, 0x0, 0xFFF3AE14,
	    0xFFFFFFFF, 0x00001000, 0x0, 0xFFFFFD12, 0xFFFFFFFF, 0xFFFFF8A8,
	    0xFFFFFFFF, 0x000522D1, 0x0,
	0x00001000, 0x0, 0x00001D0E, 0x0, 0x00000000, 0x0, 0xFFF178D5,
	    0xFFFFFFFF, 0x00000000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0,
	    0x00001000, 0x0,

};

int r2y[128] = {
	/* bt601 */
	0x0000041D, 0x0, 0x00000810, 0x0, 0x00000191, 0x0, 0x00010000, 0x0,
	    0xFFFFFDA2, 0xFFFFFFFF, 0xFFFFFB58, 0xFFFFFFFF, 0x00000706, 0x0,
	    0x00080000, 0x0,
	0x00000706, 0x0, 0xFFFFFA1D, 0xFFFFFFFF, 0xFFFFFEDD, 0xFFFFFFFF,
	    0x00080000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0,
	    0x00001000, 0x0,

	/* bt709 */
	0x000002EE, 0x0, 0x000009D3, 0x0, 0x000000FE, 0x0, 0x00010000, 0x0,
	    0xfffffe62, 0xFFFFFFFF, 0xfffffA98, 0xFFFFFFFF, 0x00000706, 0x0,
	    0x00080000, 0x0,
	0x00000706, 0x0, 0xfffff99E, 0xFFFFFFFF, 0xffffff5C, 0xFFFFFFFF,
	    0x00080000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0,
	    0x00001000, 0x0,

	/* ycc */
	0x000004C8, 0x0, 0x00000963, 0x0, 0x000001D5, 0x0, 0x00000000, 0x0,
	    0xFFFFFD4D, 0xFFFFFFFF, 0xFFFFFAB3, 0xFFFFFFFF, 0x00000800, 0x0,
	    0x00080000, 0x0,
	0x00000800, 0x0, 0xFFFFF94F, 0xFFFFFFFF, 0xFFFFFEB2, 0xFFFFFFFF,
	    0x00080000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0,
	    0x00001000, 0x0,

	/* ehance */
	0x00000368, 0x0, 0x00000B71, 0x0, 0x00000127, 0x0, 0x00000000, 0x0,
	    0xFFFFFE29, 0xFFFFFFFF, 0xFFFFF9D7, 0xFFFFFFFF, 0x00000800, 0x0,
	    0x00080000, 0x0,
	0x00000800, 0x0, 0xFFFFF8BC, 0xFFFFFFFF, 0xFFFFFF44, 0xFFFFFFFF,
	    0x00080000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0,
	    0x00001000, 0x0,
};

int y2y[64] = {
	/* bt601 to bt709 */
	0x00001000, 0x0, 0xFFFFFE27, 0xFFFFFFFF, 0xFFFFFCAC, 0xFFFFFFFF,
	    0x00029681, 0x0, 0x00000000, 0x0, 0x0000104C, 0x0, 0x000001D5, 0x0,
	    0xFFFEEF17, 0xFFFFFFFF,
	0x00000000, 0x0, 0x00000133, 0x0, 0x00001068, 0x0, 0xFFFF326E,
	    0xFFFFFFFF, 0x00000000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0,
	    0x00001000, 0x0,

	/* bt709 to bt601 */
	0x00001000, 0x0, 0x00000197, 0x0, 0x00000311, 0x0, 0xFFFDAC02,
	    0xFFFFFFFF, 0x00000000, 0x0, 0x00000FD6, 0x0, 0xFFFFFE3B,
	    0xFFFFFFFF, 0x0000F765, 0x0,
	0x00000000, 0x0, 0xFFFFFED7, 0xFFFFFFFF, 0x00000FBC, 0x0, 0x0000B663,
	    0x0, 0x00000000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0, 0x00001000,
	    0x0,
};

int r2r[32] = {
	/* 0-255 to 16-235 */
	0x00000DC0, 0x0, 0x00000000, 0x0, 0x00000000, 0x0, 0x00010000, 0x0,
	    0x00000000, 0x0, 0x00000DC0, 0x0, 0x00000000, 0x0, 0x00010000, 0x0,
	0x00000000, 0x0, 0x00000000, 0x0, 0x00000DC0, 0x0, 0x00010000, 0x0,
	    0x00000000, 0x0, 0x00000000, 0x0, 0x00000000, 0x0, 0x00001000, 0x0,
};

int bypass_csc[12] = {
	0x00000400, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000400,
	    0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000400, 0x00000000,
};

unsigned int sin_cos[128] = {
	/* sin table */
	0xffffffbd, 0xffffffbf, 0xffffffc1, 0xffffffc2, 0xffffffc4, 0xffffffc6,
	    0xffffffc8, 0xffffffca,
	0xffffffcc, 0xffffffce, 0xffffffd1, 0xffffffd3, 0xffffffd5, 0xffffffd7,
	    0xffffffd9, 0xffffffdb,
	0xffffffdd, 0xffffffdf, 0xffffffe2, 0xffffffe4, 0xffffffe6, 0xffffffe8,
	    0xffffffea, 0xffffffec,
	0xffffffef, 0xfffffff1, 0xfffffff3, 0xfffffff5, 0xfffffff8, 0xfffffffa,
	    0xfffffffc, 0xfffffffe,
	0x00000000, 0x00000002, 0x00000004, 0x00000006, 0x00000008, 0x0000000b,
	    0x0000000d, 0x0000000f,
	0x00000011, 0x00000014, 0x00000016, 0x00000018, 0x0000001a, 0x0000001c,
	    0x0000001e, 0x00000021,
	0x00000023, 0x00000025, 0x00000027, 0x00000029, 0x0000002b, 0x0000002d,
	    0x0000002f, 0x00000032,
	0x00000034, 0x00000036, 0x00000038, 0x0000003a, 0x0000003c, 0x0000003e,
	    0x0000003f, 0x00000041,
	/* cos table */
	0x0000006c, 0x0000006d, 0x0000006e, 0x0000006f, 0x00000071, 0x00000072,
	    0x00000073, 0x00000074,
	0x00000074, 0x00000075, 0x00000076, 0x00000077, 0x00000078, 0x00000079,
	    0x00000079, 0x0000007a,
	0x0000007b, 0x0000007b, 0x0000007c, 0x0000007c, 0x0000007d, 0x0000007d,
	    0x0000007e, 0x0000007e,
	0x0000007e, 0x0000007f, 0x0000007f, 0x0000007f, 0x0000007f, 0x0000007f,
	    0x0000007f, 0x0000007f,
	0x00000080, 0x0000007f, 0x0000007f, 0x0000007f, 0x0000007f, 0x0000007f,
	    0x0000007f, 0x0000007f,
	0x0000007e, 0x0000007e, 0x0000007e, 0x0000007d, 0x0000007d, 0x0000007c,
	    0x0000007c, 0x0000007b,
	0x0000007b, 0x0000007a, 0x00000079, 0x00000079, 0x00000078, 0x00000077,
	    0x00000076, 0x00000075,
	0x00000074, 0x00000074, 0x00000073, 0x00000072, 0x00000071, 0x0000006f,
	    0x0000006e, 0x0000006d
};

int fcc_range_gain[6] = {
	0x01550eaa, 0x070503f3, 0x0bdd084f, 0x0a000705,
	0x0eaa0bdd, 0x03330155
};

unsigned char ce_bypass_lut[256] = {
	0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
	16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
	32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
	48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63,
	64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
	80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,
	96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110,
	    111,
	112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125,
	    126, 127,
	128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141,
	    142, 143,
	144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157,
	    158, 159,
	160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173,
	    174, 175,
	176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189,
	    190, 191,
	192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205,
	    206, 207,
	208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221,
	    222, 223,
	224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237,
	    238, 239,
	240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253,
	    254, 255
};
unsigned char ce_constant_lut[256] = {
	0, 1, 1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 10, 10, 11,
	12, 14, 15, 16, 17, 19, 20, 21, 22, 24, 25, 26, 27, 29, 30, 31,
	32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
	48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63,
	64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
	80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,
	96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110,
	    111,
	112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125,
	    126, 127,
	128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141,
	    142, 143,
	144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157,
	    158, 159,
	160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173,
	    174, 175,
	176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189,
	    190, 191,
	192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205,
	    206, 207,
	208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221,
	    222, 223,
	225, 226, 228, 229, 231, 232, 234, 235, 237, 238, 240, 241, 243, 244,
	    246, 247,
	248, 248, 249, 249, 250, 250, 251, 251, 252, 252, 253, 253, 254, 254,
	    255, 255,
};
