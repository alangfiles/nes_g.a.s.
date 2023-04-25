// variables

#define NAMETABLE_A_ATTR 0x23C0
#define NAMETABLE_B_ATTR 0x27C0
#define NAMETABLE_C_ATTR 0x2BC0
#define NAMETABLE_D_ATTR 0x2FC0

//samples
#define SAMPLE_HEYYOU 27
#define SAMPLE_FILLERUP 32
#define SAMPLE_GADZOOKS 25
#define SAMPLE_WHATWASTHAT 29
#define SAMPLE_HEHEHE 32
#define SAMPLE_QUACK 34


const unsigned int LAST_LEVEL_GOAL = 59;

#pragma bss-name(push, "ZEROPAGE")
unsigned char pad1_zapper;
unsigned char zapper_ready; // wait till it's 0
unsigned char hit_detected;
const unsigned char debug_mode = 1;


unsigned int scroll_y;
unsigned int scroll_x;
unsigned char scrolled_past_once;
unsigned char scroll_page;
unsigned char scroll_page_end;
unsigned char stop_scrolling;
unsigned char scroll_wait_lines;

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

unsigned char aliengas3;
unsigned char aliengas2;
unsigned char aliengas1;
unsigned char temp;
unsigned char temp2;


unsigned char gas_pump_level_quality = 255;
unsigned char alien_level;
unsigned char alien_level_cleared;
unsigned char alien_level_failed;
unsigned int gas_goal;
unsigned int gas_goal_hundreds;
const unsigned char gas_goal_array[] = {1, 2, 3, 4};

unsigned int gas_speed;
unsigned int cost_speed;
unsigned int gas_pumped;
unsigned char final_boss_beat = 0;

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
unsigned char abduction_cutscene_step;



enum 
{
	AWFUL_PUMP,
	BAD_PUMP,
	GOOD_PUMP,
	PERFECT_PUMP,
	OVER_PUMP
};

enum 
{
	SFX_EXPLOSION,
	SFX_DUCK,
	SFX_GOODJOB,
	SFX_BADJOB,
	SFX_PERFECT,
	SFX_SHOT,
};

enum 
{
	SONG_TITLE, //nesjazz
	SONG_INTROSCROLL,
	SONG_INTROCUTSCENE,
	SONG_TALKINGTIME,
	SONG_GASPUMP,
	SONG_ABDUCTIONCUTSCENE,
	SONG_ALIENTALKINGTIME,
	SONG_ALIENPUMP,
	SONG_ENDINGSPACE,
	SONG_ENDINGSCROLL,
	SONG_ASCENTIONOFZ,
};

enum
{
	ABDUCTION_START,
	ABDUCTION_BEAM,
	ABDUCTION_BEAM_UP,
	ABDUCTION_BEAM_RETRACT,
	ABDUCTION_SHIP_FLY_OFF,
	ABDUCTION_SCROLL_UP,
	ABDUCTION_STAR_IN_SKY,
	ABDUCTION_DONE,
};

enum
{
	STARFIELD1,
	STARFIELD2,
	STARFIELD3,
	STARFIELD4,
	STARFIELD5,
	STARFIELD6,
	STARFIELD7,
	STARFIELD8,
};

enum
{
	MODE_TITLE,
	MODE_GAME,
	MODE_PAUSE,
	MODE_INTRO_SCROLL,
	MODE_INTRO_CUTSCENE,
	MODE_INTRO_INSTRUCTION,
	MODE_EVALUATION_TIME,
	MODE_ABDUCTION_CUTSCENE,
	MODE_ALIEN_INSTRUCTION,
	MODE_ALIEN_LEVEL,
	MODE_ALIEN_EVALUATION,
	MODE_ALIEN_STARFIELD,
	MODE_GAME_ENDING,
	MODE_GAME_OVER,
};

enum
{
	START_OF_GAME,
	LEVEL_ONE_COMPLETE,
};

enum
{
	ALIEN_INITIAL_INSTRUCTION,
	ALIEN_EVALUATION,
};

enum
{
	GASPUMP_CHR_0,
	GASPUMP_CHR_1,
	TALKING_TIME_CHR_0,
	TALKING_TIME_CHR_1,
	CUTSCENE_GUN_CHR_0,
	CUTSCENE_GUN_CHR_1,
	CUTSCENE_CHR_0,
	CUTSCENE_CHR_1,
	FUTUREPUMP_CHR_0,
	FUTUREPUMP_CHR_1,
	CUTSCENE_ABDUCTION_CHR_0,
	CUTSCENE_ABDUCTION_CHR_1,
	GAMEOVER_CHR_0,
	GAMEOVER_CHR_1,
	STARFIELD_CHR_0,
	STARFIELD_CHR_1,
	FUTURETALK_CHR_0,
	FUTURETALK_CHR_1,
	GASPUMP_ALT_CHR_0,
	GASPUMP_ALT_CHR_1,
	FUTUREPUMP_ALT_CHR_0,
	FUTUREPUMP_ALT_CHR_1,
	FUTUREPUMP_ALT_2_CHR_0,
	FUTUREPUMP_ALT_2_CHR_1,
	TITLESCREEN_CHR_0,
	TITLESCREEN_CHR_1,
};

const unsigned char *pointer;
const unsigned char *sprite_pointer;
unsigned char boss_level;

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
unsigned char nametable_selected = 0;
unsigned char shooting_mode = 0;
unsigned char chr_bank=0;
unsigned char starfield_enemies=0;

unsigned char starfield_complete=0;
unsigned char enemies_hit=0;

unsigned char lives = 3;

unsigned char index2;
unsigned char index3 = 0;
unsigned char scroll_per_nmi;
int largeindex;

unsigned char text_rendered;
unsigned char text_length;
unsigned char text_row;
unsigned char text_col;
unsigned char text_x_start;
unsigned char text_y_start;
unsigned char alien_level_status;

unsigned int moveframes;
unsigned int moveframes2;

unsigned int x_speed;
unsigned int y_speed;


unsigned char reset_level;
unsigned char sc_eye_frames;
unsigned char sc_mouth_frames;
unsigned int sprite_frames;

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
// void bank_0_init_mode_intro_cutscene(void);
void gas_level_init(void);
// void init_level_one_end(void);
void draw_number_as_bg_tile(void);
void draw_level_one_sprites(void);
void draw_talking_time(void);
// void draw_talking_time_background(void);
// void draw_evaluation_time_background(void);
// void draw_talking_time_sprites(void);
void clear_background(void);
void white_background(void);
void reset_game_variables(void);
void wait_a_little(void);
void draw_title_background(void);
void level_end_loop(void);
void wait_and_fade_out(void);
// void new_star(void);
// void draw_box(void);
// void draw_star(void);
