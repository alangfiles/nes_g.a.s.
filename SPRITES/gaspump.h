// 0-05 - Big duck goes right
// 06-11 - Big duck goes left
// 12-17 - little duck right
// 17-23 - little duck left
// 24-33 - Flock of ducks to the right
// 33-42 - flock of ducks to theleft
// 42-72 - 18 gallon message
// 73-80 - blimp
// 81-85 some random fluffy clouds


const unsigned char bigduck_l_0[]={

 0,  8,0x70,3|OAM_BEHIND,
 0,  0,0x40,3|OAM_BEHIND,
 8,  0,0x41,3|OAM_BEHIND,
 8,  8,0x51,3|OAM_BEHIND,
 0, 16,0x60,3|OAM_BEHIND,
16,  8,0x52,3|OAM_BEHIND,
24,  8,0x53,3|OAM_BEHIND,
128

};

const unsigned char bigduck_l_1[]={

 0,  8,0x50,3|OAM_BEHIND,
 0,  0,0x43,3|OAM_BEHIND,
 8,  0,0x44,3|OAM_BEHIND,
 8,  8,0x54,3|OAM_BEHIND,
 0, 16,0x60,3|OAM_BEHIND,
16,  8,0x75,3|OAM_BEHIND,
24,  8,0x76,3|OAM_BEHIND,
128

};

const unsigned char bigduck_l_2[]={

 0,  8,0x70,3|OAM_BEHIND,
 8,  0,0x45,3|OAM_BEHIND,
 8,  8,0x55,3|OAM_BEHIND,
 0, 16,0x60,3|OAM_BEHIND,
16,  8,0x52,3|OAM_BEHIND,
24,  8,0x53,3|OAM_BEHIND,
128

};

const unsigned char bigduck_l_3[]={

 0,  8,0x70,3|OAM_BEHIND,
 8,  0,0x46,3|OAM_BEHIND,
 8,  8,0x56,3|OAM_BEHIND,
 0, 16,0x60,3|OAM_BEHIND,
16,  8,0x52,3|OAM_BEHIND,
24,  8,0x53,3|OAM_BEHIND,
128



};

const unsigned char bigduck_l_4[]={

 0,  8,0x50,3|OAM_BEHIND,
 8,  8,0x57,3|OAM_BEHIND,
 0, 16,0x60,3|OAM_BEHIND,
 8, 16,0x67,3|OAM_BEHIND,
16,  8,0x77,3|OAM_BEHIND,
24,  8,0x78,3|OAM_BEHIND,
128


};

const unsigned char bigduck_l_5[]={

 0,  8,0x70,3|OAM_BEHIND,
 8,  8,0x58,3|OAM_BEHIND,
 0, 16,0x60,3|OAM_BEHIND,
 8, 16,0x68,3|OAM_BEHIND,
16,  8,0x52,3|OAM_BEHIND,
24,  8,0x53,3|OAM_BEHIND,
128


};

const unsigned char bigduck_r_0[]={

24,  8,0x70,3|OAM_FLIP_H|OAM_BEHIND,
24,  0,0x40,3|OAM_FLIP_H|OAM_BEHIND,
16,  0,0x41,3|OAM_FLIP_H|OAM_BEHIND,
16,  8,0x51,3|OAM_FLIP_H|OAM_BEHIND,
24, 16,0x60,3|OAM_FLIP_H|OAM_BEHIND,
 8,  8,0x52,3|OAM_FLIP_H|OAM_BEHIND,
 0,  8,0x53,3|OAM_FLIP_H|OAM_BEHIND,
128

};

const unsigned char bigduck_r_1[]={

24,  8,0x50,3|OAM_FLIP_H|OAM_BEHIND,
24,  0,0x43,3|OAM_FLIP_H|OAM_BEHIND,
16,  0,0x44,3|OAM_FLIP_H|OAM_BEHIND,
16,  8,0x54,3|OAM_FLIP_H|OAM_BEHIND,
24, 16,0x60,3|OAM_FLIP_H|OAM_BEHIND,
 8,  8,0x75,3|OAM_FLIP_H|OAM_BEHIND,
 0,  8,0x76,3|OAM_FLIP_H|OAM_BEHIND,
128

};

const unsigned char bigduck_r_2[]={

24,  8,0x70,3|OAM_FLIP_H|OAM_BEHIND,
16,  0,0x45,3|OAM_FLIP_H|OAM_BEHIND,
16,  8,0x55,3|OAM_FLIP_H|OAM_BEHIND,
24, 16,0x60,3|OAM_FLIP_H|OAM_BEHIND,
 8,  8,0x52,3|OAM_FLIP_H|OAM_BEHIND,
 0,  8,0x53,3|OAM_FLIP_H|OAM_BEHIND,
128
};

const unsigned char bigduck_r_3[]={

24,  8,0x70,3|OAM_FLIP_H|OAM_BEHIND,
16,  0,0x46,3|OAM_FLIP_H|OAM_BEHIND,
16,  8,0x56,3|OAM_FLIP_H|OAM_BEHIND,
24, 16,0x60,3|OAM_FLIP_H|OAM_BEHIND,
 8,  8,0x52,3|OAM_FLIP_H|OAM_BEHIND,
 0,  8,0x53,3|OAM_FLIP_H|OAM_BEHIND,
128


};

const unsigned char bigduck_r_4[]={

24,  8,0x50,3|OAM_FLIP_H|OAM_BEHIND,
16,  8,0x57,3|OAM_FLIP_H|OAM_BEHIND,
24, 16,0x60,3|OAM_FLIP_H|OAM_BEHIND,
16, 16,0x67,3|OAM_FLIP_H|OAM_BEHIND,
 8,  8,0x77,3|OAM_FLIP_H|OAM_BEHIND,
 0,  8,0x78,3|OAM_FLIP_H|OAM_BEHIND,
128

};

const unsigned char bigduck_r_5[]={

24,  8,0x70,3|OAM_FLIP_H|OAM_BEHIND,
16,  8,0x58,3|OAM_FLIP_H|OAM_BEHIND,
24, 16,0x60,3|OAM_FLIP_H|OAM_BEHIND,
16, 16,0x68,3|OAM_FLIP_H|OAM_BEHIND,
 8,  8,0x52,3|OAM_FLIP_H|OAM_BEHIND,
 0,  8,0x53,3|OAM_FLIP_H|OAM_BEHIND,
128


};

// const unsigned char gaspump_12[]={

//  0,  0,0x61,3|OAM_BEHIND,
//  8,  0,0x72,3|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_13[]={

//  0,  0,0x62,3|OAM_BEHIND,
//  8,  0,0x72,3|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_14[]={

//  0,  0,0x63,3|OAM_BEHIND,
//  8,  0,0x72,3|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_15[]={

//  0,  0,0x64,3|OAM_BEHIND,
//  8,  0,0x72,3|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_16[]={

//  0,  0,0x65,3|OAM_BEHIND,
//  8,  0,0x72,3|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_17[]={

//  0,  0,0x71,3|OAM_BEHIND,
//  8,  0,0x72,3|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_18[]={

//  8,  0,0x61,3|OAM_FLIP_H|OAM_BEHIND,
//  0,  0,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_19[]={

//  8,  0,0x62,3|OAM_FLIP_H|OAM_BEHIND,
//  0,  0,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_20[]={

//  8,  0,0x63,3|OAM_FLIP_H|OAM_BEHIND,
//  0,  0,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_21[]={

//  8,  0,0x64,3|OAM_FLIP_H|OAM_BEHIND,
//  0,  0,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_22[]={

//  8,  0,0x65,3|OAM_FLIP_H|OAM_BEHIND,
//  0,  0,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_23[]={

//  8,  0,0x71,3|OAM_FLIP_H|OAM_BEHIND,
//  0,  0,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_24[]={

//  8,  0,0x61,3|OAM_BEHIND,
// 16,  0,0x72,3|OAM_BEHIND,
// 16,  8,0x63,3|OAM_BEHIND,
//  8, 16,0x64,3|OAM_BEHIND,
// 24,  8,0x72,3|OAM_BEHIND,
// 16, 16,0x72,3|OAM_BEHIND,
//  0, 24,0x71,3|OAM_BEHIND,
//  8, 24,0x72,3|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_25[]={

//  8,  0,0x62,3|OAM_BEHIND,
// 16,  0,0x72,3|OAM_BEHIND,
// 16,  8,0x64,3|OAM_BEHIND,
//  8, 16,0x65,3|OAM_BEHIND,
// 24,  8,0x72,3|OAM_BEHIND,
// 16, 16,0x72,3|OAM_BEHIND,
//  0, 24,0x65,3|OAM_BEHIND,
//  8, 24,0x72,3|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_26[]={

//  8,  0,0x63,3|OAM_BEHIND,
// 16,  0,0x72,3|OAM_BEHIND,
// 16,  8,0x65,3|OAM_BEHIND,
//  8, 16,0x71,3|OAM_BEHIND,
// 24,  8,0x72,3|OAM_BEHIND,
// 16, 16,0x72,3|OAM_BEHIND,
//  0, 24,0x64,3|OAM_BEHIND,
//  8, 24,0x72,3|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_27[]={

//  8,  0,0x64,3|OAM_BEHIND,
// 16,  0,0x72,3|OAM_BEHIND,
// 16,  8,0x71,3|OAM_BEHIND,
//  8, 16,0x65,3|OAM_BEHIND,
// 24,  8,0x72,3|OAM_BEHIND,
// 16, 16,0x72,3|OAM_BEHIND,
//  0, 24,0x63,3|OAM_BEHIND,
//  8, 24,0x72,3|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_28[]={

//  8,  0,0x65,3|OAM_BEHIND,
// 16,  0,0x72,3|OAM_BEHIND,
// 16,  8,0x65,3|OAM_BEHIND,
//  8, 16,0x64,3|OAM_BEHIND,
// 24,  8,0x72,3|OAM_BEHIND,
// 16, 16,0x72,3|OAM_BEHIND,
//  0, 24,0x62,3|OAM_BEHIND,
//  8, 24,0x72,3|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_29[]={

//  8,  0,0x71,3|OAM_BEHIND,
// 16,  0,0x72,3|OAM_BEHIND,
// 16,  8,0x64,3|OAM_BEHIND,
//  8, 16,0x63,3|OAM_BEHIND,
// 24,  8,0x72,3|OAM_BEHIND,
// 16, 16,0x72,3|OAM_BEHIND,
//  0, 24,0x61,3|OAM_BEHIND,
//  8, 24,0x72,3|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_30[]={

//  8,  0,0x65,3|OAM_BEHIND,
// 16,  0,0x72,3|OAM_BEHIND,
// 16,  8,0x63,3|OAM_BEHIND,
//  8, 16,0x62,3|OAM_BEHIND,
// 24,  8,0x72,3|OAM_BEHIND,
// 16, 16,0x72,3|OAM_BEHIND,
//  0, 24,0x62,3|OAM_BEHIND,
//  8, 24,0x72,3|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_31[]={

//  8,  0,0x64,3|OAM_BEHIND,
// 16,  0,0x72,3|OAM_BEHIND,
// 16,  8,0x62,3|OAM_BEHIND,
//  8, 16,0x61,3|OAM_BEHIND,
// 24,  8,0x72,3|OAM_BEHIND,
// 16, 16,0x72,3|OAM_BEHIND,
//  0, 24,0x63,3|OAM_BEHIND,
//  8, 24,0x72,3|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_32[]={

//  8,  0,0x63,3|OAM_BEHIND,
// 16,  0,0x72,3|OAM_BEHIND,
// 16,  8,0x61,3|OAM_BEHIND,
//  8, 16,0x62,3|OAM_BEHIND,
// 24,  8,0x72,3|OAM_BEHIND,
// 16, 16,0x72,3|OAM_BEHIND,
//  0, 24,0x64,3|OAM_BEHIND,
//  8, 24,0x72,3|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_33[]={

//  8,  0,0x62,3|OAM_BEHIND,
// 16,  0,0x72,3|OAM_BEHIND,
// 16,  8,0x61,3|OAM_BEHIND,
//  8, 16,0x62,3|OAM_BEHIND,
// 24,  8,0x72,3|OAM_BEHIND,
// 16, 16,0x72,3|OAM_BEHIND,
//  0, 24,0x64,3|OAM_BEHIND,
//  8, 24,0x72,3|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_34[]={

// 16,  0,0x61,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  0,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  8,0x63,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 16,0x64,3|OAM_FLIP_H|OAM_BEHIND,
//  0,  8,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8, 16,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 24, 24,0x71,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 24,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_35[]={

// 16,  0,0x63,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  0,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  8,0x65,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 16,0x71,3|OAM_FLIP_H|OAM_BEHIND,
//  0,  8,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8, 16,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 24, 24,0x64,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 24,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_36[]={

// 16,  0,0x64,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  0,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  8,0x71,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 16,0x65,3|OAM_FLIP_H|OAM_BEHIND,
//  0,  8,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8, 16,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 24, 24,0x63,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 24,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_37[]={

// 16,  0,0x65,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  0,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  8,0x65,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 16,0x64,3|OAM_FLIP_H|OAM_BEHIND,
//  0,  8,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8, 16,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 24, 24,0x62,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 24,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_38[]={

// 16,  0,0x71,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  0,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  8,0x64,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 16,0x63,3|OAM_FLIP_H|OAM_BEHIND,
//  0,  8,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8, 16,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 24, 24,0x61,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 24,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_39[]={

// 16,  0,0x65,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  0,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  8,0x63,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 16,0x62,3|OAM_FLIP_H|OAM_BEHIND,
//  0,  8,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8, 16,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 24, 24,0x62,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 24,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_40[]={

// 16,  0,0x64,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  0,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  8,0x62,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 16,0x61,3|OAM_FLIP_H|OAM_BEHIND,
//  0,  8,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8, 16,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 24, 24,0x63,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 24,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_41[]={

// 16,  0,0x63,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  0,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  8,0x61,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 16,0x62,3|OAM_FLIP_H|OAM_BEHIND,
//  0,  8,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8, 16,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 24, 24,0x64,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 24,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_42[]={

// 16,  0,0x62,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  0,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8,  8,0x61,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 16,0x62,3|OAM_FLIP_H|OAM_BEHIND,
//  0,  8,0x72,3|OAM_FLIP_H|OAM_BEHIND,
//  8, 16,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 24, 24,0x64,3|OAM_FLIP_H|OAM_BEHIND,
// 16, 24,0x72,3|OAM_FLIP_H|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_43[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8,  8,0xd1,1|OAM_BEHIND,
//  8, 16,0xe1,1|OAM_BEHIND,
// 16,  8,0xd1,1|OAM_BEHIND,
// 16, 16,0xe1,1|OAM_BEHIND,
// 24,  8,0xd1,1|OAM_BEHIND,
// 24, 16,0xe1,1|OAM_BEHIND,
// 32,  8,0xd1,1|OAM_BEHIND,
// 32, 16,0xe4,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_44[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  8,  8,0xd1,1|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8, 16,0xd1,1|OAM_FLIP_V|OAM_BEHIND,
// 24,  8,0xd1,1|OAM_BEHIND,
// 24, 16,0xe1,1|OAM_BEHIND,
// 32,  8,0xa0,1|OAM_BEHIND,
// 32, 16,0xa0,1|OAM_FLIP_V|OAM_BEHIND,
// 16,  8,0xd1,1|OAM_BEHIND,
// 16, 16,0xe4,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_45[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  8,  8,0xd1,1|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8, 16,0xd1,1|OAM_FLIP_V|OAM_BEHIND,
// 24,  8,0xa0,1|OAM_BEHIND,
// 24, 16,0xa0,1|OAM_FLIP_V|OAM_BEHIND,
// 32,  8,0xa0,1|OAM_BEHIND,
// 32, 16,0xb0,1|OAM_BEHIND,
// 16,  8,0xd1,1|OAM_BEHIND,
// 16, 16,0xe4,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_46[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  8,  8,0xd1,1|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8, 16,0xd1,1|OAM_FLIP_V|OAM_BEHIND,
// 16,  8,0xa0,1|OAM_BEHIND,
// 16, 16,0xa0,1|OAM_FLIP_V|OAM_BEHIND,
// 24,  8,0xa0,1|OAM_BEHIND,
// 24, 16,0xb0,1|OAM_BEHIND,
// 32,  8,0xd1,1|OAM_BEHIND,
// 32, 16,0xe4,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_47[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  8,  8,0xa0,1|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8, 16,0xa0,1|OAM_FLIP_V|OAM_BEHIND,
// 16,  8,0xa0,1|OAM_BEHIND,
// 16, 16,0xb0,1|OAM_BEHIND,
// 24,  8,0xd1,1|OAM_BEHIND,
// 24, 16,0xe1,1|OAM_BEHIND,
// 32,  8,0xa2,1|OAM_BEHIND,
// 32, 16,0xb2,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_48[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  8,  8,0xa0,1|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8, 16,0xb0,1|OAM_BEHIND,
// 16,  8,0xd1,1|OAM_BEHIND,
// 16, 16,0xe1,1|OAM_BEHIND,
// 24,  8,0xa2,1|OAM_BEHIND,
// 24, 16,0xb2,1|OAM_BEHIND,
// 32,  8,0xa3,1|OAM_BEHIND,
// 32, 16,0xb3,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_49[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  8,  8,0xd1,1|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8, 16,0xe1,1|OAM_BEHIND,
// 16,  8,0xa2,1|OAM_BEHIND,
// 16, 16,0xb2,1|OAM_BEHIND,
// 24,  8,0xa3,1|OAM_BEHIND,
// 24, 16,0xb3,1|OAM_BEHIND,
// 32,  8,0xa0,1|OAM_BEHIND,
// 32, 16,0xa0,1|OAM_FLIP_V|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_50[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  8,  8,0xa2,1|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8, 16,0xb2,1|OAM_BEHIND,
// 16,  8,0xa3,1|OAM_BEHIND,
// 16, 16,0xb3,1|OAM_BEHIND,
// 24,  8,0xa0,1|OAM_BEHIND,
// 24, 16,0xa0,1|OAM_FLIP_V|OAM_BEHIND,
// 32,  8,0xa4,1|OAM_BEHIND,
// 32, 16,0xa4,1|OAM_FLIP_V|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_51[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  8,  8,0xa3,1|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8,  8,0xd1,1|OAM_BEHIND,
//  8, 16,0xb3,1|OAM_BEHIND,
// 16,  8,0xa0,1|OAM_BEHIND,
// 16, 16,0xa0,1|OAM_FLIP_V|OAM_BEHIND,
// 24,  8,0xa4,1|OAM_BEHIND,
// 24, 16,0xa4,1|OAM_FLIP_V|OAM_BEHIND,
// 32,  8,0xd1,1|OAM_BEHIND,
// 32, 16,0xe1,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_52[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  8,  8,0xa0,1|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8, 16,0xa0,1|OAM_FLIP_V|OAM_BEHIND,
// 16,  8,0xa4,1|OAM_BEHIND,
// 16, 16,0xa4,1|OAM_FLIP_V|OAM_BEHIND,
// 24,  8,0xd1,1|OAM_BEHIND,
// 24, 16,0xe1,1|OAM_BEHIND,
// 32,  8,0xd2,1|OAM_BEHIND,
// 32, 16,0xe2,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_53[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  8,  8,0xa4,1|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8, 16,0xa4,1|OAM_FLIP_V|OAM_BEHIND,
// 16,  8,0xd1,1|OAM_BEHIND,
// 16, 16,0xe1,1|OAM_BEHIND,
// 24,  8,0xd2,1|OAM_BEHIND,
// 24, 16,0xe2,1|OAM_BEHIND,
// 32,  8,0xd3,1|OAM_BEHIND,
// 32, 16,0xe3,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_54[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  8,  8,0xd1,1|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8, 16,0xe1,1|OAM_BEHIND,
// 16,  8,0xd2,1|OAM_BEHIND,
// 16, 16,0xe2,1|OAM_BEHIND,
// 24,  8,0xd3,1|OAM_BEHIND,
// 24, 16,0xe3,1|OAM_BEHIND,
// 32,  8,0xd1,1|OAM_BEHIND,
// 32, 16,0xe1,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_55[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  8,  8,0xd2,1|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8, 16,0xe2,1|OAM_BEHIND,
// 16,  8,0xd3,1|OAM_BEHIND,
// 16, 16,0xe3,1|OAM_BEHIND,
// 24,  8,0xd1,1|OAM_BEHIND,
// 24, 16,0xe1,1|OAM_BEHIND,
// 32,  8,0xa6,1|OAM_BEHIND,
// 32, 16,0xe3,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_56[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  8,  8,0xd3,1|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8, 16,0xe3,1|OAM_BEHIND,
// 16,  8,0xd1,1|OAM_BEHIND,
// 16, 16,0xe1,1|OAM_BEHIND,
// 24,  8,0xa6,1|OAM_BEHIND,
// 24, 16,0xe3,1|OAM_BEHIND,
// 32,  8,0xa3,1|OAM_BEHIND,
// 32, 16,0xb3,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_57[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  8,  8,0xd1,1|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8, 16,0xe1,1|OAM_BEHIND,
// 16,  8,0xa6,1|OAM_BEHIND,
// 16, 16,0xe3,1|OAM_BEHIND,
// 24,  8,0xa3,1|OAM_BEHIND,
// 24, 16,0xb3,1|OAM_BEHIND,
// 32,  8,0xb7,1|OAM_FLIP_V|OAM_BEHIND,
// 32, 16,0xb4,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_58[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  8,  8,0xa6,1|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8, 16,0xe3,1|OAM_BEHIND,
// 16,  8,0xa3,1|OAM_BEHIND,
// 16, 16,0xb3,1|OAM_BEHIND,
// 32,  8,0xb7,1|OAM_FLIP_V|OAM_BEHIND,
// 32, 16,0xb4,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 24,  8,0xb7,1|OAM_FLIP_V|OAM_BEHIND,
// 24, 16,0xb4,1|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_59[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  8,  8,0xa3,1|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8, 16,0xb3,1|OAM_BEHIND,
// 32,  8,0xe3,1|OAM_FLIP_V|OAM_BEHIND,
// 32, 16,0xe3,1|OAM_BEHIND,
// 24,  8,0xb7,1|OAM_FLIP_V|OAM_BEHIND,
// 24, 16,0xb4,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 16,  8,0xb7,1|OAM_FLIP_V|OAM_BEHIND,
// 16, 16,0xb4,1|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_60[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
// 24,  8,0xe3,1|OAM_FLIP_V|OAM_BEHIND,
// 24, 16,0xe3,1|OAM_BEHIND,
// 16,  8,0xb7,1|OAM_FLIP_V|OAM_BEHIND,
// 16, 16,0xb4,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
//  8,  8,0xb7,1|OAM_FLIP_V|OAM_BEHIND,
//  8, 16,0xb4,1|OAM_BEHIND,
// 32, 16,0xb6,1|OAM_BEHIND,
// 32,  8,0xb6,1|OAM_FLIP_H|OAM_FLIP_V|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_61[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
// 16,  8,0xe3,1|OAM_FLIP_V|OAM_BEHIND,
// 16, 16,0xe3,1|OAM_BEHIND,
//  8,  8,0xb7,1|OAM_FLIP_V|OAM_BEHIND,
//  8, 16,0xb4,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 32,  8,0xa2,1|OAM_BEHIND,
// 32, 16,0xb2,1|OAM_BEHIND,
// 24, 16,0xb6,1|OAM_BEHIND,
// 24,  8,0xb6,1|OAM_FLIP_H|OAM_FLIP_V|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_62[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8,  8,0xe3,1|OAM_FLIP_V|OAM_BEHIND,
//  8, 16,0xe3,1|OAM_BEHIND,
// 32,  8,0xd1,1|OAM_BEHIND,
// 32, 16,0xd1,1|OAM_FLIP_V|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 24,  8,0xa2,1|OAM_BEHIND,
// 24, 16,0xb2,1|OAM_BEHIND,
// 16, 16,0xb6,1|OAM_BEHIND,
// 16,  8,0xb6,1|OAM_FLIP_H|OAM_FLIP_V|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_63[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
// 32,  8,0xa5,1|OAM_BEHIND,
// 32, 16,0xb5,1|OAM_BEHIND,
// 24,  8,0xd1,1|OAM_BEHIND,
// 24, 16,0xd1,1|OAM_FLIP_V|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 16,  8,0xa2,1|OAM_BEHIND,
// 16, 16,0xb2,1|OAM_BEHIND,
//  8, 16,0xb6,1|OAM_BEHIND,
//  8,  8,0xb6,1|OAM_FLIP_H|OAM_FLIP_V|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_64[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
// 24,  8,0xa5,1|OAM_BEHIND,
// 24, 16,0xb5,1|OAM_BEHIND,
// 16,  8,0xd1,1|OAM_BEHIND,
// 16, 16,0xd1,1|OAM_FLIP_V|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
//  8,  8,0xa2,1|OAM_BEHIND,
//  8, 16,0xb2,1|OAM_BEHIND,
// 32, 16,0xa0,1|OAM_FLIP_V|OAM_BEHIND,
// 32,  8,0xa0,1|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_65[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
// 16,  8,0xa5,1|OAM_BEHIND,
// 16, 16,0xb5,1|OAM_BEHIND,
//  8,  8,0xd1,1|OAM_BEHIND,
//  8, 16,0xd1,1|OAM_FLIP_V|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 32,  8,0xa6,1|OAM_BEHIND,
// 32, 16,0xe3,1|OAM_BEHIND,
// 24, 16,0xa0,1|OAM_FLIP_V|OAM_BEHIND,
// 24,  8,0xa0,1|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_66[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8,  8,0xa5,1|OAM_BEHIND,
//  8, 16,0xb5,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 24,  8,0xa6,1|OAM_BEHIND,
// 24, 16,0xe3,1|OAM_BEHIND,
// 16, 16,0xa0,1|OAM_FLIP_V|OAM_BEHIND,
// 16,  8,0xa0,1|OAM_BEHIND,
// 32,  8,0xa7,1|OAM_BEHIND,
// 32, 16,0xb5,1|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_67[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 16,  8,0xa6,1|OAM_BEHIND,
// 16, 16,0xe3,1|OAM_BEHIND,
//  8, 16,0xa0,1|OAM_FLIP_V|OAM_BEHIND,
//  8,  8,0xa0,1|OAM_BEHIND,
// 24,  8,0xa7,1|OAM_BEHIND,
// 24, 16,0xb5,1|OAM_BEHIND,
// 32,  8,0xa0,1|OAM_BEHIND,
// 32, 16,0xb0,1|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_68[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
//  8,  8,0xa6,1|OAM_BEHIND,
//  8, 16,0xe3,1|OAM_BEHIND,
// 16,  8,0xa7,1|OAM_BEHIND,
// 16, 16,0xb5,1|OAM_BEHIND,
// 24,  8,0xa0,1|OAM_BEHIND,
// 24, 16,0xb0,1|OAM_BEHIND,
// 32,  8,0xa1,1|OAM_BEHIND,
// 32, 16,0xb1,1|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_69[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 32,  8,0xd1,1|OAM_BEHIND,
// 32, 16,0xe1,1|OAM_BEHIND,
//  8,  8,0xa7,1|OAM_BEHIND,
//  8, 16,0xb5,1|OAM_BEHIND,
// 16,  8,0xa0,1|OAM_BEHIND,
// 16, 16,0xb0,1|OAM_BEHIND,
// 24,  8,0xa1,1|OAM_BEHIND,
// 24, 16,0xb1,1|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_70[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 24,  8,0xd1,1|OAM_BEHIND,
// 24, 16,0xe1,1|OAM_BEHIND,
//  8,  8,0xa0,1|OAM_BEHIND,
//  8, 16,0xb0,1|OAM_BEHIND,
// 16,  8,0xa1,1|OAM_BEHIND,
// 16, 16,0xb1,1|OAM_BEHIND,
// 32,  8,0xd1,1|OAM_BEHIND,
// 32, 16,0xe1,1|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_71[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 16,  8,0xd1,1|OAM_BEHIND,
// 16, 16,0xe1,1|OAM_BEHIND,
// 32,  8,0xd1,1|OAM_BEHIND,
// 32, 16,0xe1,1|OAM_BEHIND,
//  8,  8,0xa1,1|OAM_BEHIND,
//  8, 16,0xb1,1|OAM_BEHIND,
// 24,  8,0xd1,1|OAM_BEHIND,
// 24, 16,0xe1,1|OAM_BEHIND,
// 128

// };

// const unsigned char gaspump_72[]={

//  0,  8,0xd0,0|OAM_BEHIND,
//  8,  0,0xc1,0|OAM_BEHIND,
// 16,  0,0xc2,0|OAM_BEHIND,
// 24,  0,0xc3,0|OAM_BEHIND,
// 32,  0,0xc4,0|OAM_BEHIND,
// 40,  0,0xc5,0|OAM_BEHIND,
// 48,  0,0xc6,0|OAM_BEHIND,
//  0, 16,0xe0,0|OAM_BEHIND,
//  8, 24,0xf1,0|OAM_BEHIND,
// 16, 24,0xf2,0|OAM_BEHIND,
// 24, 24,0xf3,0|OAM_BEHIND,
// 32, 24,0xf4,0|OAM_BEHIND,
// 40, 24,0xf5,0|OAM_BEHIND,
// 48, 24,0xf6,0|OAM_BEHIND,
// 48, 16,0xe6,0|OAM_BEHIND,
// 48,  8,0xd6,0|OAM_BEHIND,
// 40,  8,0xd5,0|OAM_BEHIND,
// 40, 16,0xe5,0|OAM_BEHIND,
//  8,  8,0xd1,1|OAM_BEHIND,
//  8, 16,0xe1,1|OAM_BEHIND,
// 16,  8,0xd1,1|OAM_BEHIND,
// 16, 16,0xe1,1|OAM_BEHIND,
// 24,  8,0xd1,1|OAM_BEHIND,
// 24, 16,0xe1,1|OAM_BEHIND,
// 32,  8,0xd1,1|OAM_BEHIND,
// 32, 16,0xe4,1|OAM_BEHIND,
//  0,  0,0xc0,0|OAM_BEHIND,
//  0, 24,0xf0,0|OAM_BEHIND,
// 128

// };

const unsigned char blimp_0[]={

 0,  8,0xd0,0|OAM_BEHIND,
 8,  0,0xc1,0|OAM_BEHIND,
16,  0,0xc2,0|OAM_BEHIND,
24,  0,0xc3,0|OAM_BEHIND,
32,  0,0xc4,0|OAM_BEHIND,
40,  0,0xc5,0|OAM_BEHIND,
48,  0,0xc6,0|OAM_BEHIND,
 0, 16,0xe0,0|OAM_BEHIND,
 8, 24,0xf1,0|OAM_BEHIND,
16, 24,0xf2,0|OAM_BEHIND,
24, 24,0xf3,0|OAM_BEHIND,
32, 24,0xf4,0|OAM_BEHIND,
40, 24,0xf5,0|OAM_BEHIND,
48, 24,0xf6,0|OAM_BEHIND,
48, 16,0xe6,0|OAM_BEHIND,
48,  8,0xd6,0|OAM_BEHIND,
40,  8,0xd5,0|OAM_BEHIND,
40, 16,0xe5,0|OAM_BEHIND,
 8,  8,0xd1,1|OAM_BEHIND,
 8, 16,0xe1,1|OAM_BEHIND,
16,  8,0xd1,1|OAM_BEHIND,
16, 16,0xe1,1|OAM_BEHIND,
24,  8,0xd1,1|OAM_BEHIND,
24, 16,0xe1,1|OAM_BEHIND,
32,  8,0xa5,1|OAM_BEHIND,
32, 16,0xe3,1|OAM_BEHIND,
 0,  0,0xc0,0|OAM_BEHIND,
 0, 24,0xf0,0|OAM_BEHIND,
128

};

const unsigned char blimp_1[]={

 0,  8,0xd0,0|OAM_BEHIND,
 8,  0,0xc1,0|OAM_BEHIND,
16,  0,0xc2,0|OAM_BEHIND,
24,  0,0xc3,0|OAM_BEHIND,
32,  0,0xc4,0|OAM_BEHIND,
40,  0,0xc5,0|OAM_BEHIND,
48,  0,0xc6,0|OAM_BEHIND,
 0, 16,0xe0,0|OAM_BEHIND,
 8, 24,0xf1,0|OAM_BEHIND,
16, 24,0xf2,0|OAM_BEHIND,
24, 24,0xf3,0|OAM_BEHIND,
32, 24,0xf4,0|OAM_BEHIND,
40, 24,0xf5,0|OAM_BEHIND,
48, 24,0xf6,0|OAM_BEHIND,
48, 16,0xe6,0|OAM_BEHIND,
48,  8,0xd6,0|OAM_BEHIND,
40,  8,0xd5,0|OAM_BEHIND,
40, 16,0xe5,0|OAM_BEHIND,
 8,  8,0xd1,1|OAM_BEHIND,
 8, 16,0xe1,1|OAM_BEHIND,
16,  8,0xd1,1|OAM_BEHIND,
16, 16,0xe1,1|OAM_BEHIND,
32,  8,0xb7,1|OAM_FLIP_V|OAM_BEHIND,
32, 16,0xb4,1|OAM_BEHIND,
24,  8,0xa5,1|OAM_BEHIND,
24, 16,0xe3,1|OAM_BEHIND,
 0,  0,0xc0,0|OAM_BEHIND,
 0, 24,0xf0,0|OAM_BEHIND,
128

};

const unsigned char blimp_2[]={

 0,  8,0xd0,0|OAM_BEHIND,
 8,  0,0xc1,0|OAM_BEHIND,
16,  0,0xc2,0|OAM_BEHIND,
24,  0,0xc3,0|OAM_BEHIND,
32,  0,0xc4,0|OAM_BEHIND,
40,  0,0xc5,0|OAM_BEHIND,
48,  0,0xc6,0|OAM_BEHIND,
 0, 16,0xe0,0|OAM_BEHIND,
 8, 24,0xf1,0|OAM_BEHIND,
16, 24,0xf2,0|OAM_BEHIND,
24, 24,0xf3,0|OAM_BEHIND,
32, 24,0xf4,0|OAM_BEHIND,
40, 24,0xf5,0|OAM_BEHIND,
48, 24,0xf6,0|OAM_BEHIND,
48, 16,0xe6,0|OAM_BEHIND,
48,  8,0xd6,0|OAM_BEHIND,
40,  8,0xd5,0|OAM_BEHIND,
40, 16,0xe5,0|OAM_BEHIND,
 8,  8,0xd1,1|OAM_BEHIND,
 8, 16,0xe1,1|OAM_BEHIND,
24,  8,0xb7,1|OAM_FLIP_V|OAM_BEHIND,
24, 16,0xb4,1|OAM_BEHIND,
16,  8,0xa5,1|OAM_BEHIND,
16, 16,0xe3,1|OAM_BEHIND,
 0,  0,0xc0,0|OAM_BEHIND,
 0, 24,0xf0,0|OAM_BEHIND,
32,  8,0xa0,1|OAM_BEHIND,
32, 16,0xa0,1|OAM_FLIP_V|OAM_BEHIND,
128

};

const unsigned char blimp_3[]={

 0,  8,0xd0,0|OAM_BEHIND,
 8,  0,0xc1,0|OAM_BEHIND,
16,  0,0xc2,0|OAM_BEHIND,
24,  0,0xc3,0|OAM_BEHIND,
32,  0,0xc4,0|OAM_BEHIND,
40,  0,0xc5,0|OAM_BEHIND,
48,  0,0xc6,0|OAM_BEHIND,
 0, 16,0xe0,0|OAM_BEHIND,
 8, 24,0xf1,0|OAM_BEHIND,
16, 24,0xf2,0|OAM_BEHIND,
24, 24,0xf3,0|OAM_BEHIND,
32, 24,0xf4,0|OAM_BEHIND,
40, 24,0xf5,0|OAM_BEHIND,
48, 24,0xf6,0|OAM_BEHIND,
48, 16,0xe6,0|OAM_BEHIND,
48,  8,0xd6,0|OAM_BEHIND,
40,  8,0xd5,0|OAM_BEHIND,
40, 16,0xe5,0|OAM_BEHIND,
32,  8,0xc7,1|OAM_BEHIND,
32, 16,0xb5,1|OAM_BEHIND,
16,  8,0xb7,1|OAM_FLIP_V|OAM_BEHIND,
16, 16,0xb4,1|OAM_BEHIND,
 8,  8,0xa5,1|OAM_BEHIND,
 8, 16,0xe3,1|OAM_BEHIND,
 0,  0,0xc0,0|OAM_BEHIND,
 0, 24,0xf0,0|OAM_BEHIND,
24,  8,0xa0,1|OAM_BEHIND,
24, 16,0xa0,1|OAM_FLIP_V|OAM_BEHIND,
128

};

const unsigned char blimp_4[]={

 0,  8,0xd0,0|OAM_BEHIND,
 8,  0,0xc1,0|OAM_BEHIND,
16,  0,0xc2,0|OAM_BEHIND,
24,  0,0xc3,0|OAM_BEHIND,
32,  0,0xc4,0|OAM_BEHIND,
40,  0,0xc5,0|OAM_BEHIND,
48,  0,0xc6,0|OAM_BEHIND,
 0, 16,0xe0,0|OAM_BEHIND,
 8, 24,0xf1,0|OAM_BEHIND,
16, 24,0xf2,0|OAM_BEHIND,
24, 24,0xf3,0|OAM_BEHIND,
32, 24,0xf4,0|OAM_BEHIND,
40, 24,0xf5,0|OAM_BEHIND,
48, 24,0xf6,0|OAM_BEHIND,
48, 16,0xe6,0|OAM_BEHIND,
48,  8,0xd6,0|OAM_BEHIND,
40,  8,0xd5,0|OAM_BEHIND,
40, 16,0xe5,0|OAM_BEHIND,
24,  8,0xc7,1|OAM_BEHIND,
24, 16,0xb5,1|OAM_BEHIND,
 8,  8,0xb7,1|OAM_FLIP_V|OAM_BEHIND,
 8, 16,0xb4,1|OAM_BEHIND,
32,  8,0xa5,1|OAM_BEHIND,
32, 16,0xb7,1|OAM_BEHIND,
 0,  0,0xc0,0|OAM_BEHIND,
 0, 24,0xf0,0|OAM_BEHIND,
16,  8,0xa0,1|OAM_BEHIND,
16, 16,0xa0,1|OAM_FLIP_V|OAM_BEHIND,
128

};

const unsigned char blimp_5[]={

 0,  8,0xd0,0|OAM_BEHIND,
 8,  0,0xc1,0|OAM_BEHIND,
16,  0,0xc2,0|OAM_BEHIND,
24,  0,0xc3,0|OAM_BEHIND,
32,  0,0xc4,0|OAM_BEHIND,
40,  0,0xc5,0|OAM_BEHIND,
48,  0,0xc6,0|OAM_BEHIND,
 0, 16,0xe0,0|OAM_BEHIND,
 8, 24,0xf1,0|OAM_BEHIND,
16, 24,0xf2,0|OAM_BEHIND,
24, 24,0xf3,0|OAM_BEHIND,
32, 24,0xf4,0|OAM_BEHIND,
40, 24,0xf5,0|OAM_BEHIND,
48, 24,0xf6,0|OAM_BEHIND,
48, 16,0xe6,0|OAM_BEHIND,
48,  8,0xd6,0|OAM_BEHIND,
40,  8,0xd5,0|OAM_BEHIND,
40, 16,0xe5,0|OAM_BEHIND,
16,  8,0xc7,1|OAM_BEHIND,
16, 16,0xb5,1|OAM_BEHIND,
32,  8,0xd1,1|OAM_BEHIND,
32, 16,0xe1,1|OAM_BEHIND,
24,  8,0xa5,1|OAM_BEHIND,
24, 16,0xb7,1|OAM_BEHIND,
 0,  0,0xc0,0|OAM_BEHIND,
 0, 24,0xf0,0|OAM_BEHIND,
 8,  8,0xa0,1|OAM_BEHIND,
 8, 16,0xa0,1|OAM_FLIP_V|OAM_BEHIND,
128

};

const unsigned char blimp_6[]={

 0,  8,0xd0,0|OAM_BEHIND,
 8,  0,0xc1,0|OAM_BEHIND,
16,  0,0xc2,0|OAM_BEHIND,
24,  0,0xc3,0|OAM_BEHIND,
32,  0,0xc4,0|OAM_BEHIND,
40,  0,0xc5,0|OAM_BEHIND,
48,  0,0xc6,0|OAM_BEHIND,
 0, 16,0xe0,0|OAM_BEHIND,
 8, 24,0xf1,0|OAM_BEHIND,
16, 24,0xf2,0|OAM_BEHIND,
24, 24,0xf3,0|OAM_BEHIND,
32, 24,0xf4,0|OAM_BEHIND,
40, 24,0xf5,0|OAM_BEHIND,
48, 24,0xf6,0|OAM_BEHIND,
48, 16,0xe6,0|OAM_BEHIND,
48,  8,0xd6,0|OAM_BEHIND,
40,  8,0xd5,0|OAM_BEHIND,
40, 16,0xe5,0|OAM_BEHIND,
 8,  8,0xc7,1|OAM_BEHIND,
 8, 16,0xb5,1|OAM_BEHIND,
24,  8,0xd1,1|OAM_BEHIND,
24, 16,0xe1,1|OAM_BEHIND,
16,  8,0xa5,1|OAM_BEHIND,
16, 16,0xb7,1|OAM_BEHIND,
 0,  0,0xc0,0|OAM_BEHIND,
 0, 24,0xf0,0|OAM_BEHIND,
32,  8,0xd1,1|OAM_BEHIND,
32, 16,0xe1,1|OAM_BEHIND,
128

};

const unsigned char blimp_7[]={

 0,  8,0xd0,0|OAM_BEHIND,
 8,  0,0xc1,0|OAM_BEHIND,
16,  0,0xc2,0|OAM_BEHIND,
24,  0,0xc3,0|OAM_BEHIND,
32,  0,0xc4,0|OAM_BEHIND,
40,  0,0xc5,0|OAM_BEHIND,
48,  0,0xc6,0|OAM_BEHIND,
 0, 16,0xe0,0|OAM_BEHIND,
 8, 24,0xf1,0|OAM_BEHIND,
16, 24,0xf2,0|OAM_BEHIND,
24, 24,0xf3,0|OAM_BEHIND,
32, 24,0xf4,0|OAM_BEHIND,
40, 24,0xf5,0|OAM_BEHIND,
48, 24,0xf6,0|OAM_BEHIND,
48, 16,0xe6,0|OAM_BEHIND,
48,  8,0xd6,0|OAM_BEHIND,
40,  8,0xd5,0|OAM_BEHIND,
40, 16,0xe5,0|OAM_BEHIND,
24,  8,0xd1,1|OAM_BEHIND,
24, 16,0xe1,1|OAM_BEHIND,
16,  8,0xd1,1|OAM_BEHIND,
16, 16,0xe1,1|OAM_BEHIND,
 8,  8,0xa5,1|OAM_BEHIND,
 8, 16,0xb7,1|OAM_BEHIND,
 0,  0,0xc0,0|OAM_BEHIND,
 0, 24,0xf0,0|OAM_BEHIND,
32,  8,0xd1,1|OAM_BEHIND,
32, 16,0xe1,1|OAM_BEHIND,
128

};

const unsigned char cloud_0[]={

 0,  0,0x49,2|OAM_BEHIND,
 8,  0,0x4a,2|OAM_BEHIND,
16,  0,0x4b,2|OAM_BEHIND,
 0,  8,0x59,2|OAM_BEHIND,
 8,  8,0x5a,2|OAM_BEHIND,
16,  8,0x5b,2|OAM_BEHIND,
128

};

// const unsigned char cloud_1[]={

//  2,  1,0x49,2|OAM_BEHIND,
//  0, 16,0x49,2|OAM_FLIP_V|OAM_BEHIND,
//  0,  8,0x69,2|OAM_BEHIND,
// 10,  1,0x4a,2|OAM_BEHIND,
// 34,  4,0x4b,2|OAM_BEHIND,
//  8,  8,0x48,2|OAM_BEHIND,
// 18,  0,0x6a,2|OAM_BEHIND,
// 26,  1,0x7a,2|OAM_FLIP_V|OAM_BEHIND,
// 33,  9,0x49,2|OAM_FLIP_H|OAM_BEHIND,
//  8, 18,0x7a,2|OAM_BEHIND,
// 16, 17,0x5a,2|OAM_BEHIND,
// 24, 19,0x7b,2|OAM_BEHIND,
// 29, 14,0x5b,2|OAM_BEHIND,
//  8, 11,0x48,2|OAM_BEHIND,
// 16,  7,0x48,2|OAM_BEHIND,
// 16, 13,0x48,2|OAM_BEHIND,
// 22,  8,0x48,2|OAM_BEHIND,
// 26,  8,0x48,2|OAM_BEHIND,
// 22, 12,0x48,2|OAM_BEHIND,
// 128

// };

// const unsigned char cloud_2[]={

//  0,  0,0x49,2|OAM_BEHIND,
//  6,  2,0x4b,2|OAM_BEHIND,
//  2,  7,0x79,2|OAM_BEHIND,
// 128

// };

// const unsigned char cloud_3[]={

// 10,  2,0x6a,2|OAM_BEHIND,
// 10, 10,0x7a,2|OAM_BEHIND,
//  3,  1,0x49,2|OAM_BEHIND,
//  2,  9,0x79,2|OAM_BEHIND,
// 15,  6,0x5b,2|OAM_BEHIND,
// 128

// };

// const unsigned char cloud_4[]={

//  0,  4,0x7a,2|OAM_BEHIND,
//  0,  1,0x4a,2|OAM_BEHIND,
//  3,  2,0x4b,2|OAM_BEHIND,
// - 2,  1,0x49,2|OAM_BEHIND,
// 128

// };


// const unsigned char truck_0[]={

//  0,  0,0x88,0,
//  8,  0,0x89,0,
// 16,  0,0x8a,0,
// 24,  0,0x8b,0,
// 32,  0,0x8c,0,
// 40,  0,0x8d,0,
// 48,  0,0x8e,0,
// 56,  0,0x8f,0,
//  0,  8,0x98,0,
//  8,  8,0x99,0,
// 16,  8,0x9a,0,
// 24,  8,0x9b,0,
// 32,  8,0x9c,0,
// 40,  8,0x9d,0,
// 48,  8,0x9e,0,
// 56,  8,0x9f,0,
//  0, 16,0xa8,0,
//  8, 16,0xa9,0,
// 16, 16,0xaa,0,
// 24, 16,0xab,0,
// 32, 16,0xac,0,
// 40, 16,0xad,0,
// 48, 16,0xae,0,
// 56, 16,0xaf,0,
//  0, 24,0xb8,0,
//  8, 24,0xb9,0,
// 16, 24,0xba,0,
// 24, 24,0xbb,0,
// 32, 24,0xbc,0,
// 40, 24,0xbd,0,
// 48, 24,0xbe,0,
// 56, 24,0xbf,0,
// 128

// };

// const unsigned char truck_1[]={

//  0,  0,0x88,0,
//  8,  0,0x89,0,
// 16,  0,0x8a,0,
// 24,  0,0x8b,0,
// 32,  0,0x8c,0,
// 40,  0,0x8d,0,
// 48,  0,0x8e,0,
// 56,  0,0x8f,0,
//  0,  8,0x98,0,
//  8,  8,0x99,0,
// 16,  8,0x9a,0,
// 24,  8,0x9b,0,
// 32,  8,0x9c,0,
// 40,  8,0x9d,0,
// 48,  8,0x9e,0,
// 56,  8,0x9f,0,
//  0, 16,0xa8,0,
//  8, 16,0xa9,0,
// 16, 16,0xaa,0,
// 24, 16,0xab,0,
// 32, 16,0xac,0,
// 40, 16,0xad,0,
// 48, 16,0xae,0,
// 56, 16,0xaf,0,
//  0, 24,0xb8,0,
//  8, 24,0xc9,0,
// 16, 24,0xba,0,
// 24, 24,0xcb,0,
// 32, 24,0xcc,0,
// 40, 24,0xcd,0,
// 48, 24,0xbe,0,
// 56, 24,0xcf,0,
// 128

// };

// const unsigned char truck_2[]={

//  0,  0,0x88,0,
//  8,  0,0x89,0,
// 16,  0,0x8a,0,
// 24,  0,0x8b,0,
// 32,  0,0x8c,0,
// 40,  0,0x8d,0,
// 48,  0,0x8e,0,
// 56,  0,0x8f,0,
//  0,  8,0x98,0,
//  8,  8,0x99,0,
// 16,  8,0x9a,0,
// 24,  8,0x9b,0,
// 32,  8,0x9c,0,
// 40,  8,0x9d,0,
// 48,  8,0x9e,0,
// 56,  8,0x9f,0,
//  0, 16,0xa8,0,
//  8, 16,0xa9,0,
// 16, 16,0xaa,0,
// 24, 16,0xab,0,
// 32, 16,0xac,0,
// 40, 16,0xad,0,
// 48, 16,0xae,0,
// 56, 16,0xaf,0,
//  0, 24,0xb8,0,
//  8, 24,0xd9,0,
// 16, 24,0xba,0,
// 24, 24,0xdb,0,
// 32, 24,0xdc,0,
// 40, 24,0xdd,0,
// 48, 24,0xde,0,
// 56, 24,0xdf,0,
// 128

// };

// const unsigned char truck_3[]={

//  0,  0,0x88,0,
//  8,  0,0x89,0,
// 16,  0,0x8a,0,
// 24,  0,0x8b,0,
// 32,  0,0x8c,0,
// 40,  0,0x8d,0,
// 48,  0,0x8e,0,
// 56,  0,0x8f,0,
//  0,  8,0x98,0,
//  8,  8,0x99,0,
// 16,  8,0x9a,0,
// 24,  8,0x9b,0,
// 32,  8,0x9c,0,
// 40,  8,0x9d,0,
// 48,  8,0x9e,0,
// 56,  8,0x9f,0,
//  0, 16,0xa8,0,
//  8, 16,0xa9,0,
// 16, 16,0xaa,0,
// 24, 16,0xab,0,
// 32, 16,0xac,0,
// 40, 16,0xad,0,
// 48, 16,0xae,0,
// 56, 16,0xaf,0,
//  0, 24,0xb8,0,
//  8, 24,0xe9,0,
// 16, 24,0xba,0,
// 24, 24,0xeb,0,
// 32, 24,0xec,0,
// 40, 24,0xed,0,
// 48, 24,0xee,0,
// 56, 24,0xdf,0,

// 128

// };


const unsigned char gasblimp_0[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,

24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 8,0xd1,1| OAM_BEHIND,
8, 16,0xe1,1| OAM_BEHIND,
16, 8,0xd1,1| OAM_BEHIND,
16, 16,0xe1,1| OAM_BEHIND,
24, 8,0xd1,1| OAM_BEHIND,
24, 16,0xe1,1| OAM_BEHIND,
32, 8,0xd1,1| OAM_BEHIND,
32, 16,0xe1,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
128

};

const unsigned char gasblimp_1[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,

40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
8, 8,0xd1,1| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 16,0xd1,1|OAM_FLIP_V| OAM_BEHIND,
24, 8,0xd1,1| OAM_BEHIND,
24, 16,0xe1,1| OAM_BEHIND,
32, 8,0xa0,1| OAM_BEHIND,
32, 16,0xa0,1|OAM_FLIP_V| OAM_BEHIND,
16, 8,0xd1,1| OAM_BEHIND,
16, 16,0xe1,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
128

};

const unsigned char gasblimp_2[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
8, 8,0xd1,1| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 16,0xd1,1|OAM_FLIP_V| OAM_BEHIND,
24, 8,0xa0,1| OAM_BEHIND,
24, 16,0xa0,1|OAM_FLIP_V| OAM_BEHIND,
32, 8,0xa0,1| OAM_BEHIND,
32, 16,0xb0,1| OAM_BEHIND,
16, 8,0xd1,1| OAM_BEHIND,
16, 16,0xe1,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
128

};

const unsigned char gasblimp_3[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
8, 8,0xd1,1| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 16,0xd1,1|OAM_FLIP_V| OAM_BEHIND,
16, 8,0xa0,1| OAM_BEHIND,
16, 16,0xa0,1|OAM_FLIP_V| OAM_BEHIND,
24, 8,0xa0,1| OAM_BEHIND,
24, 16,0xb0,1| OAM_BEHIND,

32, 8,0xd1,1| OAM_BEHIND,
32, 16,0xe1,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
128

};

const unsigned char gasblimp_4[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
8, 8,0xa0,1| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,

8, 16,0xa0,1|OAM_FLIP_V| OAM_BEHIND,
16, 8,0xa0,1| OAM_BEHIND,
16, 16,0xb0,1| OAM_BEHIND,
24, 8,0xd1,1| OAM_BEHIND,
24, 16,0xe1,1| OAM_BEHIND,
32, 8,0xa2,1| OAM_BEHIND,
32, 16,0xb2,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
128

};

const unsigned char gasblimp_5[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
8, 8,0xa0,1| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,

48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 16,0xb0,1| OAM_BEHIND,
16, 8,0xd1,1| OAM_BEHIND,
16, 16,0xe1,1| OAM_BEHIND,
24, 8,0xa2,1| OAM_BEHIND,
24, 16,0xb2,1| OAM_BEHIND,
32, 8,0xa3,1| OAM_BEHIND,
32, 16,0xb3,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
128

};

const unsigned char gasblimp_6[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
8, 8,0xd1,1| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,

8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 16,0xe1,1| OAM_BEHIND,
16, 8,0xa2,1| OAM_BEHIND,
16, 16,0xb2,1| OAM_BEHIND,
24, 8,0xa3,1| OAM_BEHIND,
24, 16,0xb3,1| OAM_BEHIND,
32, 8,0xa0,1| OAM_BEHIND,
32, 16,0xa0,1|OAM_FLIP_V| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
128

};

const unsigned char gasblimp_7[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,

32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
8, 8,0xa2,1| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 16,0xb2,1| OAM_BEHIND,
16, 8,0xa3,1| OAM_BEHIND,
16, 16,0xb3,1| OAM_BEHIND,
24, 8,0xa0,1| OAM_BEHIND,
24, 16,0xa0,1|OAM_FLIP_V| OAM_BEHIND,
32, 8,0xa4,1| OAM_BEHIND,
32, 16,0xa4,1|OAM_FLIP_V| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
128

};

const unsigned char gasblimp_8[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
8, 8,0xa3,1| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 8,0xd1,1| OAM_BEHIND,
8, 16,0xb3,1| OAM_BEHIND,
16, 8,0xa0,1| OAM_BEHIND,
16, 16,0xa0,1|OAM_FLIP_V| OAM_BEHIND,
24, 8,0xa4,1| OAM_BEHIND,
24, 16,0xa4,1|OAM_FLIP_V| OAM_BEHIND,
32, 8,0xd1,1| OAM_BEHIND,
32, 16,0xe1,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,

0, 24,0xf0,0| OAM_BEHIND,
128

};

const unsigned char gasblimp_9[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
8, 8,0xa0,1| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 16,0xa0,1|OAM_FLIP_V| OAM_BEHIND,
16, 8,0xa4,1| OAM_BEHIND,
16, 16,0xa4,1|OAM_FLIP_V| OAM_BEHIND,

24, 8,0xd1,1| OAM_BEHIND,
24, 16,0xe1,1| OAM_BEHIND,
32, 8,0xd2,1| OAM_BEHIND,
32, 16,0xe2,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
128

};

const unsigned char gasblimp_10[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
8, 8,0xa4,1| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,

40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 16,0xa4,1|OAM_FLIP_V| OAM_BEHIND,
16, 8,0xd1,1| OAM_BEHIND,
16, 16,0xe1,1| OAM_BEHIND,
24, 8,0xd2,1| OAM_BEHIND,
24, 16,0xe2,1| OAM_BEHIND,
32, 8,0xd4,1| OAM_BEHIND,
32, 16,0xe4,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
128

};

const unsigned char gasblimp_11[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
8, 8,0xd1,1| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,

32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 16,0xe1,1| OAM_BEHIND,
16, 8,0xd2,1| OAM_BEHIND,
16, 16,0xe2,1| OAM_BEHIND,
24, 8,0xd4,1| OAM_BEHIND,
24, 16,0xe4,1| OAM_BEHIND,
32, 8,0xd1,1| OAM_BEHIND,
32, 16,0xe1,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
128

};

const unsigned char gasblimp_12[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,

8, 8,0xd2,1| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 16,0xe2,1| OAM_BEHIND,
16, 8,0xd4,1| OAM_BEHIND,
16, 16,0xe4,1| OAM_BEHIND,
24, 8,0xd1,1| OAM_BEHIND,
24, 16,0xe1,1| OAM_BEHIND,
32, 8,0xa6,1| OAM_BEHIND,
32, 16,0xe3,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
128

};

const unsigned char gasblimp_13[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,

16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
8, 8,0xd4,1| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 16,0xe4,1| OAM_BEHIND,
16, 8,0xd1,1| OAM_BEHIND,
16, 16,0xe1,1| OAM_BEHIND,
24, 8,0xa6,1| OAM_BEHIND,
24, 16,0xe3,1| OAM_BEHIND,
32, 8,0xa3,1| OAM_BEHIND,
32, 16,0xb3,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
128

};

const unsigned char gasblimp_14[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
8, 8,0xd1,1| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 16,0xe1,1| OAM_BEHIND,
16, 8,0xa6,1| OAM_BEHIND,
16, 16,0xe3,1| OAM_BEHIND,
24, 8,0xa3,1| OAM_BEHIND,
24, 16,0xb3,1| OAM_BEHIND,
32, 8,0xb7,1|OAM_FLIP_V| OAM_BEHIND,
32, 16,0xb4,1| OAM_BEHIND,

0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
128

};

const unsigned char gasblimp_15[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
8, 8,0xa6,1| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 16,0xe3,1| OAM_BEHIND,
16, 8,0xa3,1| OAM_BEHIND,

16, 16,0xb3,1| OAM_BEHIND,
32, 8,0xb7,1|OAM_FLIP_V| OAM_BEHIND,
32, 16,0xb4,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
24, 8,0xb7,1|OAM_FLIP_V| OAM_BEHIND,
24, 16,0xb4,1| OAM_BEHIND,
128

};

const unsigned char gasblimp_16[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
8, 8,0xa3,1| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,

48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 16,0xb3,1| OAM_BEHIND,
32, 8,0xe3,1|OAM_FLIP_V| OAM_BEHIND,
32, 16,0xe3,1| OAM_BEHIND,
24, 8,0xb7,1|OAM_FLIP_V| OAM_BEHIND,
24, 16,0xb4,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
16, 8,0xb7,1|OAM_FLIP_V| OAM_BEHIND,
16, 16,0xb4,1| OAM_BEHIND,
128

};

const unsigned char gasblimp_17[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,

32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
24, 8,0xe3,1|OAM_FLIP_V| OAM_BEHIND,
24, 16,0xe3,1| OAM_BEHIND,
16, 8,0xb7,1|OAM_FLIP_V| OAM_BEHIND,
16, 16,0xb4,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
8, 8,0xb7,1|OAM_FLIP_V| OAM_BEHIND,
8, 16,0xb4,1| OAM_BEHIND,
32, 16,0xb6,1| OAM_BEHIND,
32, 8,0xb6,1|OAM_FLIP_H|OAM_FLIP_V| OAM_BEHIND,
128

};

const unsigned char gasblimp_18[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,

48, 0,0xc6,0| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
16, 8,0xe3,1|OAM_FLIP_V| OAM_BEHIND,
16, 16,0xe3,1| OAM_BEHIND,
8, 8,0xb7,1|OAM_FLIP_V| OAM_BEHIND,
8, 16,0xb4,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
32, 8,0xa2,1| OAM_BEHIND,
32, 16,0xb2,1| OAM_BEHIND,
24, 16,0xb6,1| OAM_BEHIND,
24, 8,0xb6,1|OAM_FLIP_H|OAM_FLIP_V| OAM_BEHIND,
128

};

const unsigned char gasblimp_19[]={

0, 8,0xd0,0| OAM_BEHIND,

8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 8,0xe3,1|OAM_FLIP_V| OAM_BEHIND,
8, 16,0xe3,1| OAM_BEHIND,
32, 8,0xd1,1| OAM_BEHIND,
32, 16,0xd1,1|OAM_FLIP_V| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
24, 8,0xa2,1| OAM_BEHIND,
24, 16,0xb2,1| OAM_BEHIND,
16, 16,0xb6,1| OAM_BEHIND,
16, 8,0xb6,1|OAM_FLIP_H|OAM_FLIP_V| OAM_BEHIND,
128

};

const unsigned char gasblimp_20[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
32, 8,0xa5,1| OAM_BEHIND,
32, 16,0xb5,1| OAM_BEHIND,
24, 8,0xd1,1| OAM_BEHIND,
24, 16,0xd1,1|OAM_FLIP_V| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
16, 8,0xa2,1| OAM_BEHIND,

16, 16,0xb2,1| OAM_BEHIND,
8, 16,0xb6,1| OAM_BEHIND,
8, 8,0xb6,1|OAM_FLIP_H|OAM_FLIP_V| OAM_BEHIND,
128

};

const unsigned char gasblimp_21[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
24, 8,0xa5,1| OAM_BEHIND,
24, 16,0xb5,1| OAM_BEHIND,

16, 8,0xd1,1| OAM_BEHIND,
16, 16,0xd1,1|OAM_FLIP_V| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
8, 8,0xa2,1| OAM_BEHIND,
8, 16,0xb2,1| OAM_BEHIND,
32, 16,0xa0,1|OAM_FLIP_V| OAM_BEHIND,
32, 8,0xa0,1| OAM_BEHIND,
128

};

const unsigned char gasblimp_22[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,

48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
16, 8,0xa5,1| OAM_BEHIND,
16, 16,0xb5,1| OAM_BEHIND,
8, 8,0xd1,1| OAM_BEHIND,
8, 16,0xd1,1|OAM_FLIP_V| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
32, 8,0xa6,1| OAM_BEHIND,
32, 16,0xe3,1| OAM_BEHIND,
24, 16,0xa0,1|OAM_FLIP_V| OAM_BEHIND,
24, 8,0xa0,1| OAM_BEHIND,
128

};

const unsigned char gasblimp_23[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,

24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
8, 8,0xa5,1| OAM_BEHIND,
8, 16,0xb5,1| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
24, 8,0xa6,1| OAM_BEHIND,
24, 16,0xe3,1| OAM_BEHIND,
16, 16,0xa0,1|OAM_FLIP_V| OAM_BEHIND,
16, 8,0xa0,1| OAM_BEHIND,
32, 8,0xa7,1| OAM_BEHIND,
32, 16,0xb5,1| OAM_BEHIND,
128

};

const unsigned char gasblimp_24[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,

40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
16, 8,0xa6,1| OAM_BEHIND,
16, 16,0xe3,1| OAM_BEHIND,
8, 16,0xa0,1|OAM_FLIP_V| OAM_BEHIND,
8, 8,0xa0,1| OAM_BEHIND,
24, 8,0xa7,1| OAM_BEHIND,
24, 16,0xb5,1| OAM_BEHIND,
32, 8,0xa0,1| OAM_BEHIND,
32, 16,0xb0,1| OAM_BEHIND,
128

};

const unsigned char gasblimp_25[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
8, 8,0xa6,1| OAM_BEHIND,
8, 16,0xe3,1| OAM_BEHIND,
16, 8,0xa7,1| OAM_BEHIND,
16, 16,0xb5,1| OAM_BEHIND,
24, 8,0xa0,1| OAM_BEHIND,
24, 16,0xb0,1| OAM_BEHIND,
32, 8,0xa1,1| OAM_BEHIND,
32, 16,0xb1,1| OAM_BEHIND,
128

};

const unsigned char gasblimp_26[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
32, 8,0xd1,1| OAM_BEHIND,
32, 16,0xe1,1| OAM_BEHIND,
8, 8,0xa7,1| OAM_BEHIND,
8, 16,0xb5,1| OAM_BEHIND,

16, 8,0xa0,1| OAM_BEHIND,
16, 16,0xb0,1| OAM_BEHIND,
24, 8,0xa1,1| OAM_BEHIND,
24, 16,0xb1,1| OAM_BEHIND,
128

};

const unsigned char gasblimp_27[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,
48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,

0, 24,0xf0,0| OAM_BEHIND,
24, 8,0xd1,1| OAM_BEHIND,
24, 16,0xe1,1| OAM_BEHIND,
8, 8,0xa0,1| OAM_BEHIND,
8, 16,0xb0,1| OAM_BEHIND,
16, 8,0xa1,1| OAM_BEHIND,
16, 16,0xb1,1| OAM_BEHIND,
32, 8,0xd1,1| OAM_BEHIND,
32, 16,0xe1,1| OAM_BEHIND,
128

};

const unsigned char gasblimp_28[]={

0, 8,0xd0,0| OAM_BEHIND,
8, 0,0xc1,0| OAM_BEHIND,
16, 0,0xc2,0| OAM_BEHIND,
24, 0,0xc3,0| OAM_BEHIND,
32, 0,0xc4,0| OAM_BEHIND,
40, 0,0xc5,0| OAM_BEHIND,
48, 0,0xc6,0| OAM_BEHIND,
0, 16,0xe0,0| OAM_BEHIND,
8, 24,0xf1,0| OAM_BEHIND,
16, 24,0xf2,0| OAM_BEHIND,
24, 24,0xf3,0| OAM_BEHIND,
32, 24,0xf4,0| OAM_BEHIND,
40, 24,0xf5,0| OAM_BEHIND,
48, 24,0xf6,0| OAM_BEHIND,

48, 16,0xe6,0| OAM_BEHIND,
48, 8,0xd6,0| OAM_BEHIND,
40, 8,0xd5,0| OAM_BEHIND,
40, 16,0xe5,0| OAM_BEHIND,
0, 0,0xc0,0| OAM_BEHIND,
0, 24,0xf0,0| OAM_BEHIND,
16, 8,0xd1,1| OAM_BEHIND,
16, 16,0xe1,1| OAM_BEHIND,
32, 8,0xd1,1| OAM_BEHIND,
32, 16,0xe1,1| OAM_BEHIND,
8, 8,0xa1,1| OAM_BEHIND,
8, 16,0xb1,1| OAM_BEHIND,
24, 8,0xd1,1| OAM_BEHIND,
24, 16,0xe1,1| OAM_BEHIND,
128

};


//86
const unsigned char truck_0[]={

	  0,  0,0x88,0,
	  8,  0,0x89,0,
	 16,  0,0x8a,0,
	 24,  0,0x8b,0,
	 32,  0,0x8c,0,
	 40,  0,0x8d,0,
	 48,  8,0x8e,0,
	 48,  8,0x9e,0,
	 48, 16,0xae,0,
	  0,  8,0x98,0,
	  8,  8,0xf8,2,
	 16,  8,0xf9,2,
	 24,  8,0xfa,2,
	 32,  8,0x9c,0,
	 40,  8,0x9d,0,
	 48, 24,0xbe,0,
	 48,  0,0x8e,0,
	 40, 24,0xbd,0,
	 32, 24,0xbc,0,
	 24, 24,0xbb,0,
	 16, 24,0xba,0,
	  8, 24,0xb9,0,
	  0, 24,0xb8,0,
	  0, 16,0xa8,0,
	  8, 16,0xa9,0,
	 16, 16,0xaa,0,
	 24, 16,0xab,0,
	 32, 16,0xac,0,
	 40, 16,0xad,0,
	128

};

const unsigned char truck_1[]={

	  0,  0,0x88,0,
	  8,  0,0x89,0,
	 16,  0,0x8a,0,
	 24,  0,0x8b,0,
	 32,  0,0x8c,0,
	 40,  0,0x8d,0,
	 48,  8,0x8e,0,
	 48,  8,0x9e,0,
	 48, 16,0xae,0,
	  0,  8,0x98,0,
	  8,  8,0xf8,2,
	 16,  8,0xf9,2,
	 24,  8,0xfa,2,
	 32,  8,0x9c,0,
	 40,  8,0x9d,0,
	 48, 24,0xce,0,
	 48,  0,0x8e,0,
	 40, 24,0xbd,0,
	 32, 24,0xcc,0,
	 24, 24,0xcb,0,
	 16, 24,0xba,0,
	  8, 24,0xc9,0,
	  0, 24,0xb8,0,
	  0, 16,0xa8,0,
	  8, 16,0xa9,0,
	 16, 16,0xaa,0,
	 24, 16,0xab,0,
	 32, 16,0xac,0,
	 40, 16,0xad,0,
	128

};

const unsigned char truck_2[]={

	  0,  0,0x88,0,
	  8,  0,0x89,0,
	 16,  0,0x8a,0,
	 24,  0,0x8b,0,
	 32,  0,0x8c,0,
	 40,  0,0x8d,0,
	 48,  8,0x8e,0,
	 48,  8,0x9e,0,
	 48, 16,0xae,0,
	  0,  8,0x98,0,
	  8,  8,0xf8,2,
	 16,  8,0xf9,2,
	 24,  8,0xfa,2,
	 32,  8,0x9c,0,
	 40,  8,0x9d,0,
	 48, 24,0xde,0,
	 48,  0,0x8e,0,
	 40, 24,0xdd,0,
	 32, 24,0xdc,0,
	 24, 24,0xdb,0,
	 16, 24,0xba,0,
	  8, 24,0xd9,0,
	  0, 24,0xb8,0,
	  0, 16,0xa8,0,
	  8, 16,0xa9,0,
	 16, 16,0xaa,0,
	 24, 16,0xab,0,
	 32, 16,0xac,0,
	 40, 16,0xad,0,
	128

};

const unsigned char truck_breakdown_0[]={

	  0,  0,0x88,0,
	  8,  0,0x89,0,
	 16,  0,0x8a,0,
	 24,  0,0x8b,0,
	 32,  0,0x8c,0,
	 40,  0,0x8d,0,
	 48,  8,0x8e,0,
	 48,  8,0x9e,0,
	 48, 16,0xae,0,
	  0,  8,0x98,0,
	  8,  8,0xf8,2,
	 16,  8,0xf9,2,
	 24,  8,0xfa,2,
	 32,  8,0x9c,0,
	 40,  8,0x9d,0,
	 48, 24,0xde,0,
	 48,  0,0xef,1,
	 40, 24,0xed,0,
	 32, 24,0xdc,0,
	 24, 24,0xeb,0,
	 16, 24,0xba,0,
	  8, 24,0xe9,0,
	  0, 24,0xb8,0,
	  0, 16,0xa8,0,
	  8, 16,0xa9,0,
	 16, 16,0xaa,0,
	 24, 16,0xab,0,
	 32, 16,0xac,0,
	 40, 16,0xad,0,
	128

};

const unsigned char truck_breakdown_1[]={

	  0,  0,0x88,0,
	  8,  0,0x89,0,
	 16,  0,0x8a,0,
	 24,  0,0x8b,0,
	 32,  0,0x8c,0,
	 40,  0,0x8d,0,
	 48,  8,0x8e,0,
	 48,  8,0x9e,0,
	 48, 16,0xae,0,
	  0,  8,0x98,0,
	  8,  8,0xf8,2,
	 16,  8,0xf9,2,
	 24,  8,0xfa,2,
	 32,  8,0x9c,0,
	 40,  8,0x9d,0,
	 48, 24,0xde,0,
	 48,  0,0xdf,1,
	 40, 24,0xed,0,
	 32, 24,0xdc,0,
	 24, 24,0xeb,0,
	 16, 24,0xba,0,
	  8, 24,0xe9,0,
	  0, 24,0xb8,0,
	  0, 16,0xa8,0,
	  8, 16,0xa9,0,
	 16, 16,0xaa,0,
	 24, 16,0xab,0,
	 32, 16,0xac,0,
	 40, 16,0xad,0,
	128

};

const unsigned char truck_breakdown_2[]={

	  0,  0,0x88,0,
	  8,  0,0x89,0,
	 16,  0,0x8a,0,
	 24,  0,0x8b,0,
	 32,  0,0x8c,0,
	 40,  0,0x8d,0,
	 48,  8,0x8e,0,
	 48,  8,0x9e,0,
	 48, 16,0xae,0,
	  0,  8,0x98,0,
	  8,  8,0xf8,2,
	 16,  8,0xf9,2,
	 24,  8,0xfa,2,
	 32,  8,0x9c,0,
	 40,  8,0x9d,0,
	 48, 24,0xde,0,
	 48,  0,0xcf,1,
	 40, 24,0xed,0,
	 32, 24,0xdc,0,
	 24, 24,0xeb,0,
	 16, 24,0xba,0,
	  8, 24,0xe9,0,
	  0, 24,0xb8,0,
	  0, 16,0xa8,0,
	  8, 16,0xa9,0,
	 16, 16,0xaa,0,
	 24, 16,0xab,0,
	 32, 16,0xac,0,
	 40, 16,0xad,0,
	128

};

const unsigned char truck_breakdown_3[]={

	  0,  0,0x88,0,
	  8,  0,0x89,0,
	 16,  0,0x8a,0,
	 24,  0,0x8b,0,
	 32,  0,0x8c,0,
	 40,  0,0x8d,0,
	 48,  8,0x8e,0,
	 48,  8,0x9e,0,
	 48, 16,0xae,0,
	  0,  8,0x98,0,
	  8,  8,0xf8,2,
	 16,  8,0xf9,2,
	 24,  8,0xfa,2,
	 32,  8,0x9c,0,
	 40,  8,0x9d,0,
	 48, 24,0xde,0,
	 48,  0,0xbf,1,
	 40, 24,0xed,0,
	 32, 24,0xdc,0,
	 24, 24,0xeb,0,
	 16, 24,0xba,0,
	  8, 24,0xe9,0,
	  0, 24,0xb8,0,
	  0, 16,0xa8,0,
	  8, 16,0xa9,0,
	 16, 16,0xaa,0,
	 24, 16,0xab,0,
	 32, 16,0xac,0,
	 40, 16,0xad,0,
	128

};

const unsigned char truck_breakdown_4[]={

	  0,  0,0x88,0,
	  8,  0,0x89,0,
	 16,  0,0x8a,0,
	 24,  0,0x8b,0,
	 32,  0,0x8c,0,
	 40,  0,0x8d,0,
	 48,  8,0x8e,0,
	 48,  8,0x9e,0,
	 48, 16,0xae,0,
	  0,  8,0x98,0,
	  8,  8,0xf8,2,
	 16,  8,0xf9,2,
	 24,  8,0xfa,2,
	 32,  8,0x9c,0,
	 40,  8,0x9d,0,
	 48, 24,0xde,0,
	 48,  0,0xcf,1,
	 40, 24,0xed,0,
	 32, 24,0xdc,0,
	 24, 24,0xeb,0,
	 16, 24,0xba,0,
	  8, 24,0xe9,0,
	  0, 24,0xb8,0,
	  0, 16,0xa8,0,
	  8, 16,0xa9,0,
	 16, 16,0xaa,0,
	 24, 16,0xab,0,
	 32, 16,0xac,0,
	 40, 16,0xad,0,
	 47,- 9,0xaf,1,
	128

};

const unsigned char truck_breakdown_5[]={

	  0,  0,0x88,0,
	  8,  0,0x89,0,
	 16,  0,0x8a,0,
	 24,  0,0x8b,0,
	 32,  0,0x8c,0,
	 40,  0,0x8d,0,
	 48,  8,0x8e,0,
	 48,  8,0x9e,0,
	 48, 16,0xae,0,
	  0,  8,0x98,0,
	  8,  8,0xf8,2,
	 16,  8,0xf9,2,
	 24,  8,0xfa,2,
	 32,  8,0x9c,0,
	 40,  8,0x9d,0,
	 48, 24,0xde,0,
	 48,  0,0xdf,1,
	 40, 24,0xed,0,
	 32, 24,0xdc,0,
	 24, 24,0xeb,0,
	 16, 24,0xba,0,
	  8, 24,0xe9,0,
	  0, 24,0xb8,0,
	  0, 16,0xa8,0,
	  8, 16,0xa9,0,
	 16, 16,0xaa,0,
	 24, 16,0xab,0,
	 32, 16,0xac,0,
	 40, 16,0xad,0,
	 47,- 9,0x9f,1,
	128

};

const unsigned char truck_breakdown_6[]={

	  0,  0,0x88,0,
	  8,  0,0x89,0,
	 16,  0,0x8a,0,
	 24,  0,0x8b,0,
	 32,  0,0x8c,0,
	 40,  0,0x8d,0,
	 48,  8,0x8e,0,
	 48,  8,0x9e,0,
	 48, 16,0xae,0,
	  0,  8,0x98,0,
	  8,  8,0xf8,2,
	 16,  8,0xf9,2,
	 24,  8,0xfa,2,
	 32,  8,0x9c,0,
	 40,  8,0x9d,0,
	 48, 24,0xde,0,
	 48,  0,0xcf,1,
	 40, 24,0xed,0,
	 32, 24,0xdc,0,
	 24, 24,0xeb,0,
	 16, 24,0xba,0,
	  8, 24,0xe9,0,
	  0, 24,0xb8,0,
	  0, 16,0xa8,0,
	  8, 16,0xa9,0,
	 16, 16,0xaa,0,
	 45,-18,0x49,1,
	 24, 16,0xab,0,
	 48,-15,0x7b,1,
	 32, 16,0xac,0,
	 40, 16,0xad,0,
	 47,- 9,0x9f,1,
	 47,-14,0x79,1,
	 48,-17,0x6b,1,
	128

};

const unsigned char truck_breakdown_7[]={

	  0,  0,0x88,0,
	  8,  0,0x89,0,
	 16,  0,0x8a,0,
	 24,  0,0x8b,0,
	 32,  0,0x8c,0,
	 40,  0,0x8d,0,
	 48,  8,0x8e,0,
	 48,  8,0x9e,0,
	 48, 16,0xae,0,
	  0,  8,0x98,0,
	  8,  8,0xf8,2,
	 16,  8,0xf9,2,
	 24,  8,0xfa,2,
	 32,  8,0x9c,0,
	 40,  8,0x9d,0,
	 48, 24,0xde,0,
	 48,  0,0xdf,1,
	 40, 24,0xed,0,
	 32, 24,0xdc,0,
	 24, 24,0xeb,0,
	 16, 24,0xba,0,
	  8, 24,0xe9,0,
	  0, 24,0xb8,0,
	  0, 16,0xa8,0,
	 43,-13,0x79,1,
	  8, 16,0xa9,0,
	 16, 16,0xaa,0,
	 42,-18,0x49,1,
	 24, 16,0xab,0,
	 32, 16,0xac,0,
	 40, 16,0xad,0,
	 47,- 9,0xaf,1,
	 49,-16,0x7b,1,
	 50,-16,0x6b,1,
	128

};

const unsigned char truck_breakdown_8[]={

	  0,  0,0x88,0,
	  8,  0,0x89,0,
	 16,  0,0x8a,0,
	 24,  0,0x8b,0,
	 32,  0,0x8c,0,
	 40,  0,0x8d,0,
	 48,  8,0x8e,0,
	 48,  8,0x9e,0,
	 48, 16,0xae,0,
	  0,  8,0x98,0,
	  8,  8,0xf8,2,
	 16,  8,0xf9,2,
	 24,  8,0xfa,2,
	 32,  8,0x9c,0,
	 40,  8,0x9d,0,
	 48, 24,0xde,0,
	 48,  0,0xef,1,
	 40, 24,0xed,0,
	 32, 24,0xdc,0,
	 24, 24,0xeb,0,
	 16, 24,0xba,0,
	  8, 24,0xe9,0,
	  0, 24,0xb8,0,
	  0, 16,0xa8,0,
	 45,-14,0x79,1,
	  8, 16,0xa9,0,
	 16, 16,0xaa,0,
	 45,-18,0x49,1,
	 24, 16,0xab,0,
	 32, 16,0xac,0,
	 40, 16,0xad,0,
	 47,- 9,0x8f,1,
	 51,-17,0x6b,1,
	 49,-16,0x7b,1,
	128

};

const unsigned char truck_breakdown_9[]={

	  0,  0,0x88,0,
	  8,  0,0x89,0,
	 16,  0,0x8a,0,
	 24,  0,0x8b,0,
	 32,  0,0x8c,0,
	 40,  0,0x8d,0,
	 48,  8,0x8e,0,
	 48,  8,0x9e,0,
	 48, 16,0xae,0,
	  0,  8,0x98,0,
	  8,  8,0xf8,2,
	 16,  8,0xf9,2,
	 24,  8,0xfa,2,
	 32,  8,0x9c,0,
	 40,  8,0x9d,0,
	 48, 24,0xde,0,
	 48,  0,0x8e,0,
	 40, 24,0xed,0,
	 32, 24,0xdc,0,
	 24, 24,0xeb,0,
	 16, 24,0xba,0,
	  8, 24,0xe9,0,
	  0, 24,0xb8,0,
	  0, 16,0xa8,0,
	 47,-15,0x79,1,
	  8, 16,0xa9,0,
	 16, 16,0xaa,0,
	 46,-18,0x49,1,
	 24, 16,0xab,0,
	 32, 16,0xac,0,
	 40, 16,0xad,0,
	 48,-16,0x7b,1,
	128

};

const unsigned char truck_breakdown_10[]={

	  0,  0,0x88,0,
	  8,  0,0x89,0,
	 16,  0,0x8a,0,
	 24,  0,0x8b,0,
	 32,  0,0x8c,0,
	 40,  0,0x8d,0,
	 48,  8,0x8e,0,
	 48,  8,0x9e,0,
	 48, 16,0xae,0,
	  0,  8,0x98,0,
	  8,  8,0xf8,2,
	 16,  8,0xf9,2,
	 24,  8,0xfa,2,
	 32,  8,0x9c,0,
	 40,  8,0x9d,0,
	 48, 24,0xde,0,
	 48,  0,0x8e,0,
	 40, 24,0xed,0,
	 32, 24,0xdc,0,
	 24, 24,0xeb,0,
	 16, 24,0xba,0,
	  8, 24,0xe9,0,
	  0, 24,0xb8,0,
	  0, 16,0xa8,0,
	  8, 16,0xa9,0,
	 16, 16,0xaa,0,
	 24, 16,0xab,0,
	 32, 16,0xac,0,
	 40, 16,0xad,0,
	 48,-17,0x9f,1,
	128

};

const unsigned char truck_breakdown_11[]={

	  0,  0,0x88,0,
	  8,  0,0x89,0,
	 16,  0,0x8a,0,
	 24,  0,0x8b,0,
	 32,  0,0x8c,0,
	 40,  0,0x8d,0,
	 48,  8,0x8e,0,
	 48,  8,0x9e,0,
	 48, 16,0xae,0,
	  0,  8,0x98,0,
	  8,  8,0xf8,2,
	 16,  8,0xf9,2,
	 24,  8,0xfa,2,
	 32,  8,0x9c,0,
	 40,  8,0x9d,0,
	 48, 24,0xde,0,
	 48,  0,0x8e,0,
	 40, 24,0xed,0,
	 32, 24,0xdc,0,
	 24, 24,0xeb,0,
	 16, 24,0xba,0,
	  8, 24,0xe9,0,
	  0, 24,0xb8,0,
	  0, 16,0xa8,0,
	  8, 16,0xa9,0,
	 16, 16,0xaa,0,
	 24, 16,0xab,0,
	 32, 16,0xac,0,
	 40, 16,0xad,0,
	 48,-17,0xaf,1,
	128

};

const unsigned char truck_breakdown_12[]={

	  0,  0,0x88,0,
	  8,  0,0x89,0,
	 16,  0,0x8a,0,
	 24,  0,0x8b,0,
	 32,  0,0x8c,0,
	 40,  0,0x8d,0,
	 48,  8,0x8e,0,
	 48,  8,0x9e,0,
	 48, 16,0xae,0,
	  0,  8,0x98,0,
	  8,  8,0xf8,2,
	 16,  8,0xf9,2,
	 24,  8,0xfa,2,
	 32,  8,0x9c,0,
	 40,  8,0x9d,0,
	 48, 24,0xde,0,
	 48,  0,0x8e,0,
	 40, 24,0xed,0,
	 32, 24,0xdc,0,
	 24, 24,0xeb,0,
	 16, 24,0xba,0,
	  8, 24,0xe9,0,
	  0, 24,0xb8,0,
	  0, 16,0xa8,0,
	  8, 16,0xa9,0,
	 16, 16,0xaa,0,
	 24, 16,0xab,0,
	 32, 16,0xac,0,
	 40, 16,0xad,0,
	 48,-17,0x8f,1,
	128

};

const unsigned char tumbleweed_0[]={

	  0,- 8,0x00,3,
	  8,- 8,0x01,3,
	  0,  0,0x10,3,
	  8,  0,0x11,3,
	128

};

const unsigned char tumbleweed_1[]={

	  0,- 8,0x02,3,
	  8,- 8,0x03,3,
	  0,  0,0x12,3,
	  8,  0,0x13,3,
	128

};

const unsigned char tumbleweed_2[]={

	  0,- 8,0x20,3,
	  8,- 8,0x21,3,
	  0,  0,0x30,3,
	  8,  0,0x31,3,
	128

};

const unsigned char tumbleweed_3[]={

	  0,  0,0x02,3|OAM_FLIP_V,
	  8,  0,0x03,3|OAM_FLIP_V,
	  0,- 8,0x12,3|OAM_FLIP_V,
	  8,- 8,0x13,3|OAM_FLIP_V,
	128

};

const unsigned char tumbleweed_4[]={

	  0,  0,0x00,3|OAM_FLIP_V,
	  8,  0,0x01,3|OAM_FLIP_V,
	  0,- 8,0x10,3|OAM_FLIP_V,
	  8,- 8,0x11,3|OAM_FLIP_V,
	128

};

const unsigned char tumbleweed_5[]={

	  8,  0,0x02,3|OAM_FLIP_H|OAM_FLIP_V,
	  0,  0,0x03,3|OAM_FLIP_H|OAM_FLIP_V,
	  8,- 8,0x12,3|OAM_FLIP_H|OAM_FLIP_V,
	  0,- 8,0x13,3|OAM_FLIP_H|OAM_FLIP_V,
	128

};

const unsigned char tumbleweed_6[]={

	  8,- 8,0x20,3|OAM_FLIP_H,
	  0,- 8,0x21,3|OAM_FLIP_H,
	  8,  0,0x30,3|OAM_FLIP_H,
	  0,  0,0x31,3|OAM_FLIP_H,
	128

};

const unsigned char tumbleweed_7[]={

	  8,- 8,0x02,3|OAM_FLIP_H,
	  0,- 8,0x03,3|OAM_FLIP_H,
	  8,  0,0x12,3|OAM_FLIP_H,
	  0,  0,0x13,3|OAM_FLIP_H,
	128

};

const unsigned char balloon_0[]={

	 13, 17,0x6f,0|OAM_BEHIND,
	  0,-24,0x0c,0|OAM_BEHIND,
	  8,-24,0x0d,0|OAM_BEHIND,
	 16,-24,0x0e,0|OAM_BEHIND,
	 24,-24,0x0f,0|OAM_BEHIND,
	  0,-16,0x1c,0|OAM_BEHIND,
	  8,-16,0x1d,0|OAM_BEHIND,
	 16,-16,0x1e,0|OAM_BEHIND,
	 24,-16,0x1f,0|OAM_BEHIND,
	  0,- 8,0x2c,0|OAM_BEHIND,
	  8,- 8,0x2d,0|OAM_BEHIND,
	 16,- 8,0x2e,0|OAM_BEHIND,
	 12, 25,0x7f,3|OAM_BEHIND,
	 24,- 8,0x2f,0|OAM_BEHIND,
	  0,  0,0x3c,0|OAM_BEHIND,
	  8,  0,0x3d,0|OAM_BEHIND,
	 16,  0,0x3e,0|OAM_BEHIND,
	 24,  0,0x3f,0|OAM_BEHIND,
	  8,  8,0x4d,0|OAM_BEHIND,
	 16,  8,0x4e,0|OAM_BEHIND,
	  8, 16,0x5d,3|OAM_BEHIND,
	 16, 16,0x5e,3|OAM_BEHIND,
	  8, 24,0x6d,0|OAM_BEHIND,
	 16, 24,0x6e,0|OAM_BEHIND,
	  8, 32,0x7d,0|OAM_BEHIND,
	 16, 32,0x7e,0|OAM_BEHIND,
	128

};

const unsigned char balloon_1[]={

	 12, 17,0x6f,0|OAM_BEHIND,
	  0,-24,0x0c,0|OAM_BEHIND,
	  8,-24,0x0d,0|OAM_BEHIND,
	 16,-24,0x0e,0|OAM_BEHIND,
	 24,-24,0x0f,0|OAM_BEHIND,
	  0,-16,0x1c,0|OAM_BEHIND,
	  8,-16,0x1d,0|OAM_BEHIND,
	 16,-16,0x1e,0|OAM_BEHIND,
	 24,-16,0x1f,0|OAM_BEHIND,
	  0,- 8,0x2c,0|OAM_BEHIND,
	  8,- 8,0x2d,0|OAM_BEHIND,
	 16,- 8,0x2e,0|OAM_BEHIND,
	 12, 25,0x7f,3|OAM_BEHIND,
	 24,- 8,0x2f,0|OAM_BEHIND,
	  0,  0,0x3c,0|OAM_BEHIND,
	  8,  0,0x3d,0|OAM_BEHIND,
	 16,  0,0x3e,0|OAM_BEHIND,
	 24,  0,0x3f,0|OAM_BEHIND,
	  8,  8,0x4d,0|OAM_BEHIND,
	 16,  8,0x4e,0|OAM_BEHIND,
	  8, 16,0x5d,3|OAM_BEHIND,
	 16, 16,0x5e,3|OAM_BEHIND,
	  8, 24,0x6d,0|OAM_BEHIND,
	 16, 24,0x6e,0|OAM_BEHIND,
	  8, 32,0x7d,0|OAM_BEHIND,
	 16, 32,0x7e,0|OAM_BEHIND,
	128

};
