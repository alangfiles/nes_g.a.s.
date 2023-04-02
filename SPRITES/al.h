
		#pragma region altalks
		/**
		 * A brief tour:  
     * 0-10 = an angry face.
		 * 11-21 = an irritated face
		 * 22-29 -- a sleeping face.  22-26 is eyes closing (reverse to open).  27-29 are closed eye snoring.  
		 * 30-40 - normal talking
		*/

	const unsigned char BigAlsShirt[] = {
		0, 0, 0x58, 0,  
		8, 0, 0x59, 0,
		16, 0, 0x5a, 0,
		24, 0, 0x5b, 0,
		32, 0, 0x5c, 0,
		40, 0, 0x5d, 0,
		48, 0, 0x5e, 0,
		56, 0, 0x5f, 0,
		0, 8, 0x68, 0,
		8, 8, 0x69, 0,
		16, 8, 0x6a, 0,
		24, 8, 0x6b, 0,
		32, 8, 0x6c, 0,
		40, 8, 0x6d, 0,
		48, 8, 0x6e, 0,
		56, 8, 0x6f, 0,
		0, 16, 0x78, 0,
		8, 16, 0x79, 0,
		16, 16, 0x7a, 0,
		24, 16, 0x7b, 0,
		32, 16, 0x7c, 0,
		40, 16, 0x7d, 0,
		48, 16, 0x7e, 0,
		56, 16, 0x7f, 0,
		128};

		const unsigned char metasprite_0_data[]={

 0,  0,0xe8,1,
 8,  0,0xe9,1,
16,  0,0xe9,1|OAM_FLIP_H,
24,  0,0xe8,1|OAM_FLIP_H,
128

};

const unsigned char metasprite_1_data[]={

 0,  0,0xe8,1,
 8,  0,0xe9,1,
16,  0,0xea,1,
24,  0,0xeb,1,
128

};

const unsigned char metasprite_2_data[]={

24,  0,0xe8,1|OAM_FLIP_H,
16,  0,0xe9,1|OAM_FLIP_H,
 8,  0,0xea,1|OAM_FLIP_H,
 0,  0,0xeb,1|OAM_FLIP_H,
128

};

const unsigned char metasprite_3_data[]={

16,  0,0xea,1,
24,  0,0xeb,1,
 8,  0,0xea,1|OAM_FLIP_H,
 0,  0,0xeb,1|OAM_FLIP_H,
128

};

const unsigned char metasprite_4_data[]={

 0,  0,0xf8,1,
 8,  0,0xf9,1,
16,  0,0xfa,1,
24,  0,0xfb,1,
128

};

const unsigned char metasprite_5_data[]={

 0,  0,0xf8,1,
 8,  0,0xf9,1,
16,  0,0xea,1,
24,  0,0xeb,1,
128

};

const unsigned char metasprite_6_data[]={

 0,  0,0xeb,1|OAM_FLIP_H,
 8,  0,0xea,1|OAM_FLIP_H,
16,  0,0xfa,1,
24,  0,0xfb,1,
128

};

const unsigned char metasprite_7_data[]={

 0,  0,0xe8,1,
 8,  0,0xe9,1,
16,  0,0xfa,1,
24,  0,0xfb,1,
128

};

const unsigned char metasprite_8_data[]={

 0,  0,0xf8,1,
 8,  0,0xf9,1,
16,  0,0xe9,1|OAM_FLIP_H,
24,  0,0xe8,1|OAM_FLIP_H,
128

};

const unsigned char metasprite_9_data[]={

16,  0,0xee,1,
24,  0,0xef,1,
 8,  0,0xee,1|OAM_FLIP_H,
 0,  0,0xef,1|OAM_FLIP_H,
128

};

const unsigned char metasprite_10_data[]={

16,  0,0xee,1,
24,  0,0xef,1,
 8,  0,0xed,1,
 0,  0,0xec,1,
128

};

const unsigned char metasprite_11_data[]={

16,  0,0xed,1|OAM_FLIP_H,
24,  0,0xec,1|OAM_FLIP_H,
 8,  0,0xee,1|OAM_FLIP_H,
 0,  0,0xef,1|OAM_FLIP_H,
128

};

const unsigned char metasprite_12_data[]={

 0,  0,0xec,1,
 8,  0,0xed,1,
16,  0,0xed,1|OAM_FLIP_H,
24,  0,0xec,1|OAM_FLIP_H,
128

};

const unsigned char metasprite_13_data[]={

 0,  0,0xfc,1,
 8,  0,0xfd,1,
24,  0,0xfc,1|OAM_FLIP_H,
16,  0,0xfd,1|OAM_FLIP_H,
128

};

const unsigned char metasprite_14_data[]={

 0,  0,0xfc,1,
 8,  0,0xfd,1,
24,  0,0xff,1,
16,  0,0xfe,1,
128

};

const unsigned char metasprite_15_data[]={

 0,  0,0xff,1|OAM_FLIP_H,
 8,  0,0xfe,1|OAM_FLIP_H,
24,  0,0xfc,1|OAM_FLIP_H,
16,  0,0xfd,1|OAM_FLIP_H,
128

};

const unsigned char metasprite_16_data[]={

 0,  0,0xff,1|OAM_FLIP_H,
 8,  0,0xfe,1|OAM_FLIP_H,
24,  0,0xff,1,
16,  0,0xfe,1,
128

};

const unsigned char metasprite_17_data[]={

 0,  0,0x18,0,
 8,  0,0x19,0,
16,  0,0x19,0|OAM_FLIP_H,
24,  0,0x18,0|OAM_FLIP_H,
 4,  0,0x2a,3,
20,  0,0x2a,3|OAM_FLIP_H,
128

};

const unsigned char metasprite_18_data[]={

 0,  0,0x18,0,
 8,  0,0x19,0,
16,  0,0x29,0|OAM_FLIP_H,
24,  0,0x28,0|OAM_FLIP_H,
 4,  0,0x2a,3,
20,  0,0x2a,3|OAM_FLIP_H,
128

};

const unsigned char metasprite_19_data[]={

 0,  0,0x28,0,
 8,  0,0x29,0,
16,  0,0x19,0|OAM_FLIP_H,
24,  0,0x18,0|OAM_FLIP_H,
 4,  0,0x2a,3,
20,  0,0x2a,3|OAM_FLIP_H,
128

};

const unsigned char metasprite_20_data[]={

 0,  0,0x4e,0,
 8,  0,0x4f,0,
16,  0,0x4f,0|OAM_FLIP_H,
24,  0,0x4e,0|OAM_FLIP_H,
 4,  0,0x2a,3,
20,  0,0x2a,3|OAM_FLIP_H,
128

};

const unsigned char metasprite_21_data[]={

 0,  0,0x4e,0,
 8,  0,0x4f,0,
16,  0,0x09,0|OAM_FLIP_H,
24,  0,0x08,0|OAM_FLIP_H,
 4,  0,0x2a,3,
20,- 2,0x2a,3|OAM_FLIP_H,
128

};

const unsigned char metasprite_22_data[]={

24,  0,0x4e,0|OAM_FLIP_H,
16,  0,0x4f,0|OAM_FLIP_H,
 8,  0,0x09,0,
 0,  0,0x08,0,
20,  0,0x2a,3|OAM_FLIP_H,
 4,- 2,0x2a,3,
128

};

const unsigned char metasprite_23_data[]={

 0,  0,0x08,0,
 8,  0,0x09,0,
16,  0,0x08,0,
24,  0,0x09,0,
 4,- 2,0x2a,3,
20,- 2,0x2a,3|OAM_FLIP_H,
128

};

const unsigned char metasprite_24_data[]={

 0,  0,0x18,0,
 8,  0,0x19,0,
16,  0,0x08,0,
24,  0,0x09,0,
 4,  0,0x2a,3,
20,- 2,0x2a,3|OAM_FLIP_H,
128

};

const unsigned char metasprite_25_data[]={

 0,  0,0x28,0,
 8,  0,0x29,0,
16,  0,0x29,0|OAM_FLIP_H,
24,  0,0x28,0|OAM_FLIP_H,
 4,  0,0x2a,3,
20,  0,0x2a,3|OAM_FLIP_H,
128

};

const unsigned char metasprite_26_data[]={

 0,  0,0x38,0,
 8,  0,0x39,0,
16,  0,0x39,0|OAM_FLIP_H,
24,  0,0x38,0|OAM_FLIP_H,
 4,  0,0x2a,3,
20,  0,0x2a,3|OAM_FLIP_H,
128

};

const unsigned char metasprite_27_data[]={

 0,  0,0x48,0,
 8,  0,0x49,0,
16,  0,0x49,0|OAM_FLIP_H,
24,  0,0x48,0|OAM_FLIP_H,
128

};

const unsigned char metasprite_28_data[]={

 0,  0,0x0a,0,
 8,  0,0x0b,0,
16,  0,0x0b,0|OAM_FLIP_H,
24,  0,0x0a,0|OAM_FLIP_H,
128

};

const unsigned char metasprite_29_data[]={

 0,  0,0x1a,0,
 8,  0,0x1b,0,
16,  0,0x1b,0|OAM_FLIP_H,
24,  0,0x1a,0|OAM_FLIP_H,
128

};

const unsigned char metasprite_30_data[]={

 0,  0,0x0c,1,
 8,  0,0x0d,1,
16,  0,0x0e,1,
24,  0,0x0f,1,
128

};

const unsigned char metasprite_31_data[]={

 0,  0,0x1c,1,
 8,  0,0x1d,1,
16,  0,0x1e,1,
24,  0,0x1f,1,
128

};

const unsigned char metasprite_32_data[]={

 0,  0,0x2c,1,
 8,  0,0x2d,1,
16,  0,0x2e,1,
24,  0,0x2f,1,
128

};

const unsigned char metasprite_33_data[]={

 0,  0,0x3c,1,
 8,  0,0x3d,1,
16,  0,0x3e,1,
24,  0,0x3f,1,
128

};

const unsigned char metasprite_34_data[]={

 0,  0,0xac,1,
 8,  0,0xad,1,
16,  0,0xae,1,
24,  0,0xaf,1,
 0,  8,0xbc,1,
 8,  8,0xbd,1,
16,  8,0xbe,1,
24,  8,0xbf,1,
128

};

const unsigned char metasprite_35_data[]={

 0,  0,0x0c,1,
 8,  0,0x0d,1,
16,  0,0x0e,1,
24,  0,0x0f,2,
13,  0,0x4b,3|OAM_FLIP_V,
128

};

const unsigned char metasprite_36_data[]={

 0,  0,0x1c,2,
 8,  0,0x1d,2,
16,  0,0x1e,2,
24,  0,0x1f,2,
 8,  0,0x4a,3,
15,  3,0x4b,3,
128

};

const unsigned char metasprite_37_data[]={

 0,  0,0x2c,1,
 8,  0,0x2d,1,
16,  0,0x2e,1,
24,  0,0x2f,1,
 8,  0,0x4a,3,
16,  0,0x4b,3,
128

};

const unsigned char metasprite_38_data[]={

 0,  0,0x3c,1,
 8,  0,0x3d,1,
16,  0,0x3e,1,
24,  0,0x3f,1,
16,  2,0x4b,3,
 8,  2,0x4a,3,
128

};

const unsigned char metasprite_39_data[]={

 0,  0,0xac,1,
 8,  0,0xad,1,
16,  0,0xae,1,
24,  0,0xaf,1,
 0,  8,0xbc,1,
 8,  8,0xbd,1,
16,  8,0xbe,1,
24,  8,0xbf,1,
 8,  2,0x3a,3,
16,  2,0x3b,3,
128

};

const unsigned char metasprite_40_data[]={

 0,  0,0x0c,1,
 8,  0,0x0d,1,
16,  0,0x0e,1,
24,  0,0x0f,2,
13,  0,0x4b,3|OAM_FLIP_V,
11,  0,0x4c,3,
128

};

const unsigned char metasprite_41_data[]={

 0,  0,0x1c,2,
 8,  0,0x1d,2,
16,  0,0x1e,2,
24,  0,0x1f,2,
 8,  0,0x4a,3,
15,  3,0x4b,3,
 8,  0,0x4c,3,
16,  0,0x4d,3,
128

};

const unsigned char metasprite_42_data[]={

 0,  0,0x2c,1,
 8,  0,0x2d,1,
16,  0,0x2e,1,
24,  0,0x2f,1,
 8,  0,0x4a,3,
16,  0,0x4b,3,
128

};

const unsigned char metasprite_43_data[]={

 0,  0,0x3c,1,
 8,  0,0x3d,1,
16,  0,0x3e,1,
24,  0,0x3f,1,
16,  2,0x4b,3,
 8,  2,0x4a,3,
 9,  0,0x4c,3,
17,  0,0x4d,3,
128

};

const unsigned char metasprite_44_data[]={

 0,  0,0xac,1,
 8,  0,0xad,1,
16,  0,0xae,1,
24,  0,0xaf,1,
 0,  8,0xbc,1,
 8,  8,0xbd,1,
16,  8,0xbe,1,
24,  8,0xbf,1,
 8,  2,0x3a,3,
16,  2,0x3b,3,
 9,  2,0x4c,3,
16,  2,0x4d,3,
128

};

		#pragma endregion