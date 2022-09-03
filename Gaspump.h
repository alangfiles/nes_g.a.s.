//variables

#pragma bss-name(push, "ZEROPAGE")
unsigned char pad2_zapper;
unsigned char zapper_ready; //wait till it's 0
unsigned char hit_detected;

unsigned char cost5;
unsigned char cost4;
unsigned char cost3;
unsigned char cost2;
unsigned char cost1;

unsigned char gas6;
unsigned char gas5;
unsigned char gas4;
unsigned char gas3;
unsigned char gas2;
unsigned char gas1;

unsigned int gas_speed;
unsigned int cost_speed;

#define GAS_STEP 500
#define COST_STEP 80

unsigned char pad1;
unsigned char pad1_new;
unsigned char input_active;


unsigned char star_active;
unsigned char star_color;
unsigned int star_x;
unsigned int star_y;
unsigned int star_x_speed;
unsigned int star_y_speed;
unsigned char star_wait;

unsigned char temp1;
unsigned char temp2;

#pragma bss-name(push, "BSS")


// PROTOTYPES
void adjust_cost(void);
void adjust_gas(void);
void draw_cost(void);
void draw_gas(void);
void debug_zap(void);
// void new_star(void);
// void draw_box(void);
// void draw_star(void);

