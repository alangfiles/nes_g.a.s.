const unsigned char white_shot[] = {
		0, 0, 0x0f, 0,
		0, 8, 0x0f, 0,
		8, 0, 0x0f, 0,
		8, 8, 0x0f, 0,
		128
};

const unsigned char rocket_rider_left[]={

	  7,  0,0x00,0,
	  9,  7,0x03,0,
	  1,  7,0x02,0,
	  8,- 8,0x01,2,
	  0,  0,0x10,2,
	  8,  0,0x11,2,
	  0,  8,0x20,2,
	  8,  8,0x21,2,
	 16,  8,0x22,2,
	128

};

const unsigned char rocket_rider_right[]={

	-15,  0,0x00,0|OAM_FLIP_H,
	-17,  7,0x03,0|OAM_FLIP_H,
	- 9,  7,0x02,0|OAM_FLIP_H,
	-16,- 8,0x01,2|OAM_FLIP_H,
	- 8,  0,0x10,2|OAM_FLIP_H,
	-16,  0,0x11,2|OAM_FLIP_H,
	- 8,  8,0x20,2|OAM_FLIP_H,
	-16,  8,0x21,2|OAM_FLIP_H,
	-24,  8,0x22,2|OAM_FLIP_H,
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

const unsigned char white_ufo_ship[]={
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