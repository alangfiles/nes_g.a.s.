// 0-05 - Big duck goes right
// 06-11 - Big duck goes left
// 12-17 - little duck right
// 17-23 - little duck left
// 24-33 - Flock of ducks to the right
// 33-42 - flock of ducks to theleft
// 42-72 - 18 gallon message
// 73-80 - blimp
// 81-85 some random fluffy clouds


const unsigned char bigduck_r_0[]={

 0,  8,0x50,3,
 0,  0,0x40,3,
 8,  0,0x41,3,
 8,  8,0x51,3,
 0, 16,0x60,3,
16,  8,0x52,3,
24,  8,0x53,3,
128

};

const unsigned char bigduck_r_1[]={

 0,  8,0x50,3,
 0,  0,0x43,3,
 8,  0,0x44,3,
 8,  8,0x54,3,
 0, 16,0x60,3,
16,  8,0x52,3,
24,  8,0x53,3,
128

};

const unsigned char bigduck_r_2[]={

 0,  8,0x50,3,
 8,  0,0x45,3,
 8,  8,0x55,3,
 0, 16,0x60,3,
16,  8,0x52,3,
24,  8,0x53,3,
128

};

const unsigned char bigduck_r_3[]={

 0,  8,0x50,3,
 8,  0,0x46,3,
 8,  8,0x56,3,
 0, 16,0x60,3,
16,  8,0x52,3,
24,  8,0x53,3,
128

};

const unsigned char bigduck_r_4[]={

 0,  8,0x50,3,
 8,  8,0x57,3,
 0, 16,0x60,3,
 8, 16,0x67,3,
16,  8,0x52,3,
24,  8,0x53,3,
128

};

const unsigned char bigduck_r_5[]={

 0,  8,0x50,3,
 8,  8,0x58,3,
 0, 16,0x60,3,
 8, 16,0x68,3,
16,  8,0x52,3,
24,  8,0x53,3,
128

};

const unsigned char bigduck_l_0[]={

24,  8,0x50,3|OAM_FLIP_H,
24,  0,0x40,3|OAM_FLIP_H,
16,  0,0x41,3|OAM_FLIP_H,
16,  8,0x51,3|OAM_FLIP_H,
24, 16,0x60,3|OAM_FLIP_H,
 8,  8,0x52,3|OAM_FLIP_H,
 0,  8,0x53,3|OAM_FLIP_H,
128

};

const unsigned char bigduck_l_1[]={

24,  8,0x50,3|OAM_FLIP_H,
24,  0,0x43,3|OAM_FLIP_H,
16,  0,0x44,3|OAM_FLIP_H,
16,  8,0x54,3|OAM_FLIP_H,
24, 16,0x60,3|OAM_FLIP_H,
 8,  8,0x52,3|OAM_FLIP_H,
 0,  8,0x53,3|OAM_FLIP_H,
128

};

const unsigned char bigduck_l_2[]={

24,  8,0x50,3|OAM_FLIP_H,
16,  0,0x45,3|OAM_FLIP_H,
16,  8,0x55,3|OAM_FLIP_H,
24, 16,0x60,3|OAM_FLIP_H,
 8,  8,0x52,3|OAM_FLIP_H,
 0,  8,0x53,3|OAM_FLIP_H,
128

};

const unsigned char bigduck_l_3[]={

24,  8,0x50,3|OAM_FLIP_H,
16,  0,0x46,3|OAM_FLIP_H,
16,  8,0x56,3|OAM_FLIP_H,
24, 16,0x60,3|OAM_FLIP_H,
 8,  8,0x52,3|OAM_FLIP_H,
 0,  8,0x53,3|OAM_FLIP_H,
128

};

const unsigned char bigduck_l_4[]={

24,  8,0x50,3|OAM_FLIP_H,
16,  8,0x57,3|OAM_FLIP_H,
24, 16,0x60,3|OAM_FLIP_H,
16, 16,0x67,3|OAM_FLIP_H,
 8,  8,0x52,3|OAM_FLIP_H,
 0,  8,0x53,3|OAM_FLIP_H,
128

};

const unsigned char bigduck_l_5[]={

24,  8,0x50,3|OAM_FLIP_H,
16,  8,0x58,3|OAM_FLIP_H,
24, 16,0x60,3|OAM_FLIP_H,
16, 16,0x68,3|OAM_FLIP_H,
 8,  8,0x52,3|OAM_FLIP_H,
 0,  8,0x53,3|OAM_FLIP_H,
128

};

const unsigned char gaspump_12[]={

 0,  0,0x61,3,
 8,  0,0x72,3,
128

};

const unsigned char gaspump_13[]={

 0,  0,0x62,3,
 8,  0,0x72,3,
128

};

const unsigned char gaspump_14[]={

 0,  0,0x63,3,
 8,  0,0x72,3,
128

};

const unsigned char gaspump_15[]={

 0,  0,0x64,3,
 8,  0,0x72,3,
128

};

const unsigned char gaspump_16[]={

 0,  0,0x65,3,
 8,  0,0x72,3,
128

};

const unsigned char gaspump_17[]={

 0,  0,0x71,3,
 8,  0,0x72,3,
128

};

const unsigned char gaspump_18[]={

 8,  0,0x61,3|OAM_FLIP_H,
 0,  0,0x72,3|OAM_FLIP_H,
128

};

const unsigned char gaspump_19[]={

 8,  0,0x62,3|OAM_FLIP_H,
 0,  0,0x72,3|OAM_FLIP_H,
128

};

const unsigned char gaspump_20[]={

 8,  0,0x63,3|OAM_FLIP_H,
 0,  0,0x72,3|OAM_FLIP_H,
128

};

const unsigned char gaspump_21[]={

 8,  0,0x64,3|OAM_FLIP_H,
 0,  0,0x72,3|OAM_FLIP_H,
128

};

const unsigned char gaspump_22[]={

 8,  0,0x65,3|OAM_FLIP_H,
 0,  0,0x72,3|OAM_FLIP_H,
128

};

const unsigned char gaspump_23[]={

 8,  0,0x71,3|OAM_FLIP_H,
 0,  0,0x72,3|OAM_FLIP_H,
128

};

const unsigned char gaspump_24[]={

 8,  0,0x61,3,
16,  0,0x72,3,
16,  8,0x63,3,
 8, 16,0x64,3,
24,  8,0x72,3,
16, 16,0x72,3,
 0, 24,0x71,3,
 8, 24,0x72,3,
128

};

const unsigned char gaspump_25[]={

 8,  0,0x62,3,
16,  0,0x72,3,
16,  8,0x64,3,
 8, 16,0x65,3,
24,  8,0x72,3,
16, 16,0x72,3,
 0, 24,0x65,3,
 8, 24,0x72,3,
128

};

const unsigned char gaspump_26[]={

 8,  0,0x63,3,
16,  0,0x72,3,
16,  8,0x65,3,
 8, 16,0x71,3,
24,  8,0x72,3,
16, 16,0x72,3,
 0, 24,0x64,3,
 8, 24,0x72,3,
128

};

const unsigned char gaspump_27[]={

 8,  0,0x64,3,
16,  0,0x72,3,
16,  8,0x71,3,
 8, 16,0x65,3,
24,  8,0x72,3,
16, 16,0x72,3,
 0, 24,0x63,3,
 8, 24,0x72,3,
128

};

const unsigned char gaspump_28[]={

 8,  0,0x65,3,
16,  0,0x72,3,
16,  8,0x65,3,
 8, 16,0x64,3,
24,  8,0x72,3,
16, 16,0x72,3,
 0, 24,0x62,3,
 8, 24,0x72,3,
128

};

const unsigned char gaspump_29[]={

 8,  0,0x71,3,
16,  0,0x72,3,
16,  8,0x64,3,
 8, 16,0x63,3,
24,  8,0x72,3,
16, 16,0x72,3,
 0, 24,0x61,3,
 8, 24,0x72,3,
128

};

const unsigned char gaspump_30[]={

 8,  0,0x65,3,
16,  0,0x72,3,
16,  8,0x63,3,
 8, 16,0x62,3,
24,  8,0x72,3,
16, 16,0x72,3,
 0, 24,0x62,3,
 8, 24,0x72,3,
128

};

const unsigned char gaspump_31[]={

 8,  0,0x64,3,
16,  0,0x72,3,
16,  8,0x62,3,
 8, 16,0x61,3,
24,  8,0x72,3,
16, 16,0x72,3,
 0, 24,0x63,3,
 8, 24,0x72,3,
128

};

const unsigned char gaspump_32[]={

 8,  0,0x63,3,
16,  0,0x72,3,
16,  8,0x61,3,
 8, 16,0x62,3,
24,  8,0x72,3,
16, 16,0x72,3,
 0, 24,0x64,3,
 8, 24,0x72,3,
128

};

const unsigned char gaspump_33[]={

 8,  0,0x62,3,
16,  0,0x72,3,
16,  8,0x61,3,
 8, 16,0x62,3,
24,  8,0x72,3,
16, 16,0x72,3,
 0, 24,0x64,3,
 8, 24,0x72,3,
128

};

const unsigned char gaspump_34[]={

16,  0,0x61,3|OAM_FLIP_H,
 8,  0,0x72,3|OAM_FLIP_H,
 8,  8,0x63,3|OAM_FLIP_H,
16, 16,0x64,3|OAM_FLIP_H,
 0,  8,0x72,3|OAM_FLIP_H,
 8, 16,0x72,3|OAM_FLIP_H,
24, 24,0x71,3|OAM_FLIP_H,
16, 24,0x72,3|OAM_FLIP_H,
128

};

const unsigned char gaspump_35[]={

16,  0,0x63,3|OAM_FLIP_H,
 8,  0,0x72,3|OAM_FLIP_H,
 8,  8,0x65,3|OAM_FLIP_H,
16, 16,0x71,3|OAM_FLIP_H,
 0,  8,0x72,3|OAM_FLIP_H,
 8, 16,0x72,3|OAM_FLIP_H,
24, 24,0x64,3|OAM_FLIP_H,
16, 24,0x72,3|OAM_FLIP_H,
128

};

const unsigned char gaspump_36[]={

16,  0,0x64,3|OAM_FLIP_H,
 8,  0,0x72,3|OAM_FLIP_H,
 8,  8,0x71,3|OAM_FLIP_H,
16, 16,0x65,3|OAM_FLIP_H,
 0,  8,0x72,3|OAM_FLIP_H,
 8, 16,0x72,3|OAM_FLIP_H,
24, 24,0x63,3|OAM_FLIP_H,
16, 24,0x72,3|OAM_FLIP_H,
128

};

const unsigned char gaspump_37[]={

16,  0,0x65,3|OAM_FLIP_H,
 8,  0,0x72,3|OAM_FLIP_H,
 8,  8,0x65,3|OAM_FLIP_H,
16, 16,0x64,3|OAM_FLIP_H,
 0,  8,0x72,3|OAM_FLIP_H,
 8, 16,0x72,3|OAM_FLIP_H,
24, 24,0x62,3|OAM_FLIP_H,
16, 24,0x72,3|OAM_FLIP_H,
128

};

const unsigned char gaspump_38[]={

16,  0,0x71,3|OAM_FLIP_H,
 8,  0,0x72,3|OAM_FLIP_H,
 8,  8,0x64,3|OAM_FLIP_H,
16, 16,0x63,3|OAM_FLIP_H,
 0,  8,0x72,3|OAM_FLIP_H,
 8, 16,0x72,3|OAM_FLIP_H,
24, 24,0x61,3|OAM_FLIP_H,
16, 24,0x72,3|OAM_FLIP_H,
128

};

const unsigned char gaspump_39[]={

16,  0,0x65,3|OAM_FLIP_H,
 8,  0,0x72,3|OAM_FLIP_H,
 8,  8,0x63,3|OAM_FLIP_H,
16, 16,0x62,3|OAM_FLIP_H,
 0,  8,0x72,3|OAM_FLIP_H,
 8, 16,0x72,3|OAM_FLIP_H,
24, 24,0x62,3|OAM_FLIP_H,
16, 24,0x72,3|OAM_FLIP_H,
128

};

const unsigned char gaspump_40[]={

16,  0,0x64,3|OAM_FLIP_H,
 8,  0,0x72,3|OAM_FLIP_H,
 8,  8,0x62,3|OAM_FLIP_H,
16, 16,0x61,3|OAM_FLIP_H,
 0,  8,0x72,3|OAM_FLIP_H,
 8, 16,0x72,3|OAM_FLIP_H,
24, 24,0x63,3|OAM_FLIP_H,
16, 24,0x72,3|OAM_FLIP_H,
128

};

const unsigned char gaspump_41[]={

16,  0,0x63,3|OAM_FLIP_H,
 8,  0,0x72,3|OAM_FLIP_H,
 8,  8,0x61,3|OAM_FLIP_H,
16, 16,0x62,3|OAM_FLIP_H,
 0,  8,0x72,3|OAM_FLIP_H,
 8, 16,0x72,3|OAM_FLIP_H,
24, 24,0x64,3|OAM_FLIP_H,
16, 24,0x72,3|OAM_FLIP_H,
128

};

const unsigned char gaspump_42[]={

16,  0,0x62,3|OAM_FLIP_H,
 8,  0,0x72,3|OAM_FLIP_H,
 8,  8,0x61,3|OAM_FLIP_H,
16, 16,0x62,3|OAM_FLIP_H,
 0,  8,0x72,3|OAM_FLIP_H,
 8, 16,0x72,3|OAM_FLIP_H,
24, 24,0x64,3|OAM_FLIP_H,
16, 24,0x72,3|OAM_FLIP_H,
128

};

const unsigned char gaspump_43[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8,  8,0xd1,1,
 8, 16,0xe1,1,
16,  8,0xd1,1,
16, 16,0xe1,1,
24,  8,0xd1,1,
24, 16,0xe1,1,
32,  8,0xd1,1,
32, 16,0xe4,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char gaspump_44[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 8,  8,0xd1,1,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8, 16,0xd1,1|OAM_FLIP_V,
24,  8,0xd1,1,
24, 16,0xe1,1,
32,  8,0xa0,1,
32, 16,0xa0,1|OAM_FLIP_V,
16,  8,0xd1,1,
16, 16,0xe4,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char gaspump_45[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 8,  8,0xd1,1,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8, 16,0xd1,1|OAM_FLIP_V,
24,  8,0xa0,1,
24, 16,0xa0,1|OAM_FLIP_V,
32,  8,0xa0,1,
32, 16,0xb0,1,
16,  8,0xd1,1,
16, 16,0xe4,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char gaspump_46[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 8,  8,0xd1,1,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8, 16,0xd1,1|OAM_FLIP_V,
16,  8,0xa0,1,
16, 16,0xa0,1|OAM_FLIP_V,
24,  8,0xa0,1,
24, 16,0xb0,1,
32,  8,0xd1,1,
32, 16,0xe4,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char gaspump_47[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 8,  8,0xa0,1,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8, 16,0xa0,1|OAM_FLIP_V,
16,  8,0xa0,1,
16, 16,0xb0,1,
24,  8,0xd1,1,
24, 16,0xe1,1,
32,  8,0xa2,1,
32, 16,0xb2,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char gaspump_48[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 8,  8,0xa0,1,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8, 16,0xb0,1,
16,  8,0xd1,1,
16, 16,0xe1,1,
24,  8,0xa2,1,
24, 16,0xb2,1,
32,  8,0xa3,1,
32, 16,0xb3,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char gaspump_49[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 8,  8,0xd1,1,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8, 16,0xe1,1,
16,  8,0xa2,1,
16, 16,0xb2,1,
24,  8,0xa3,1,
24, 16,0xb3,1,
32,  8,0xa0,1,
32, 16,0xa0,1|OAM_FLIP_V,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char gaspump_50[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 8,  8,0xa2,1,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8, 16,0xb2,1,
16,  8,0xa3,1,
16, 16,0xb3,1,
24,  8,0xa0,1,
24, 16,0xa0,1|OAM_FLIP_V,
32,  8,0xa4,1,
32, 16,0xa4,1|OAM_FLIP_V,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char gaspump_51[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 8,  8,0xa3,1,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8,  8,0xd1,1,
 8, 16,0xb3,1,
16,  8,0xa0,1,
16, 16,0xa0,1|OAM_FLIP_V,
24,  8,0xa4,1,
24, 16,0xa4,1|OAM_FLIP_V,
32,  8,0xd1,1,
32, 16,0xe1,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char gaspump_52[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 8,  8,0xa0,1,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8, 16,0xa0,1|OAM_FLIP_V,
16,  8,0xa4,1,
16, 16,0xa4,1|OAM_FLIP_V,
24,  8,0xd1,1,
24, 16,0xe1,1,
32,  8,0xd2,1,
32, 16,0xe2,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char gaspump_53[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 8,  8,0xa4,1,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8, 16,0xa4,1|OAM_FLIP_V,
16,  8,0xd1,1,
16, 16,0xe1,1,
24,  8,0xd2,1,
24, 16,0xe2,1,
32,  8,0xd3,1,
32, 16,0xe3,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char gaspump_54[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 8,  8,0xd1,1,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8, 16,0xe1,1,
16,  8,0xd2,1,
16, 16,0xe2,1,
24,  8,0xd3,1,
24, 16,0xe3,1,
32,  8,0xd1,1,
32, 16,0xe1,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char gaspump_55[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 8,  8,0xd2,1,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8, 16,0xe2,1,
16,  8,0xd3,1,
16, 16,0xe3,1,
24,  8,0xd1,1,
24, 16,0xe1,1,
32,  8,0xa6,1,
32, 16,0xe3,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char gaspump_56[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 8,  8,0xd3,1,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8, 16,0xe3,1,
16,  8,0xd1,1,
16, 16,0xe1,1,
24,  8,0xa6,1,
24, 16,0xe3,1,
32,  8,0xa3,1,
32, 16,0xb3,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char gaspump_57[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 8,  8,0xd1,1,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8, 16,0xe1,1,
16,  8,0xa6,1,
16, 16,0xe3,1,
24,  8,0xa3,1,
24, 16,0xb3,1,
32,  8,0xb7,1|OAM_FLIP_V,
32, 16,0xb4,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char gaspump_58[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 8,  8,0xa6,1,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8, 16,0xe3,1,
16,  8,0xa3,1,
16, 16,0xb3,1,
32,  8,0xb7,1|OAM_FLIP_V,
32, 16,0xb4,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
24,  8,0xb7,1|OAM_FLIP_V,
24, 16,0xb4,1,
128

};

const unsigned char gaspump_59[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 8,  8,0xa3,1,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8, 16,0xb3,1,
32,  8,0xe3,1|OAM_FLIP_V,
32, 16,0xe3,1,
24,  8,0xb7,1|OAM_FLIP_V,
24, 16,0xb4,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
16,  8,0xb7,1|OAM_FLIP_V,
16, 16,0xb4,1,
128

};

const unsigned char gaspump_60[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
24,  8,0xe3,1|OAM_FLIP_V,
24, 16,0xe3,1,
16,  8,0xb7,1|OAM_FLIP_V,
16, 16,0xb4,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
 8,  8,0xb7,1|OAM_FLIP_V,
 8, 16,0xb4,1,
32, 16,0xb6,1,
32,  8,0xb6,1|OAM_FLIP_H|OAM_FLIP_V,
128

};

const unsigned char gaspump_61[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
16,  8,0xe3,1|OAM_FLIP_V,
16, 16,0xe3,1,
 8,  8,0xb7,1|OAM_FLIP_V,
 8, 16,0xb4,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
32,  8,0xa2,1,
32, 16,0xb2,1,
24, 16,0xb6,1,
24,  8,0xb6,1|OAM_FLIP_H|OAM_FLIP_V,
128

};

const unsigned char gaspump_62[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8,  8,0xe3,1|OAM_FLIP_V,
 8, 16,0xe3,1,
32,  8,0xd1,1,
32, 16,0xd1,1|OAM_FLIP_V,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
24,  8,0xa2,1,
24, 16,0xb2,1,
16, 16,0xb6,1,
16,  8,0xb6,1|OAM_FLIP_H|OAM_FLIP_V,
128

};

const unsigned char gaspump_63[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
32,  8,0xa5,1,
32, 16,0xb5,1,
24,  8,0xd1,1,
24, 16,0xd1,1|OAM_FLIP_V,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
16,  8,0xa2,1,
16, 16,0xb2,1,
 8, 16,0xb6,1,
 8,  8,0xb6,1|OAM_FLIP_H|OAM_FLIP_V,
128

};

const unsigned char gaspump_64[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
24,  8,0xa5,1,
24, 16,0xb5,1,
16,  8,0xd1,1,
16, 16,0xd1,1|OAM_FLIP_V,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
 8,  8,0xa2,1,
 8, 16,0xb2,1,
32, 16,0xa0,1|OAM_FLIP_V,
32,  8,0xa0,1,
128

};

const unsigned char gaspump_65[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
16,  8,0xa5,1,
16, 16,0xb5,1,
 8,  8,0xd1,1,
 8, 16,0xd1,1|OAM_FLIP_V,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
32,  8,0xa6,1,
32, 16,0xe3,1,
24, 16,0xa0,1|OAM_FLIP_V,
24,  8,0xa0,1,
128

};

const unsigned char gaspump_66[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8,  8,0xa5,1,
 8, 16,0xb5,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
24,  8,0xa6,1,
24, 16,0xe3,1,
16, 16,0xa0,1|OAM_FLIP_V,
16,  8,0xa0,1,
32,  8,0xa7,1,
32, 16,0xb5,1,
128

};

const unsigned char gaspump_67[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
16,  8,0xa6,1,
16, 16,0xe3,1,
 8, 16,0xa0,1|OAM_FLIP_V,
 8,  8,0xa0,1,
24,  8,0xa7,1,
24, 16,0xb5,1,
32,  8,0xa0,1,
32, 16,0xb0,1,
128

};

const unsigned char gaspump_68[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
 8,  8,0xa6,1,
 8, 16,0xe3,1,
16,  8,0xa7,1,
16, 16,0xb5,1,
24,  8,0xa0,1,
24, 16,0xb0,1,
32,  8,0xa1,1,
32, 16,0xb1,1,
128

};

const unsigned char gaspump_69[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
32,  8,0xd1,1,
32, 16,0xe1,1,
 8,  8,0xa7,1,
 8, 16,0xb5,1,
16,  8,0xa0,1,
16, 16,0xb0,1,
24,  8,0xa1,1,
24, 16,0xb1,1,
128

};

const unsigned char gaspump_70[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
24,  8,0xd1,1,
24, 16,0xe1,1,
 8,  8,0xa0,1,
 8, 16,0xb0,1,
16,  8,0xa1,1,
16, 16,0xb1,1,
32,  8,0xd1,1,
32, 16,0xe1,1,
128

};

const unsigned char gaspump_71[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
16,  8,0xd1,1,
16, 16,0xe1,1,
32,  8,0xd1,1,
32, 16,0xe1,1,
 8,  8,0xa1,1,
 8, 16,0xb1,1,
24,  8,0xd1,1,
24, 16,0xe1,1,
128

};

const unsigned char gaspump_72[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8,  8,0xd1,1,
 8, 16,0xe1,1,
16,  8,0xd1,1,
16, 16,0xe1,1,
24,  8,0xd1,1,
24, 16,0xe1,1,
32,  8,0xd1,1,
32, 16,0xe4,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char blimp_0[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8,  8,0xd1,1,
 8, 16,0xe1,1,
16,  8,0xd1,1,
16, 16,0xe1,1,
24,  8,0xd1,1,
24, 16,0xe1,1,
32,  8,0xa5,1,
32, 16,0xe3,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char blimp_1[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8,  8,0xd1,1,
 8, 16,0xe1,1,
16,  8,0xd1,1,
16, 16,0xe1,1,
32,  8,0xb7,1|OAM_FLIP_V,
32, 16,0xb4,1,
24,  8,0xa5,1,
24, 16,0xe3,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
128

};

const unsigned char blimp_2[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8,  8,0xd1,1,
 8, 16,0xe1,1,
24,  8,0xb7,1|OAM_FLIP_V,
24, 16,0xb4,1,
16,  8,0xa5,1,
16, 16,0xe3,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
32,  8,0xa0,1,
32, 16,0xa0,1|OAM_FLIP_V,
128

};

const unsigned char blimp_3[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
32,  8,0xc7,1,
32, 16,0xb5,1,
16,  8,0xb7,1|OAM_FLIP_V,
16, 16,0xb4,1,
 8,  8,0xa5,1,
 8, 16,0xe3,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
24,  8,0xa0,1,
24, 16,0xa0,1|OAM_FLIP_V,
128

};

const unsigned char blimp_4[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
24,  8,0xc7,1,
24, 16,0xb5,1,
 8,  8,0xb7,1|OAM_FLIP_V,
 8, 16,0xb4,1,
32,  8,0xa5,1,
32, 16,0xb7,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
16,  8,0xa0,1,
16, 16,0xa0,1|OAM_FLIP_V,
128

};

const unsigned char blimp_5[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
16,  8,0xc7,1,
16, 16,0xb5,1,
32,  8,0xd1,1,
32, 16,0xe1,1,
24,  8,0xa5,1,
24, 16,0xb7,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
 8,  8,0xa0,1,
 8, 16,0xa0,1|OAM_FLIP_V,
128

};

const unsigned char blimp_6[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
 8,  8,0xc7,1,
 8, 16,0xb5,1,
24,  8,0xd1,1,
24, 16,0xe1,1,
16,  8,0xa5,1,
16, 16,0xb7,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
32,  8,0xd1,1,
32, 16,0xe1,1,
128

};

const unsigned char blimp_7[]={

 0,  8,0xd0,0,
 8,  0,0xc1,0,
16,  0,0xc2,0,
24,  0,0xc3,0,
32,  0,0xc4,0,
40,  0,0xc5,0,
48,  0,0xc6,0,
 0, 16,0xe0,0,
 8, 24,0xf1,0,
16, 24,0xf2,0,
24, 24,0xf3,0,
32, 24,0xf4,0,
40, 24,0xf5,0,
48, 24,0xf6,0,
48, 16,0xe6,0,
48,  8,0xd6,0,
40,  8,0xd5,0,
40, 16,0xe5,0,
24,  8,0xd1,1,
24, 16,0xe1,1,
16,  8,0xd1,1,
16, 16,0xe1,1,
 8,  8,0xa5,1,
 8, 16,0xb7,1,
 0,  0,0xc0,0,
 0, 24,0xf0,0,
32,  8,0xd1,1,
32, 16,0xe1,1,
128

};

const unsigned char cloud_0[]={

 0,  0,0x49,2,
 8,  0,0x4a,2,
16,  0,0x4b,2,
 0,  8,0x59,2,
 8,  8,0x5a,2,
16,  8,0x5b,2,
128

};

const unsigned char cloud_1[]={

 2,  1,0x49,2,
 0, 16,0x49,2|OAM_FLIP_V,
 0,  8,0x69,2,
10,  1,0x4a,2,
34,  4,0x4b,2,
 8,  8,0x48,2,
18,  0,0x6a,2,
26,  1,0x7a,2|OAM_FLIP_V,
33,  9,0x49,2|OAM_FLIP_H,
 8, 18,0x7a,2,
16, 17,0x5a,2,
24, 19,0x7b,2,
29, 14,0x5b,2,
 8, 11,0x48,2,
16,  7,0x48,2,
16, 13,0x48,2,
22,  8,0x48,2,
26,  8,0x48,2,
22, 12,0x48,2,
128

};

const unsigned char cloud_2[]={

 0,  0,0x49,2,
 6,  2,0x4b,2,
 2,  7,0x79,2,
128

};

const unsigned char cloud_3[]={

10,  2,0x6a,2,
10, 10,0x7a,2,
 3,  1,0x49,2,
 2,  9,0x79,2,
15,  6,0x5b,2,
128

};

const unsigned char cloud_4[]={

 0,  4,0x7a,2,
 0,  1,0x4a,2,
 3,  2,0x4b,2,
- 2,  1,0x49,2,
128

};