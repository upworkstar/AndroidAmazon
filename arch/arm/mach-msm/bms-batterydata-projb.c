/* Copyright (C) 2012 Jeff Loucks <loucks@amazon.com>

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/mfd/pm8xxx/batterydata-lib.h>

//======================== V1 batteries

static struct single_row_lut fcc_temp_1700 = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {1720, 1719, 1721, 1721, 1717},
	.cols	= 5
};

static struct single_row_lut fcc_sf_1700 = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf_1700 = {
	.rows		= 29,
	.cols		= 5,
	.row_entries	= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.sf		= {
				{1274, 313, 100, 76, 66},
				{1274, 313, 100, 76, 66},
				{1309, 326, 105, 79, 67},
				{1264, 331, 111, 82, 69},
				{1222, 323, 116, 86, 71},
				{1228, 318, 123, 89, 73},
				{1229, 312, 133, 94, 76},
				{1238, 309, 146, 102, 81},
				{1252, 308, 137, 111, 87},
				{1282, 308, 104, 82, 70},
				{1329, 309, 102, 79, 68},
				{1392, 311, 103, 81, 69},
				{1471, 312, 105, 85, 73},
				{1569, 315, 109, 86, 75},
				{1681, 316, 113, 84, 73},
				{1817, 320, 112, 81, 69},
				{1989, 337, 111, 80, 68},
				{2206, 385, 108, 80, 69},
				{1844, 391, 106, 82, 70},
				{1904, 395, 110, 84, 71},
				{2006, 405, 114, 86, 72},
				{2119, 413, 120, 88, 73},
				{2265, 422, 126, 88, 72},
				{2555, 431, 122, 85, 71},
				{3015, 438, 116, 84, 72},
				{3688, 455, 118, 87, 77},
				{4929, 488, 130, 96, 84},
				{11873, 1032, 554, 511, 367},
				{78602, 45006, 62892, 58003, 33414}
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv_1700 = {
	.rows		= 29,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4185, 4183, 4179, 4174, 4168},
				{4102, 4117, 4118, 4116, 4113},
				{4050, 4071, 4073, 4071, 4068},
				{3989, 4022, 4031, 4030, 4027},
				{3938, 3976, 3993, 3993, 3989},
				{3904, 3939, 3960, 3959, 3955},
				{3869, 3905, 3930, 3928, 3924},
				{3839, 3874, 3901, 3901, 3897},
				{3811, 3848, 3866, 3872, 3869},
				{3790, 3825, 3828, 3828, 3826},
				{3775, 3804, 3808, 3807, 3806},
				{3761, 3787, 3792, 3792, 3790},
				{3746, 3772, 3780, 3780, 3778},
				{3731, 3759, 3770, 3769, 3767},
				{3714, 3745, 3762, 3758, 3753},
				{3695, 3730, 3751, 3745, 3731},
				{3671, 3716, 3731, 3724, 3710},
				{3639, 3702, 3700, 3693, 3679},
				{3600, 3684, 3677, 3669, 3658},
				{3588, 3678, 3675, 3668, 3656},
				{3574, 3670, 3673, 3666, 3654},
				{3558, 3658, 3670, 3662, 3649},
				{3540, 3642, 3662, 3654, 3637},
				{3517, 3618, 3639, 3629, 3603},
				{3487, 3582, 3593, 3581, 3551},
				{3447, 3531, 3528, 3516, 3482},
				{3387, 3452, 3436, 3423, 3384},
				{3282, 3321, 3284, 3271, 3222},
				{3000, 3000, 3000, 3000, 3000}
	}
};

struct bms_battery_data projb_v1_1700_data = {
	.fcc			= 1700,
	.fcc_temp_lut		= &fcc_temp_1700,
	.fcc_sf_lut		= &fcc_sf_1700,
	.pc_temp_ocv_lut	= &pc_temp_ocv_1700,
	.rbatt_sf_lut		= &rbatt_sf_1700,
	.default_rbatt_mohm	= 201
};

//======================== V2 batteries (WAG!)

static struct single_row_lut fcc_temp_2410 = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {2438, 2436, 2439, 2439, 2434},
	.cols	= 5
};

static struct single_row_lut fcc_sf_2410 = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf_2410 = {
	.rows		= 29,
	.cols		= 5,
	.row_entries	= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.sf		= {
				{1274, 313, 100, 76, 66},
				{1274, 313, 100, 76, 66},
				{1309, 326, 105, 79, 67},
				{1264, 331, 111, 82, 69},
				{1222, 323, 116, 86, 71},
				{1228, 318, 123, 89, 73},
				{1229, 312, 133, 94, 76},
				{1238, 309, 146, 102, 81},
				{1252, 308, 137, 111, 87},
				{1282, 308, 104, 82, 70},
				{1329, 309, 102, 79, 68},
				{1392, 311, 103, 81, 69},
				{1471, 312, 105, 85, 73},
				{1569, 315, 109, 86, 75},
				{1681, 316, 113, 84, 73},
				{1817, 320, 112, 81, 69},
				{1989, 337, 111, 80, 68},
				{2206, 385, 108, 80, 69},
				{1844, 391, 106, 82, 70},
				{1904, 395, 110, 84, 71},
				{2006, 405, 114, 86, 72},
				{2119, 413, 120, 88, 73},
				{2265, 422, 126, 88, 72},
				{2555, 431, 122, 85, 71},
				{3015, 438, 116, 84, 72},
				{3688, 455, 118, 87, 77},
				{4929, 488, 130, 96, 84},
				{11873, 1032, 554, 511, 367},
				{78602, 45006, 62892, 58003, 33414}
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv_2410 = {
	.rows		= 29,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4333, 4330, 4326, 4320, 4314},
				{4239, 4256, 4257, 4255, 4252},
				{4181, 4204, 4207, 4204, 4201},
				{4112, 4149, 4159, 4158, 4155},
				{4055, 4098, 4117, 4117, 4112},
				{4017, 4056, 4080, 4078, 4074},
				{3977, 4018, 4046, 4044, 4039},
				{3943, 3983, 4013, 4013, 4009},
				{3912, 3954, 3974, 3981, 3977},
				{3888, 3928, 3931, 3931, 3929},
				{3871, 3904, 3909, 3907, 3906},
				{3856, 3885, 3891, 3891, 3888},
				{3839, 3868, 3877, 3877, 3875},
				{3822, 3853, 3866, 3865, 3862},
				{3803, 3838, 3857, 3852, 3847},
				{3781, 3821, 3844, 3838, 3822},
				{3754, 3805, 3822, 3814, 3798},
				{3718, 3789, 3787, 3779, 3763},
				{3675, 3769, 3761, 3752, 3740},
				{3661, 3762, 3759, 3751, 3738},
				{3645, 3753, 3757, 3749, 3735},
				{3627, 3740, 3753, 3744, 3730},
				{3607, 3722, 3744, 3735, 3716},
				{3581, 3695, 3718, 3707, 3678},
				{3547, 3654, 3667, 3653, 3619},
				{3502, 3597, 3594, 3580, 3542},
				{3435, 3508, 3490, 3475, 3432},
				{3317, 3361, 3319, 3304, 3249},
				{3000, 3000, 3000, 3000, 3000}
	}
};

struct bms_battery_data projb_v2_2410_data = {
	.fcc			= 2410,
	.fcc_temp_lut		= &fcc_temp_2410,
	.fcc_sf_lut		= &fcc_sf_2410,
	.pc_temp_ocv_lut	= &pc_temp_ocv_2410,
	.rbatt_sf_lut		= &rbatt_sf_2410,
	.default_rbatt_mohm	= 201
};