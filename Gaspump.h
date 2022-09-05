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
unsigned char cost5_changed;
unsigned char cost4_changed;
unsigned char cost3_changed;
unsigned char cost2_changed;
unsigned char cost1_changed;

unsigned char gas5;
unsigned char gas4;
unsigned char gas3;
unsigned char gas2;
unsigned char gas1;
unsigned char gas5_changed;
unsigned char gas4_changed;
unsigned char gas3_changed;
unsigned char gas2_changed;
unsigned char gas1_changed;

unsigned int gas_speed;
unsigned int cost_speed;

#define GAS_STEP 50
#define COST_STEP 80

unsigned char pad1;
unsigned char pad1_new;
unsigned char trigger_pulled;
unsigned char trigger_clicked;
unsigned char sprite_cost;
unsigned char cost_sprite;

unsigned char game_mode;
enum
{
	MODE_TITLE,
	MODE_GAME,
	MODE_PAUSE,
	MODE_INTRO,
	MODE_SWITCH,
	MODE_TALKING_TIME,
	MODE_DECISION_TIME,
	MODE_END,
	MODE_GAME_OVER,
};

const unsigned char * pointer;

unsigned char temp1;
unsigned char temp2;

int address;
unsigned char x; 
unsigned char y;
unsigned char num_holder;
unsigned char index = 0;
unsigned char index2;
int largeindex;

#pragma bss-name(push, "BSS")


#pragma bss-name(push, "XRAM")
// extra RAM at $6000-$7fff
unsigned char wram_array[0x2000];

// PROTOTYPES
void adjust_cost(void);
void adjust_gas(void);
void draw_cost(void);
void draw_gas(void);
void draw_sprites(void);
void read_input(void);
void find_sprite(void);
void init_mode_title(void);
void init_mode_intro(void);
void init_mode_game(void);
void draw_number_as_bg_tile(void);
// void new_star(void);
// void draw_box(void);
// void draw_star(void);

