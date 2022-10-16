//variables

#pragma bss-name(push, "ZEROPAGE")
unsigned char pad1_zapper;
unsigned char zapper_ready; //wait till it's 0
unsigned char hit_detected;
const unsigned char debug_mode = 1;

unsigned int scroll_y;
unsigned char scrolled_past_once;
unsigned char scroll_page;
unsigned char scroll_page_end;
unsigned char stop_scrolling;

unsigned char option;

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


unsigned int gas_goal;
unsigned int gas_goal_hundreds;
const unsigned char gas_goal_array[]={1,2,3,4};

unsigned int gas_speed;
unsigned int cost_speed;
unsigned int gas_pumped;

#define GAS_STEP 50
#define COST_STEP 80

#define LEVEL_ONE_TARGET 200

unsigned char pad1;
unsigned char pad1_new;
unsigned char trigger_pulled;
unsigned char trigger_clicked;
unsigned char debug_trigger_hit;
unsigned char debug_trigger_miss;
unsigned char started_pumping;

unsigned char sprite_cost;
unsigned char cost_sprite;

unsigned char game_mode;
unsigned char game_level;
unsigned char levels_complete;
unsigned char perfect_levels;

enum
{
	MODE_TITLE,
	MODE_GAME,
	MODE_PAUSE,
	MODE_INTRO_SCROLL,
	MODE_INTRO_CUTSCENE,
	MODE_INTRO_INSTRUCTION,
	MODE_TALKING_TIME,
	MODE_END,
	MODE_GAME_OVER,
};

enum
{
	START_OF_GAME,
	LEVEL_ONE_COMPLETE,
};

enum
{
	LEVEL1_BG_CHR,
	LEVEL1_FG_CHR,
	TALKING_TIME_CHR,
	TALKING_TIME_CHR_2,
	INTRO_CHR,
	INTRO_CHR_2,
};

const unsigned char * pointer;

unsigned char temp1;
unsigned char temp2;
int tempint;
unsigned char talking_time = 0;

unsigned char bird_x;
unsigned char bird_y;

int address;
unsigned char x; 
unsigned char y;
unsigned char num_holder;
unsigned char index = 0;
unsigned char index2;
int largeindex;

unsigned char text_rendered;
unsigned char text_length;
unsigned char text_row;
unsigned char text_col;

unsigned char moveframes;

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
void typewriter(void);
void reset_text_values(void);
void bank_0_init_mode_intro_cutscene(void);
void init_mode_game(void);
void init_level_one_end(void);
void draw_number_as_bg_tile(void);
void draw_level_one_sprites(void);
void draw_talking_time(void);
void draw_talking_time_background(void);
void draw_evaluation_time_background(void);
void draw_talking_time_sprites(void);
void clear_background(void);
void white_background(void);
void reset_game_variables(void);
void wait_a_little(void);
void draw_title_background(void);
// void new_star(void);
// void draw_box(void);
// void draw_star(void);

