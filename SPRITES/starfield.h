const unsigned char white_shot[] = {
		0, 0, 0x0f, 0,
		0, 8, 0x0f, 0,
		8, 0, 0x0f, 0,
		8, 8, 0x0f, 0,
		128
};

const unsigned char rocket_rider_left[]={

		8,  7,0x25,0,
	  0,  7,0x24,0,
	  0,  0,0x04,2,
	  8,  0,0x05,2,
	  0,  8,0x14,2,
	  8,  8,0x15,2,
	128

};

const unsigned char rocket_rider_right_small[]={	
- 8,  0,0x26,0|OAM_FLIP_H,
- 8,  0,0x16,2|OAM_FLIP_H,
- 8,- 8,0x06,2|OAM_FLIP_H,
-16,  0,0x17,2|OAM_FLIP_H,
128
};

const unsigned char rocket_rider_right[]={	
 9,  1,0x00,0|OAM_FLIP_H,
 8,  8,0x62,2|OAM_FLIP_H,
16,  8,0x70,0|OAM_FLIP_H,
 8,  8,0x71,0|OAM_FLIP_H,
 0,  8,0x72,2|OAM_FLIP_H,
16,  0,0x60,2|OAM_FLIP_H,
 8,  0,0x61,2|OAM_FLIP_H,
 8,- 8,0x51,2|OAM_FLIP_H,
128
};

const unsigned char victorylapsprites_2_data[]={

	  8,  7,0x25,0,
	  0,  7,0x24,0,
	  0,  0,0x04,2,
	  8,  0,0x05,2,
	  0,  8,0x14,2,
	  8,  8,0x15,2,
	128

};

const unsigned char victorylapsprites_3_data[]={

	-16,  7,0x25,0|OAM_FLIP_H,
	- 8,  7,0x24,0|OAM_FLIP_H,
	- 8,  0,0x04,2|OAM_FLIP_H,
	-16,  0,0x05,2|OAM_FLIP_H,
	- 8,  8,0x14,2|OAM_FLIP_H,
	-16,  8,0x15,2|OAM_FLIP_H,
	128

};

const unsigned char victorylapsprites_4_data[]={

	  0,  0,0x26,0,
	  0,  0,0x16,2,
	  0,- 8,0x06,2,
	  8,  0,0x17,2,
	128

};

const unsigned char victorylapsprites_5_data[]={

	- 8,  0,0x26,0|OAM_FLIP_H,
	- 8,  0,0x16,2|OAM_FLIP_H,
	- 8,- 8,0x06,2|OAM_FLIP_H,
	-16,  0,0x17,2|OAM_FLIP_H,
	128

};

const unsigned char victorylapsprites_6_data[]={

	- 1,  0,0x27,0,
	  0,  0,0x18,2,
	128

};

const unsigned char victorylapsprites_7_data[]={

	- 7,  0,0x27,0|OAM_FLIP_H,
	- 8,  0,0x18,2|OAM_FLIP_H,
	128

};

const unsigned char victorylapsprites_8_data[]={

	  1,  0,0x28,2,
	128

};


const unsigned char rocket_ship_0[]={

 0,  0,0x39,2,
 8,  0,0x3a,2,
 8,  8,0x4a,2,
16,  0,0x3b,2,
16,  8,0x4b,2,
24,  8,0x4c,2,
24,  0,0x3c,2,
128

};

const unsigned char rocket_ship_1[]={

 0,  0,0x39,2,
 8,  0,0x3a,2,
 8,  8,0x4a,2,
16,  0,0x3b,2,
16,  8,0x4b,2,
24,  8,0x4c,2,
24,  0,0x3d,2,
128

};

const unsigned char spacesquid_0[]={

 0,  0,0x09,0,
 8,  0,0x0a,0,
 0,  8,0x19,0,
 8,  8,0x1a,0,
 0, 16,0x29,0,
 8, 16,0x2a,0,
128

};

const unsigned char spacesquid_1[]={

 0,  0,0x09,0,
 8,  0,0x0a,0,
 0,  8,0x1b,0,
 8,  8,0x1c,0,
 0, 16,0x2b,0,
 8, 16,0x2c,0,
128

};

const unsigned char spacesquid_2[]={

 0,  0,0x09,0,
 8,  0,0x0a,0,
 0,  8,0x1d,0,
 8,  8,0x1e,0,
 0, 16,0x2d,0,
 8, 16,0x2e,0,
128

};


const unsigned char small_ufo_0[]={

 0,  0,0x59,2,
 8,  0,0x5a,2,
16,  0,0x5b,2,
 0,  8,0x69,2,
 8,  8,0x6a,2,
16,  8,0x6b,2,
128

};

const unsigned char small_ufo_1[]={

 0,  0,0x59,2,
 8,  0,0x5a,2,
16,  0,0x5b,2,
 0,  8,0x6c,2,
 8,  8,0x6d,2,
16,  8,0x6e,2,
128

};

const unsigned char ufo_ship_color_1[]={

	  0,  0,0xdb,1,
	  8,  0,0xdc,1,
	  0,- 8,0xcb,1,
	  8,- 8,0xcc,1,
	  0,  8,0xeb,1,
	  8,  8,0xec,1,
	  0, 16,0xfb,1,
	  8, 16,0xfc,1,
	 24,  8,0xeb,1|OAM_FLIP_H,
	 24,  0,0xdb,1|OAM_FLIP_H,
	 16,  8,0xec,1|OAM_FLIP_H,
	 16,  0,0xdc,1|OAM_FLIP_H,
	 16,- 8,0xcc,1|OAM_FLIP_H,
	 24,- 8,0xcb,1|OAM_FLIP_H,
	 16, 16,0xfc,1|OAM_FLIP_H,
	 24, 16,0xfb,1|OAM_FLIP_H,
	128

};

const unsigned char ufo_ship[]={

	  0,  0,0xdb,2,
	  8,  0,0xdc,2,
	  0,- 8,0xcb,2,
	  8,- 8,0xcc,2,
	  0,  8,0xeb,2,
	  8,  8,0xec,2,
	  0, 16,0xfb,2,
	  8, 16,0xfc,2,
	 24,  8,0xeb,2|OAM_FLIP_H,
	 24,  0,0xdb,2|OAM_FLIP_H,
	 16,  8,0xec,2|OAM_FLIP_H,
	 16,  0,0xdc,2|OAM_FLIP_H,
	 16,- 8,0xcc,2|OAM_FLIP_H,
	 24,- 8,0xcb,2|OAM_FLIP_H,
	 16, 16,0xfc,2|OAM_FLIP_H,
	 24, 16,0xfb,2|OAM_FLIP_H,
	128

};


const unsigned char ufo_ship_destroy1[]={

	  0,  0,0xec,2,
	  8,  0,0xdc,2,
	  0,- 8,0xbb,2,
	  8,- 8,0xc0,2,
	  0,  8,0x28,2,
	  8,  8,0xec,2,
	  0, 16,0xfb,2,
	  8, 16,0xf0,2,
	 24,  8,0xb1,2|OAM_FLIP_H,
	 24,  0,0x01,2|OAM_FLIP_H,
	 16,  8,0xcc,2|OAM_FLIP_H,
	 16,  0,0xdd,2|OAM_FLIP_H,
	 16,- 8,0x05,2|OAM_FLIP_H,
	 24,- 8,0xa2,2|OAM_FLIP_H,
	 16, 16,0xfc,2|OAM_FLIP_H,
	 24, 16,0x2c,2|OAM_FLIP_H,
	128

};

const unsigned char white_3_target[]={
		0,  0,0x0f,0,
		0,- 8,0x0f,0,
		0,  8,0x0f,0,
	  8,  0,0x0f,0,
	  8,- 8,0x0f,0,
	  8,  8,0x0f,0,
	 16,  8,0x0f,0,
	 16,  0,0x0f,0,
	 16,- 8,0x0f,0,
	 128
};

const unsigned char white_4_target[]={
	0,  0,0x0f,0,
	  8,  0,0x0f,0,
	  0,- 8,0x0f,0,
	  8,- 8,0x0f,0,
	  0,  8,0x0f,0,
	  8,  8,0x0f,0,
	  0, 16,0x0f,0,
	  8, 16,0x0f,0,
	 24,  8,0x0f,0,
	 24,  0,0x0f,0,
	 16,  8,0x0f,0,
	 16,  0,0x0f,0,
	 16,- 8,0x0f,0,
	 24,- 8,0x0f,0,
	 16, 16,0x0f,0,
	 24, 16,0x0f,0,
	 128
};

const unsigned char victorylapsprites_10_data[]={

	  0,  8,0xeb,2,
	  8,  8,0xec,2,
	  0, 16,0xfb,2,
	  8, 16,0xfc,2,
	 24,  8,0xeb,2|OAM_FLIP_H,
	 16,  8,0xec,2|OAM_FLIP_H,
	 16, 16,0xfc,2|OAM_FLIP_H,
	 24, 16,0xfb,2|OAM_FLIP_H,
	 24,  0,0xff,2,
	 24,- 8,0xef,2,
	 24,-16,0xdf,2,
	  0,  0,0xff,2|OAM_FLIP_H,
	  0,- 8,0xef,2|OAM_FLIP_H,
	  0,-16,0xdf,2|OAM_FLIP_H,
	  8,-16,0xdc,2,
	 16,-16,0xdc,2|OAM_FLIP_H,
	  8,-24,0xcc,2,
	  0,-24,0xcb,2,
	 16,-24,0xcc,2|OAM_FLIP_H,
	 24,-24,0xcb,2|OAM_FLIP_H,
	  8,- 8,0xed,2,
	 16,- 8,0xee,2,
	  8,  0,0xfd,2,
	 16,  0,0xfe,2,
	128

};

const unsigned char victorylapsprites_11_data[]={

	  0,-16,0x80,1,
	  0,- 8,0x90,1,
	  0,  0,0xa0,1,
	  0,  8,0xb0,1,
	  0, 16,0xc0,1,
	  0, 24,0xd0,1,
	  0, 32,0xe0,1,
	  0, 40,0xf0,1,
	  8, 32,0xe1,1,
	  8, 24,0xd1,1,
	  8, 16,0xc1,1,
	  8,  8,0xb1,1,
	  8,  0,0xa1,1,
	128

};

const unsigned char victorylapsprites_12_data[]={

	  0,-16,0x80,1,
	  0,- 8,0x90,1,
	  0,  0,0xa0,1,
	  0,  8,0xb0,1,
	  0, 16,0xc0,1,
	  0, 24,0xd0,1,
	  0, 32,0xe2,1,
	  0, 40,0xf0,1,
	  8, 32,0xe3,1,
	  8, 24,0xd1,1,
	  8, 16,0xc1,1,
	  8,  8,0xb1,1,
	  8,  0,0xa1,1,
	128

};

const unsigned char victorylapsprites_13_data[]={

	  0,  0,0xc2,1,
	  8,  0,0xc3,1,
	  0,  8,0xd2,1,
	  8,  8,0xd3,1,
	128

};

const unsigned char victorylapsprites_14_data[]={

	  8,  0,0xc2,1|OAM_FLIP_H,
	  0,  0,0xc3,1|OAM_FLIP_H,
	  8,  8,0xd2,1|OAM_FLIP_H,
	  0,  8,0xd3,1|OAM_FLIP_H,
	128

};

const unsigned char explosion_0[]={
	0, 0, 0x98, 1,
	8, 0, 0x99, 1,
	16, 0, 0x99, 1|OAM_FLIP_H,
	24, 0, 0x98, 1|OAM_FLIP_H,
	0, 8, 0x98, 1|OAM_FLIP_V,
	8, 8, 0x99, 1|OAM_FLIP_V,
	16, 8, 0x99, 1|OAM_FLIP_H|OAM_FLIP_V,
	24, 8, 0x98, 1|OAM_FLIP_H|OAM_FLIP_V,
	128
};
const unsigned char explosion_1[]={
	0, 0, 0x9a, 1,
	8, 0, 0x9b, 1,
	16, 0, 0x9b, 1|OAM_FLIP_H,
	24, 0, 0x9a, 1|OAM_FLIP_H,
	0, 8, 0x9a, 1|OAM_FLIP_V,
	8, 8, 0x9b, 1|OAM_FLIP_V,
	16, 8, 0x9b, 1|OAM_FLIP_H|OAM_FLIP_V,
	24, 8, 0x9a, 1|OAM_FLIP_H|OAM_FLIP_V,
	8,-8, 0x8b, 1,
	16,-8, 0x8b, 1|OAM_FLIP_H,
	8,16, 0x8b, 1|OAM_FLIP_V,
	16,16, 0x8b, 1|OAM_FLIP_H|OAM_FLIP_V,
	128
};
const unsigned char explosion_2[]={
	0, 0, 0xa8, 1,
	8, 0, 0xa9, 1,
	16, 0, 0xa9, 1|OAM_FLIP_H,
	24, 0, 0xa8, 1|OAM_FLIP_H,
	0, 8, 0xa8, 1|OAM_FLIP_V,
	8, 8, 0xa9, 1|OAM_FLIP_V,
	16, 8, 0xa9, 1|OAM_FLIP_H|OAM_FLIP_V,
	24, 8, 0xa8, 1|OAM_FLIP_H|OAM_FLIP_V,
	128
};

const unsigned char explosion_3[]={
	8, 0, 0xb8, 1,
	16, 0, 0xb8, 1|OAM_FLIP_H,
	8, 8, 0xb8, 1|OAM_FLIP_V,
	16, 8, 0xb8, 1|OAM_FLIP_V|OAM_FLIP_H,
	128
};


const unsigned char explosion_15[]={

15,  7,0xae,1,
 8, 17,0xad,1,
 8,  9,0x9e,1,
 8,  4,0x8d,1,
 1,  3,0x8c,1,
 7,- 1,0x8d,1,
15,  0,0x8e,1,
22,  1,0x8f,1,
 1, 11,0x9c,1,
22, 17,0xac,1|OAM_FLIP_H,
 3, 23,0xbc,1,
10, 22,0xbd,1,
17, 23,0xbe,1,
 0, 16,0xaf,1|OAM_FLIP_H,
23,  9,0x9f,1,
15, 15,0x9d,1|OAM_FLIP_H|OAM_FLIP_V,
128

};

const unsigned char explosion_16[]={

21,  5,0x8f,1,
14,  9,0xae,1,
16, 15,0x9d,1|OAM_FLIP_H|OAM_FLIP_V,
11, 13,0xad,1,
 4,  8,0x8c,1,
 7,  5,0x8d,1,
14,  3,0x8e,1,
18, 19,0xac,1|OAM_FLIP_H,
10, 20,0xbd,1,
 3, 16,0xaf,1|OAM_FLIP_H,
21, 13,0x9f,1,
128

};

const unsigned char explosion_17[]={

 5, 13,0xaf,1|OAM_FLIP_H,
20,  9,0x8f,1,
 8,  9,0x8d,1,
12, 12,0xae,1,
12, 11,0xad,1,
12,  7,0x8e,1,
18, 15,0xac,1|OAM_FLIP_H,
11, 17,0xbd,1,
128

};

const unsigned char explosion_18[]={

 7, 10,0xaf,1|OAM_FLIP_H,
 9,  6,0x8c,1,
17,  8,0x8f,1,
12, 12,0xbd,1,
128

};

const unsigned char explosion_19[]={

16,  7,0x8f,1,
12, 11,0xbc,1,
11,  7,0xbf,1|OAM_FLIP_H|OAM_FLIP_V,
128

};

const unsigned char explosion_20[]={

12, 10,0x7c,1,
128

};

const unsigned char explosion_21[]={

12, 10,0x7d,1,
128

};

const unsigned char explosion_22[]={

12, 10,0x7e,1,
128

};

const unsigned char explosion_23[]={

12, 10,0x7f,1,

128

};


const unsigned char spaceduck_0[]={

0, 8,0xe7,2,
0, 0,0xf7,2,
8, 0,0xd8,2,
8, 8,0xe8,2,
16, 8,0xe9,2,
16, 0,0xd9,2,
24, 0,0xda,2,
24, 8,0xf8,2,
24, 16,0xfa,2,
128

};

const unsigned char spaceduck_1[]={

0, 8,0xe7,2,
0, 0,0xf7,2,
8, 0,0xd8,2,
8, 8,0xe8,2,
16, 8,0xe6,2,
16, 0,0xd6,2,
24, 0,0xd7,2,
24, 8,0xea,2,
24, 16,0xfa,2,
128

};

const unsigned char spaceduck_2[]={

0, 8,0xe7,2,
0, 0,0xf7,2,
8, 0,0xd8,2,
8, 8,0xe8,2,
16, 8,0xe5,2,
16, 0,0xd5,2,
24, 8,0xf8,2,
24, 16,0xfa,2,
128

};

const unsigned char spaceduck_3[]={

0, 8,0xe7,2,
0, 0,0xf7,2,
8, 0,0xd8,2,
8, 8,0xe8,2,
16, 8,0xe4,2,
16, 0,0xd4,2,
24, 8,0xf8,2,
24, 16,0xfa,2,
128

};

const unsigned char spaceduck_4[]={

0, 8,0xe7,2,
0, 0,0xf7,2,
8, 0,0xd8,2,
8, 8,0xe8,2,
16, 8,0xe3,2,
16, 0,0xd3,2,
24, 8,0xea,2,
24, 16,0xfa,2,
16, 16,0xf3,2,
128

};

const unsigned char spaceduck_5[]={

0, 8,0xe7,2,
0, 0,0xf7,2,
8, 0,0xd8,2,
8, 8,0xe8,2,
16, 8,0xe2,2,
16, 0,0xd2,2,
24, 8,0xf8,2,
24, 16,0xfa,2,
16, 16,0xf2,2,
128

};

const unsigned char boss_ship_0[]={

0, 0,0xdb,2,
8, 0,0xdc,2,
0,- 8,0xcb,2,
8,- 8,0xcc,2,
0, 8,0xeb,2,
8, 8,0xec,2,
0, 16,0xfb,2,
8, 16,0xfc,2,
24, 8,0xeb,2|OAM_FLIP_H,
24, 0,0xdb,2|OAM_FLIP_H,
16, 8,0xec,2|OAM_FLIP_H,
16, 0,0xdc,2|OAM_FLIP_H,
16,- 8,0xcc,2|OAM_FLIP_H,
24,- 8,0xcb,2|OAM_FLIP_H,
16, 16,0xfc,2|OAM_FLIP_H,
24, 16,0xfb,2|OAM_FLIP_H,
128

};

const unsigned char boss_ship_1[]={

0, 8,0xeb,2,
8, 8,0xec,2,
0, 16,0xfb,2,
8, 16,0xfc,2,
24, 8,0xeb,2|OAM_FLIP_H,
16, 8,0xec,2|OAM_FLIP_H,
16, 16,0xfc,2|OAM_FLIP_H,
24, 16,0xfb,2|OAM_FLIP_H,
24, 0,0xff,2,
24,- 8,0xdf,2,
0, 0,0xff,2|OAM_FLIP_H,
0,- 8,0xdf,2|OAM_FLIP_H,
8,- 8,0xdc,2,
16,- 8,0xdc,2|OAM_FLIP_H,
8, 0,0xdd,0,
16, 0,0xde,0,
8,-16,0xcc,2,
0,-16,0xcb,2,
16,-16,0xcc,2|OAM_FLIP_H,
24,-16,0xcb,2|OAM_FLIP_H,
128

};

const unsigned char boss_ship_2[]={

0, 8,0xeb,2,
8, 8,0xec,2,
0, 16,0xfb,2,
8, 16,0xfc,2,
24, 8,0xeb,2|OAM_FLIP_H,
16, 8,0xec,2|OAM_FLIP_H,
16, 16,0xfc,2|OAM_FLIP_H,
24, 16,0xfb,2|OAM_FLIP_H,
24, 0,0xff,2,
24,- 8,0xef,2,
24,-16,0xdf,2,
0, 0,0xff,2|OAM_FLIP_H,
0,- 8,0xef,2|OAM_FLIP_H,
0,-16,0xdf,2|OAM_FLIP_H,
8,-16,0xdc,2,
16,-16,0xdc,2|OAM_FLIP_H,
8,-24,0xcc,2,
0,-24,0xcb,2,
16,-24,0xcc,2|OAM_FLIP_H,
24,-24,0xcb,2|OAM_FLIP_H,
8,- 8,0xcd,0,
16,- 8,0xce,0,
8, 0,0xdd,0,
16, 0,0xde,0,
128

};