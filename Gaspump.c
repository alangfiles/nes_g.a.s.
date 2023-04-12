/*	Based off code by nesdoug
 */

/*  Development todo:
 *
 *
 * POLISH:
 * Alan todo list
 * [] add blimp and dataeast truck to 3rd level
 * [] add extra scroll to starfield
 * [] sound effects
 * 
[] brian: exploding sprite for starfield level.
[x] alan: finish up starfield (12 shootables go past, then you fly to earth and get the scroll)
[] alan: starfield ending cutscene
[x] alan: add Al angry sprites for bad pumping
[] both: do something for the 3rd level (clouds)
[] brian: sound effects (dcm or normal or whatever, ps I think the bird is a noise channel flap plus a dcm quack)
[] both?: redo some songs (maybe remove from talking time, etc)
[] alan: add score/speed/accuracy stuff to evaluation

 * [] remove skipping the talking time
	* [] Add sound effects
	*   *  Glug Glug
	*   *  Shooting
	*   *  Ding for the perfect pump amount?
	*   *  bad pump ending
	*   *  Good job fanfare
	*   *  Bad job fanfare
 *
 * Other ideas:
 * [] second controller can shoot the whole time?
 * [] give amounts in dollars instead of gallons sometimes?
 * 
 * BUGS:
 * [] Fix planet scrolling attribute tables
 * [] check all of al's text
 *
 * game flow:
 * title->intro_scroll->intro_cutscene->
 * talking_time(level1)->level1->evaluation(level1)-> (repeat if failed)
 * talking_time(level2)->level2->evaluation(level2)-> (repeat if failed)
 * talking_time(level3)->level3->evaluation(level3)-> (repeat if failed)
 * last_level_cutscene (abduction)->
 * talking_time(level4)->level4(space)->evaluation(level4) (probably a new screen)->
 * (if failed) go to gameoverscreen.
 * shooting_level???->ending_scroll
 *
 */

#include "LIB/neslib.h"
#include "LIB/nesdoug.h"

#include "LIB/zaplib.h"
#include "MMC1/bank_helpers.h"
#include "MMC1/bank_helpers.c"
#include "Gaspump.h"

#include "Sprites.h"
#include "Metatiles.h"
#include "BACKGROUNDS/main_gas_level.h"

#include "BACKGROUNDS/evaluation.h"
#include "BACKGROUNDS/talkingtime.h"

const unsigned char starfield_palette[16] = {
		0x0f, 0x11, 0x29, 0x10,
		0x0f, 0x21, 0x11, 0x10,
		0x0f, 0x16, 0x05, 0x38,
		0x0f, 0x24, 0x13, 0x14};

const unsigned char gameover_palette[16] = {
	0x15,0x00,0x3d,0x30,
	0x15,0x05,0x16,0x36,
	0x15,0x00,0x3d,0x2d,
	0x15,0x09,0x19,0x38};

	const unsigned char title_screen_palette[16] = { 0x1b,0x0f,0x16,0x36,0x1b,0x05,0x16,0x36,0x1b,0x00,0x16,0x30,0x1b,0x09,0x2c,0x30 };
const unsigned char title_screen_palette_alt[16] = {0x11,0x0f,0x16,0x36,0x11,0x05,0x16,0x36,0x11,0x00,0x16,0x30,0x11,0x09,0x2c,0x30  };

const unsigned char futurepump_sprite_palette[16] = {0x0f, 0x12, 0x15, 0x38, 0x0f, 0x13, 0x23, 0x31, 0x0f, 0x23, 0x16, 0x26, 0x0f, 0x09, 0x19, 0x29};

const unsigned char gaspump_palette[16] = {
		0x2c, 0x05, 0x10, 0x15,
		0x2c, 0x05, 0x37, 0x15,
		0x2c, 0x0f, 0x3d, 0x11,    
		0x2c, 0x19, 0x2a, 0x0f};

const unsigned char futuretalk_palette[16] = {0x0f, 0x00, 0x10, 0x30, 0x0f, 0x13, 0x23, 0x31, 0x0f, 0x00, 0x11, 0x30, 0x0f, 0x09, 0x19, 0x29};

const unsigned char futurepump_palette[16] = {
		0x0f, 0x00, 0x10, 0x30,
		0x0f, 0x13, 0x23, 0x31, 
		0x0f, 0x23, 0x16, 0x26,   
		0x0f, 0x09, 0x19, 0x29};  

const unsigned char talking_time_palette[] = {
		0x0f,0x31,0x16,0x36,
		0x0f,0x06,0x16,0x36,  
		0x0f,0x00,0x11,0x20,  
		0x0f,0x11,0x15,0x30};  

const unsigned char talking_time_sp_palette[16] = {
	0x0f,0x20,0x11,0x36,
	0x0f,0x05,0x16,0x36,
	0x0f,0x20,0x08,0x36,
	0x0f,0x30,0x16,0x36 
	};

const unsigned char intro_cutscene_gun_palette[16] = {
		0x0f, 0x10, 0x2a, 0x15,
		0x0f, 0x10, 0x16, 0x26,
		0x0f, 0x00, 0x1b, 0x30,
		0x0f, 0x26, 0x00, 0x10};

const unsigned char intro_cutscene_palette[16] = {
		0x0f, 0x00, 0x10, 0x30,
		0x0f, 0x06, 0x21, 0x31,
		0x0f, 0x06, 0x00, 0x38,
		0x0f, 0x06, 0x19, 0x29};

const unsigned char gaspump_sprite_palette[] = {
		0x0f, 0x20, 0x16, 0x36,
		0x0f, 0x05, 0x2c, 0x36,
		0x0f, 0x2c, 0x21, 0x11,
		0x0f,0x05,0x1a,0x38 };

const unsigned char abduction_palette[16] = {0x0f, 0x16, 0x3d, 0x30, 0x0f, 0x10, 0x21, 0x00, 0x0f, 0x05, 0x00, 0x38, 0x0f, 0x24, 0x0c, 0x2a};

const unsigned char endingscroll_palette[16]={ 0x0f,0x00,0x10,0x15,0x0f,0x01,0x21,0x31,0x0f,0x00,0x11,0x30,0x0f,0x09,0x19,0x2a };

const unsigned char alert_1[16] = {
		0x0f,
		0x07,
		0x16,
		0x25,
		0x0f,
		0x07,
		0x16,
		0x25,
		0x0f,
		0x07,
		0x16,
		0x25,
		0x0f,
		0x07,
		0x16,
		0x25
};


const unsigned char alert_2[16] = {
		0x0f,
		0x17,
		0x27,
		0x38,
		0x0f,
		0x17,
		0x27,
		0x38,
		0x0f,
		0x17,
		0x27,
		0x38,
		0x0f,
		0x17,
		0x27,
		0x38
};

const unsigned char fade_1[16] = {
		0x0f,
		0x04,
		0x07,
		0x10,
		0x0f,
		0x04,
		0x07,
		0x10,
		0x0f,
		0x04,
		0x07,
		0x10,
		0x0f,
		0x04,
		0x07,
		0x10,
};
const unsigned char fade_2[16] = {
		0x0f,
		0x0C,
		0x08,
		0x2D,
		0x0f,
		0x0C,
		0x08,
		0x2D,
		0x0f,
		0x0C,
		0x08,
		0x2D,
		0x0f,
		0x0C,
		0x08,
		0x2D,
};

enum
{
	BANK_0,
	BANK_1,
	BANK_2,
	BANK_3,
	BANK_4,
	BANK_5,
	BANK_6
};
// 7 shouldn't be needed, that's the fixed bank, just call it normally

/*
 * Bank0 is used for the intro scroll and cutscene
 */
#pragma region BANK0
// BANK0 is being used for the INTRO_CUTSCENE
#pragma rodata-name("BANK0")
#pragma code-name("BANK0")
#include "BACKGROUNDS/intro_cutscene_1.h"
#include "BACKGROUNDS/intro_cutscene_2.h"
#include "BACKGROUNDS/intro_cutscene_3.h"
#include "BACKGROUNDS/intro_scroll_1.h"
#include "BACKGROUNDS/intro_scroll_2.h"
#include "BACKGROUNDS/intro_scroll_3.h"
#include "BACKGROUNDS/intro_scroll_4.h"
#include "BACKGROUNDS/intro_scroll_5.h"
#include "BACKGROUNDS/intro_single_page.h"
#include "BACKGROUNDS/cutscenegun_small_arrow.h"

void bank_1_instructions_init(void); // prototype (needed to get call from bank_1)
int cutscene_index = NAMETABLE_A;
int nametable_index = 0;
int attribute_table_index = 0;

unsigned char attribute_bytes_written = 0;
unsigned char line_counter = 0;
unsigned char screen_line_counter = 0;

void bank_0_intro_scroll_init(void)
{
	nametable_index = 0;
	scrolled_past_once = 0;
	stop_scrolling = 0;
	moveframes = 0;
	line_counter = 0;
	screen_line_counter = 0;
	scroll_wait_lines = 32; // wait this many lines before drawing (not working)
	scroll_page = 1;				// we load in page 1 at the start here
	scroll_page_end = 5;		// this is for the 3 page scroll
	// scroll_page_end = 3; //this is for the 3 page scroll
	// scroll_page_end = 1; //this is for the 1 page scroll

	scroll(0, 0); // reset scrolling
	set_mirroring(MIRROR_HORIZONTAL);
	// reset changed values so they redraw
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites

	pal_bg(intro_cutscene_gun_palette);
	clear_background();
	// scroll_y = 0x080;
	// scroll(0,scroll_y);
	// multi_vram_buffer_horz("Pull the Trigger", 16, NTADR_A(4,10));
	// multi_vram_buffer_horz("But don't click it", 18, NTADR_A(4,12));

	// load the gun
	vram_adr(NAMETABLE_A);
	for (nametable_index = 0; nametable_index < 1024; ++nametable_index)
	{
		vram_put(cutscenegun_small_arrow[nametable_index]);
		flush_vram_update2();
	}

	// load the first page of text
	vram_adr(NAMETABLE_C);
	for (nametable_index = 0; nametable_index < 1024; ++nametable_index)
	{
		vram_put(intro_scroll_1[nametable_index]);
		flush_vram_update2();
	}
	nametable_index = 0;
	cutscene_index = NAMETABLE_A;
	attribute_table_index = NAMETABLE_A_ATTR;
	attribute_bytes_written = 0;
	pointer = intro_scroll_2;

	set_chr_bank_0(CUTSCENE_GUN_CHR_0);
	set_chr_bank_1(CUTSCENE_GUN_CHR_1);

	ppu_on_all(); // turn on screen
	pal_fade_to(0, 4);
	game_mode = MODE_INTRO_SCROLL;
	music_play(SONG_INTROSCROLL);
}

void bank_0_title_loop(void)
{
	ppu_wait_nmi();

	// if (option == 0)
	// {
	// 	one_vram_buffer(0x3d, NTADR_A(6, 22));
	// 	one_vram_buffer(0x00, NTADR_A(6, 24));
	// }
	// else
	// {
	// 	one_vram_buffer(0x00, NTADR_A(6, 22));
	// 	one_vram_buffer(0x3d, NTADR_A(6, 24));
	// }

	read_input();

	if (trigger_clicked) // if((pad2_zapper)&&(zapper_ready)){
	{

		// bg off, project white boxes
		oam_clear();
		// white_background();
		pal_col(0, 0x30); // set color to white
		// ppu_mask(0x16); // BG off, won't happen till NEXT frame

		ppu_wait_nmi(); // wait till the top of the next frame
		// this frame will display no BG and a white box

		oam_clear(); // clear the NEXT frame

		// draw_title_background();
		// ppu_mask(0x1e); // bg on, won't happen till NEXT frame
		read_input();
		// hit_detected = zap_read(1);

		// hit_detected = zap_read(1); // look for light in zapper, port 2
		pal_col(0, 0x0f); // back to transparent

		if (hit_detected)
		{
			if (option == 0)
			{
				// debug, just go to game
				wait_a_little();
				// flash colors:
				// 0x0f,0x01,0x14,0x30,

				pal_bg(fade_1);
				// pal_col(1, 0x04);
				// pal_col(2, 0x07);
				// pal_col(3, 0x10);
				for (index = 0; index < 15; ++index)
				{
					ppu_wait_nmi();
				}

				pal_bg(fade_2);
				wait_and_fade_out();
				banked_call(BANK_0, bank_0_intro_scroll_init);
			}
		}
		else
		{
			
			//play sfx  
			// music_play(2);
			// sfx_play(25,0);
			sample_play(++moveframes);
			++moveframes;
			// 25,27,29,30
	
			if (option == 0)
			{
				option = 1;
			}
			else
			{
				option = 0;
			}
			multi_vram_buffer_horz("                     ", 21, NTADR_A(6, 25));
		}
	}
}

void bank_0_intro_cutscene_init(void)
{
	nametable_index = 0;
	cutscene_index = 0;
	scrolled_past_once = 0;
	stop_scrolling = 0;
	moveframes = 0;
	line_counter = 0;
	scroll_y = 0;
	scroll(0, 0); // reset scrolling
	set_mirroring(MIRROR_HORIZONTAL);
	// reset changed values so they redraw
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites

	pal_bg(intro_cutscene_palette);

	// bird_x = 0;

	set_chr_bank_0(CUTSCENE_CHR_0);
	set_chr_bank_1(CUTSCENE_CHR_1);

	vram_adr(NAMETABLE_A);
	for (nametable_index = 0; nametable_index < 1024; ++nametable_index)
	{
		vram_put(intro_cutscene_1[nametable_index]);
		flush_vram_update2();
	}

	vram_adr(NAMETABLE_C);
	for (nametable_index = 0; nametable_index < 1024; ++nametable_index)
	{
		vram_put(intro_cutscene_2[nametable_index]);
		flush_vram_update2();
	}

	cutscene_index = NAMETABLE_A;
	nametable_index = 0;
	line_counter = 0;

	ppu_on_all(); // turn on screen
	game_mode = MODE_INTRO_CUTSCENE;
	pal_fade_to(0, 4);
	music_play(SONG_INTROCUTSCENE);
}

void bank_0_intro_scroll_loop(void)
{
	ppu_wait_nmi();

	if (scroll_page == scroll_page_end)
	{ // we're done here
		for (index = 0; index < 60; ++index)
		{
			ppu_wait_nmi();
		}
		wait_and_fade_out();
		bank_0_intro_cutscene_init();
		return;
	}

	if (line_counter == 8 && nametable_index <= 960)
	{ // after we've scrolled 8 lines down, let's draw the next line in the nametable.
		// need to call this 30 times
		for (index = 0; index < 32; ++index)
		{
			one_vram_buffer(pointer[nametable_index], cutscene_index);
			++nametable_index;
			++cutscene_index;
		}

		if (attribute_bytes_written < 64)
		{
			one_vram_buffer(pointer[960 + attribute_bytes_written], attribute_table_index);
			++attribute_bytes_written;
			++attribute_table_index;
			one_vram_buffer(pointer[960 + attribute_bytes_written], attribute_table_index);
			++attribute_bytes_written;
			++attribute_table_index;
		}
		line_counter = 0;
	}

	if (screen_line_counter > 240)
	{
		set_chr_bank_0(CUTSCENE_CHR_0);
		set_chr_bank_1(CUTSCENE_CHR_1);
		++scroll_page;
		screen_line_counter = 0;
		nametable_index = 0;
		attribute_bytes_written = 0;
		// update where we're pointing
		if (scroll_page == 1)
		{
			attribute_table_index = NAMETABLE_A_ATTR;
			cutscene_index = NAMETABLE_A;
			pointer = intro_scroll_2;
		}
		if (scroll_page == 2)
		{
			attribute_table_index = NAMETABLE_C_ATTR;
			cutscene_index = NAMETABLE_C;
			pointer = intro_scroll_3;
		}
		if (scroll_page == 3)
		{
			attribute_table_index = NAMETABLE_A_ATTR;
			cutscene_index = NAMETABLE_A;
			pointer = intro_scroll_4;
		}
		if (scroll_page == 4)
		{
			attribute_table_index = NAMETABLE_C_ATTR;
			cutscene_index = NAMETABLE_C;
			pointer = intro_scroll_5;
		}
	}

	if (scroll_y > 0x1df)
	{
		scroll_y = 0;
	}

	scroll(0, scroll_y);

	read_input();
	if (trigger_pulled)
	{
		++line_counter;				 // count 1 line up for each frame, so we know when we'd done 8 frames, and card draw
		++screen_line_counter; // count each screen line
		++scroll_y;
	}
	// if (trigger_clicked) // allow cutscene to be skipped
	// {
	// 	// debug, just go to game
	// 	wait_a_little();
	// 	set_scroll_y(0);
	// 	banked_call(BANK_0, bank_0_intro_cutscene_init);
	// }
}

void bank_0_intro_cutscene_loop(void)
{
	ppu_wait_nmi();
	++moveframes;

	if (stop_scrolling == 0 && moveframes > 0)
	{

		scroll_y += 1;

		if (scrolled_past_once == 1 && scroll_y > 0x1df)
		{
			stop_scrolling = 1;
			moveframes = 0;
		}

		// scroll_y = add_scroll_y(1, scroll_y);

		if (line_counter == 8 && nametable_index < 1024)
		{ // after we've scrolled 8 lines down, let's draw the next line in the nametable.
			for (index = 0; index < 32; ++index)
			{
				one_vram_buffer(intro_cutscene_3[nametable_index], cutscene_index);
				++nametable_index;
				++cutscene_index;
			}
			// flush_vram_update2();

			line_counter = 0;
		}

		if (scroll_y == 0x0ff)
		{
			// ppu_off();
			// vram_adr(NAMETABLE_A);
			// vram_unrle(INTRO_BOTTOM);
			// ppu_on_all();
			scrolled_past_once = 1;
		}

		if (scroll_y > 0x1df)
		{
			scroll_y = 0;
		}
		scroll(0, scroll_y);
		++line_counter;
		moveframes = 0;
	}

	if (stop_scrolling == 1 && moveframes == 100)
	{
		// wait for a while after scrolling down, then do instructions.
		wait_and_fade_out();
		banked_call(BANK_1, bank_1_instructions_init);
	}

	read_input();

	// if (trigger_clicked) // allow cutscene to be skipped
	// {
	// 	// debug, just go to game
	// 	wait_and_fade_out();
	// 	set_scroll_y(0);
	// 	banked_call(BANK_1, bank_1_instructions_init);
	// }
}

#pragma endregion

/*
 * Bank1 is used for talking_time stuff
 */
#pragma region BANK1

#pragma rodata-name("BANK1")
#pragma code-name("BANK1")

#include "SPRITES/al.h"

const unsigned char level_0_text[] = "So you wanna pump gas ?!?\nGive me 2 gallons\n Just pull the trigger\nBut don't click it.";
const unsigned char level_1_text[] = "You're starting to believe\nbut you have much to learn.\n\nNow give me 8 gallons!\nand make it quick!!!";
const unsigned char level_2_text[] = "I can't deny it...\nYou were born to do this.\nOne last test...\nCan you do 17 gallons?\n\nI'm watching closely...";
// const unsigned char level_3_text[] = "You've got it. \n I believe in you.\n Only you can save our space people.\n\n Follow me to my galaxy.";
void bank_4_cutscene_init(void);					// prototype (needed to get call from bank_4)
void bank_3_draw_level_base_sprites(void); // prototype

void bank_1_als_base_sprites(void){
	if(gas_pump_level_quality == PERFECT_PUMP){
		oam_meta_spr(0xc0, 0xa0, al_eyebrows_perfect);
	} else if(gas_pump_level_quality == BAD_PUMP){
		oam_meta_spr(0xc0, 0xa0, al_eyebrows_angry);
	}else if(gas_pump_level_quality == AWFUL_PUMP){
		oam_meta_spr(0xc0, 0xa0, al_eyebrows_base);
		// oam_meta_spr(0xc0, 0xa0, al_eyebrows_awful);
	} else {
		oam_meta_spr(0xc0, 0xa0, al_eyebrows_base);
	}
	oam_meta_spr(0xb0, 0xc8, BigAlsShirt);
}   
  
void bank_1_als_base_init_sprites(void){  
	oam_meta_spr(0xc0, 0xa0, al_eyebrows_base);
	oam_meta_spr(0xb0, 0xc8, BigAlsShirt);
	oam_meta_spr(0xc0, 0xa8, al_open_eyes);
	oam_meta_spr(0xc0, 0xc0, al_mouth_base);
}

void bank_1_instructions_init(void)
{
	reset_text_values();
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites
	clear_background();
	reset_game_variables();
	set_scroll_y(0xff);

	set_chr_bank_0(TALKING_TIME_CHR_0);
	set_chr_bank_1(TALKING_TIME_CHR_1);
	// clear_background();
	pal_bg(talking_time_palette);
	pal_spr(talking_time_sp_palette);

	vram_adr(NAMETABLE_A);
	for (largeindex = 0; largeindex < 1024; ++largeindex)
	{
		vram_put(talkingtime[largeindex]);
		++index;
		if (index > 40)
		{ // don't put too much in the vram_buffer
			flush_vram_update2();
			index = 0;
		}
	}

	// random gas goal (commenting out for now)
	// index = get_frame_count() & 4; // returns 0,1,2,3
	// gas_goal = gas_goal_array[index];

	text_x_start = 3;
	text_y_start = 6;
	switch (levels_complete)
	{
	case 0:
		pointer = level_0_text;
		text_length = sizeof(level_0_text);
		gas_goal = 2;
		break;
	case 1:
		pointer = level_1_text;
		text_length = sizeof(level_1_text);
		gas_goal = 8;
		break;
	case 2:
		pointer = level_2_text;
		text_length = sizeof(level_2_text);
		gas_goal = 17;
		break;
	default:
		break;
	}

	// base sprites for Al
	banked_call(BANK_1, bank_1_als_base_init_sprites);

	ppu_on_all(); // turn on screen
	pal_fade_to(0, 4);
	music_play(SONG_TALKINGTIME);
	game_mode = MODE_INTRO_INSTRUCTION;
}

void bank_1_gas_level_init(void)
{

	// reset changed values so they redraw

	ppu_off();	 // screen off
	oam_clear(); // clear all sprites

	pal_col(0, 0x0D);
	pal_col(0, 0x21);
	pal_bg(gaspump_palette);
	pal_spr(gaspump_sprite_palette); //	load the palette

	set_chr_bank_0(GASPUMP_CHR_0);
	set_chr_bank_1(GASPUMP_CHR_1);
	// draw_bg: draw background code

	scroll(0, 0); // reset scrolling

	index = 0;
	vram_adr(NAMETABLE_A); // Nametable A;
	vram_unrle(LEVEL_1_PUMP);

	ppu_on_all(); // turn on screen
	banked_call(BANK_3, bank_3_draw_level_base_sprites);
	pal_fade_to(0, 4);
	wait_a_little();
	game_mode = MODE_GAME;
	started_pumping = 0;
	music_play(SONG_GASPUMP);
	moveframes = 0;
	moveframes2 = 0;

	reset_level = 1;
}



void bank_1_als_eyes_sprites(void){

	
	++sc_eye_frames;   
	if(sc_eye_frames <140){
		if(gas_pump_level_quality == PERFECT_PUMP){
			oam_meta_spr(0xc0, 0xa8, al_perfect_open_eyes);
		} else {
			oam_meta_spr(0xc0, 0xa8, al_open_eyes);
		}
		
	} else if (sc_eye_frames < 144){
		oam_meta_spr(0xc0, 0xa8, al_blink_1);
	} else if (sc_eye_frames < 149){
		oam_meta_spr(0xc0, 0xa8, al_blink_2);
	} else if(sc_eye_frames < 154) {
		oam_meta_spr(0xc0, 0xa8, al_blink_1);
	} else {
		oam_meta_spr(0xc0, 0xa8, al_open_eyes);
		sc_eye_frames = 0;
	}
}

void bank_1_als_mouth_sprites(void){
	if (text_rendered != text_length){
		++sc_mouth_frames;
		if(sc_mouth_frames < 20){
			oam_meta_spr(0xc0, 0xc0, al_mouth_base);
		} else if (sc_mouth_frames < 28) {
			oam_meta_spr(0xc0, 0xc0, al_mouth_open_1);
		} else if (sc_mouth_frames < 36) {
			oam_meta_spr(0xc0, 0xc0, al_mouth_base);  
		} else if (sc_mouth_frames < 48) {
			oam_meta_spr(0xc0, 0xc0, al_mouth_open_1);
		} else if (sc_mouth_frames < 59) {
			oam_meta_spr(0xc0, 0xc0, al_mouth_open_oh);
		} else if (sc_mouth_frames < 70) {
			oam_meta_spr(0xc0, 0xc0, al_mouth_open_1);
		} else if (sc_mouth_frames < 79) {
			oam_meta_spr(0xc0, 0xc0, al_mouth_base);
		} else if (sc_mouth_frames < 86) {
			oam_meta_spr(0xc0, 0xc0, al_mouth_open_wide);
		} else if (sc_mouth_frames < 99) {
			oam_meta_spr(0xc0, 0xc0, al_mouth_open_1);
		} else if (sc_mouth_frames < 110) {
			oam_meta_spr(0xc0, 0xc0, al_mouth_base);
		}else {
			oam_meta_spr(0xc0, 0xc0, al_mouth_base);
			sc_mouth_frames = 0;
		}
	} else {  
		oam_meta_spr(0xc0, 0xc0, al_mouth_base);
		// if(gas_pump_level_quality == PERFECT_PUMP){  
		// 	oam_meta_spr(0xc0, 0xc0, al_mouth_perfect);	
		// } else {
			
		// }
		
	}
}

void bank_1_instructions_loop(void)
{
	ppu_wait_nmi();
	++moveframes;
	
	

	oam_clear(); // clear all sprites
	banked_call(BANK_1, bank_1_als_base_sprites);

	if (text_row < 6)
	{
		if (moveframes % 4 == 0)
		{
			typewriter();
		}
	}
	 
	
	// oam_meta_spr(0xc0, 0xc0, al_mouth_base);
	
	banked_call(BANK_1, bank_1_als_eyes_sprites);
	
	banked_call(BANK_1, bank_1_als_mouth_sprites);


	read_input();

	if (trigger_clicked)
	{
		wait_and_fade_out();
		banked_call(BANK_1, bank_1_gas_level_init);
	}
}

// #include "BACKGROUNDS/title_screen_rle.h";
#include "BACKGROUNDS/titlescreen.h";

void bank_1_title_init(void)
{
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites

	pal_bg(title_screen_palette_alt);

	// bird_x = 0;

	set_chr_bank_0(TITLESCREEN_CHR_0);
	set_chr_bank_1(TITLESCREEN_CHR_0);

	vram_adr(NAMETABLE_A);
	for (largeindex = 0; largeindex < 1024; ++largeindex)
	{
		vram_put(titlescreen[largeindex]);
		++index;
		if (index > 40)
		{ // don't put too much in the vram_buffer
			flush_vram_update2();
			index = 0;
		}
	}


	// multi_vram_buffer_horz("G.A.S.", 6, NTADR_A(12, 4));
	// multi_vram_buffer_horz("Gas Attendant Simulator", 23, NTADR_A(5, 6));
	// flush_vram_update2();

	// multi_vram_buffer_horz("Game Quest Mode", 15, NTADR_A(8, 22));
	// multi_vram_buffer_horz("Free Pump Mode", 14, NTADR_A(8, 24));
	// flush_vram_update2();

	ppu_on_all(); // turn on screen
	game_mode = MODE_TITLE;
	game_level = START_OF_GAME;
	option = 0;
	levels_complete = 0;
	perfect_levels = 0;
	reset_game_variables();
	// music_play(SONG_TITLE);

	// todo: add title music
}

const unsigned char level_0_awful[] = "Don't click\n\nKeep the flow\n\ngoing...";
const unsigned char level_0_bad[] = "Don't get distracted\n\nPump'n'Focus";
const unsigned char level_0_good[] = "Rough around the\n\nedges, but we can\n\nwork together.";
const unsigned char level_0_perfect[] = "Jumping Gardoks!\n\nThat's perfect!";
const unsigned char level_0_over[] = "Bit too much\n\nBub.";

const unsigned char level_1_awful[] = "You clicked it...\n\nDidn't you?\nTry Again\n";
const unsigned char level_1_bad[] = "That's not near\n\nenough gas.\n\nPump Harder.";
const unsigned char level_1_good[] = "Not perfect...\n\nBut that'll do\n\njust fine.";
const unsigned char level_1_perfect[] = "WOW!!!\n\nIt wasn't a fluke\nYou've got skill.";
const unsigned char level_1_over[] = "Pump that much\n\nand it spills out.";

const unsigned char level_2_awful[] = "You clicked it...\n\nDidn't you?\nNot Again\n";
const unsigned char level_2_bad[] = "Your finger may\n\nhurt, but pump\n\nthrough the pain.";
const unsigned char level_2_good[] = "You're as good as\nI hoped. Wait \noutside. I've gotta\ncall my boss.";
const unsigned char level_2_perfect[] = "Bumping Barthoids!\nYou're great!\nMaybe...just maybe...\nWait outside willya?";
const unsigned char level_2_over[] = "You have no regard\n\nfor the gas you spill...";



void bank_4_cutscene_init(void); // prototype

void bank_1_evaluation_init(void)
{
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites
	clear_background();
	gas_goal_hundreds = 0;  
	set_scroll_y(0xff);

	set_chr_bank_0(TALKING_TIME_CHR_0);
	set_chr_bank_1(TALKING_TIME_CHR_1);
	// clear_background();
	pal_bg(talking_time_palette);
	pal_spr(talking_time_sp_palette);

	vram_adr(NAMETABLE_A);
	for (largeindex = 0; largeindex < 1024; ++largeindex)
	{
		vram_put(evaluation[largeindex]);
		++index;
		if (index > 40)
		{ // don't put too much in the vram_buffer
			flush_vram_update2();
			index = 0;
		}
	}

	gas_pumped = 0;
	for (index = 0; index < gas4; ++index)
	{
		gas_pumped += 1000;
	}
	for (index = 0; index < gas3; ++index)
	{
		gas_pumped += 100;
	}
	for (index = 0; index < gas2; ++index)
	{
		gas_pumped += 10;
	}
	gas_pumped += gas1;

	for (index = 0; index < gas_goal; ++index)
	{
		gas_goal_hundreds += 100;
	}

	// pump scores:
	// goal
	one_vram_buffer(gas_goal + 48, NTADR_A(21, 2));
	multi_vram_buffer_horz(".00 G", 5, NTADR_A(22, 2));
	flush_vram_update2();
	// speed
	// multi_vram_buffer_horz(">>>", 3, NTADR_A(21, 6));
	flush_vram_update2();
	// accuracy
	one_vram_buffer(gas4 + 48, NTADR_A(20, 8));
	one_vram_buffer(gas3 + 48, NTADR_A(21, 8));
	one_vram_buffer('.', NTADR_A(22, 8));
	one_vram_buffer(gas2 + 48, NTADR_A(23, 8));
	one_vram_buffer(gas1 + 48, NTADR_A(24, 8));
	one_vram_buffer('G', NTADR_A(26, 8));
	flush_vram_update2();
	// style
	// multi_vram_buffer_horz("NONE", 4, NTADR_A(21, 10));
	flush_vram_update2();

	text_x_start = 2; 
	text_y_start = 18;
	reset_text_values();
	//debug gas goals

	if (gas_pumped >= gas_goal_hundreds - 1 && gas_pumped <= gas_goal_hundreds + 1 ){
		gas_pump_level_quality = PERFECT_PUMP;
	} else if(gas_pumped >= gas_goal_hundreds - 5 && gas_pumped <= gas_goal_hundreds + 5 ){
		gas_pump_level_quality = GOOD_PUMP;
	} else if(gas_pumped >= gas_goal_hundreds +5){
		gas_pump_level_quality = OVER_PUMP;
	} else if(gas_pumped >= gas_goal_hundreds - 100){
		gas_pump_level_quality = BAD_PUMP;
	} else {
		gas_pump_level_quality = AWFUL_PUMP;
	}

	if(levels_complete == 0){
		switch(gas_pump_level_quality){
			case PERFECT_PUMP:
				pointer = level_0_perfect;
				text_length = sizeof(level_0_perfect);
				++levels_complete;
				break;
			case GOOD_PUMP:
				pointer = level_0_good;
				text_length = sizeof(level_0_good);
				++levels_complete;
				break;
			case BAD_PUMP:
				pointer = level_0_bad;
				text_length = sizeof(level_0_bad);
				break;
			case OVER_PUMP:
				pointer = level_0_over;
				text_length = sizeof(level_0_over);
				break;
			case AWFUL_PUMP:
				pointer = level_0_awful;
				text_length = sizeof(level_0_awful);
				break;
			default:
				break;
		}
	} else if(levels_complete == 1){
		switch(gas_pump_level_quality){
			case PERFECT_PUMP:
				pointer = level_1_perfect;
				text_length = sizeof(level_1_perfect);
				++levels_complete;
				break;
			case GOOD_PUMP:
				pointer = level_1_good;
				text_length = sizeof(level_1_good);
				++levels_complete;
				break;
			case BAD_PUMP:
				pointer = level_1_bad;
				text_length = sizeof(level_1_bad);
				break;
			case OVER_PUMP:
				pointer = level_1_over;
				text_length = sizeof(level_1_over);
				break;
			case AWFUL_PUMP:
				pointer = level_1_awful;
				text_length = sizeof(level_1_awful);
				break;
			default:
				break;
		}
	} else if(levels_complete == 2){
		switch(gas_pump_level_quality){
			case PERFECT_PUMP:
				pointer = level_2_perfect;
				text_length = sizeof(level_2_perfect);
				++levels_complete;
				alien_level = 1;
				break;
			case GOOD_PUMP:
				pointer = level_2_good;
				text_length = sizeof(level_2_good);
				++levels_complete;
				alien_level = 1;
				break;
			case BAD_PUMP:
				pointer = level_2_bad;
				text_length = sizeof(level_2_bad);
				break;
			case OVER_PUMP:
				pointer = level_2_over;
				text_length = sizeof(level_2_over);
				break;
			case AWFUL_PUMP:
				pointer = level_2_awful;
				text_length = sizeof(level_2_awful);
				break;
			default:
				break;
		}
	}


	// base for Al
	banked_call(BANK_1, bank_1_als_base_init_sprites);
	// oam_meta_spr(0xc0, 0xa7, altalks_30_data);

	ppu_on_all(); // turn on screen
	game_mode = MODE_EVALUATION_TIME;
	game_level = LEVEL_ONE_COMPLETE;
	pal_fade_to(0, 4);
	music_play(SONG_TALKINGTIME);
}

void bank_1_evaluation_loop(void)
{
	ppu_wait_nmi();
	++moveframes;

	if (moveframes > 60)
	{
		moveframes = 0;
	}

	if (text_row < 6)
	{
		typewriter();
	}

	oam_clear(); // clear all sprites
	
	
	banked_call(BANK_1, bank_1_als_eyes_sprites);
	banked_call(BANK_1, bank_1_als_mouth_sprites);
	banked_call(BANK_1, bank_1_als_base_sprites);

	read_input();

	if (trigger_clicked)
	{
		//reset gas level:
		gas_pump_level_quality = 255;
		wait_and_fade_out();

		if (alien_level == 1)
		{
			banked_call(BANK_4, bank_4_cutscene_init);
		}
		else
		{
			banked_call(BANK_1, bank_1_instructions_init);
		}
	}
}

#pragma endregion

/*
 * Bank 2 is ending stuff
 */
#pragma region BANK2
#pragma rodata-name("BANK2")
#pragma code-name("BANK2")

#include "BACKGROUNDS/ending_scroll_1.h"
#include "BACKGROUNDS/ending_scroll_2.h"
// #include "BACKGROUNDS/ending_scroll_3.h"

void bank_2_ending_scroll_init(void)
{
	nametable_index = 0;
	scrolled_past_once = 0;
	stop_scrolling = 0;
	moveframes = 0;
	line_counter = 0;
	screen_line_counter = 0;
	scroll_wait_lines = 32; // wait this many lines before drawing (not working)
	scroll_page = 1;				// we load in page 1 at the start here
	scroll_page_end = 2;		// this is for the 3 page scroll
	// scroll_page_end = 3; //this is for the 3 page scroll
	// scroll_page_end = 1; //this is for the 1 page scroll

	scroll(0, 0); // reset scrolling
	set_mirroring(MIRROR_HORIZONTAL);
	// reset changed values so they redraw
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites

	pal_bg(endingscroll_palette);
	clear_background();
	// scroll_y = 0x080;
	// scroll(0,scroll_y);
	// multi_vram_buffer_horz("Pull the Trigger", 16, NTADR_A(4,10));
	// multi_vram_buffer_horz("But don't click it", 18, NTADR_A(4,12));

	// load the gun
	vram_adr(NAMETABLE_A);
	for (nametable_index = 0; nametable_index < 1024; ++nametable_index)
	{
		vram_put(ending_scroll_1[nametable_index]);
		flush_vram_update2();
	}

	// load the first page of text
	vram_adr(NAMETABLE_C);
	for (nametable_index = 0; nametable_index < 1024; ++nametable_index)
	{
		vram_put(ending_scroll_2[nametable_index]);
		flush_vram_update2();
	}
	nametable_index = 0;
	cutscene_index = NAMETABLE_A;
	attribute_table_index = NAMETABLE_A_ATTR;
	attribute_bytes_written = 0;
	pointer = ending_scroll_2;

	set_chr_bank_0(CUTSCENE_CHR_0);
	set_chr_bank_1(CUTSCENE_CHR_1);

	ppu_on_all(); // turn on screen
	pal_fade_to(0, 4);
	game_mode = MODE_INTRO_SCROLL;
	music_play(SONG_INTROSCROLL);
}

void bank_2_ending_scroll_loop(void)
{
	ppu_wait_nmi();

	if (scroll_page == scroll_page_end)
	{ // we're done here loop forever.
		ppu_wait_nmi();
		return;
	}

	if (line_counter == 8 && nametable_index <= 960)
	{ // after we've scrolled 8 lines down, let's draw the next line in the nametable.
		// need to call this 30 times
		for (index = 0; index < 32; ++index)
		{
			one_vram_buffer(pointer[nametable_index], cutscene_index);
			++nametable_index;
			++cutscene_index;
		}

		if (attribute_bytes_written < 64)
		{
			one_vram_buffer(pointer[960 + attribute_bytes_written], attribute_table_index);
			++attribute_bytes_written;
			++attribute_table_index;
			one_vram_buffer(pointer[960 + attribute_bytes_written], attribute_table_index);
			++attribute_bytes_written;
			++attribute_table_index;
		}
		line_counter = 0;
	}

	if (screen_line_counter > 240)
	{
		set_chr_bank_0(CUTSCENE_CHR_0);
		set_chr_bank_1(CUTSCENE_CHR_1);
		++scroll_page;
		screen_line_counter = 0;
		nametable_index = 0;
		attribute_bytes_written = 0;
		// update where we're pointing
		if (scroll_page == 1)
		{
			attribute_table_index = NAMETABLE_A_ATTR;
			cutscene_index = NAMETABLE_A;
			pointer = intro_scroll_2;
		}
		if (scroll_page == 2)
		{
			attribute_table_index = NAMETABLE_C_ATTR;
			cutscene_index = NAMETABLE_C;
			pointer = intro_scroll_3;
		}
		if (scroll_page == 3)
		{
			attribute_table_index = NAMETABLE_A_ATTR;
			cutscene_index = NAMETABLE_A;
			pointer = intro_scroll_4;
		}
		if (scroll_page == 4)
		{
			attribute_table_index = NAMETABLE_C_ATTR;
			cutscene_index = NAMETABLE_C;
			pointer = intro_scroll_5;
		}
	}

	if (scroll_y > 0x1df)
	{
		scroll_y = 0;
	}

	scroll(0, scroll_y);

	read_input();
	if (trigger_pulled)
	{
		++line_counter;				 // count 1 line up for each frame, so we know when we'd done 8 frames, and card draw
		++screen_line_counter; // count each screen line
		++scroll_y;
	}
	// if (trigger_clicked) // allow cutscene to be skipped
	// {
	// 	// debug, just go to game
	// 	wait_a_little();
	// 	set_scroll_y(0);
	// 	banked_call(BANK_0, bank_0_intro_cutscene_init);
	// }
}

#pragma endregion

/*
 * Bank3 is used for the main game level
 */

#pragma region BANK3

#pragma rodata-name("BANK3")
#pragma code-name("BANK3")

const unsigned char GasShoulder[] = {
		0, 0, 0x80, 1,
		8, 0, 0x81, 1,
		// 16, 0, 0x82, 1,
		128};

const unsigned char GasShoulderReverse[] = {
		24, 0, 0x80, 1 | OAM_FLIP_H,
		16, 0, 0x81, 1 | OAM_FLIP_H,
		// 8, 0, 0x82, 1 | OAM_FLIP_H,
		// 0, 0, 0x83, 1 | OAM_FLIP_H,  
		128};

const unsigned char Decimal[] = {
		0, 0, 0x84, 2,
		128};

void bank_3_draw_level_base_sprites()
{
	// covers for the gas pump shoulders
	oam_meta_spr(144, 63, GasShoulder);
	oam_meta_spr(224, 63, GasShoulderReverse);

	// decimals
	oam_meta_spr(0xc4, 0x88, Decimal); // decimal for dollars
	oam_meta_spr(0xc4, 0xb8, Decimal); // decimal for gas
																		 // bird_x += 1;
																		 // bird_y = 0x20;
																		 // oam_meta_spr(bird_x, bird_y, Bird);
}

void bank_3_draw_number_as_bg_tile(void)
{
	// expects x and y to be set (top left of number)
	// expects num_holder to be the number to use
	// updated the bg tile for the number.

	switch (num_holder)
	{
	case 1:
		one_vram_buffer(0xc0, NTADR_A(x, y));
		one_vram_buffer(0xc1, NTADR_A(x + 1, y));
		one_vram_buffer(0xd0, NTADR_A(x, y + 1));
		one_vram_buffer(0xd1, NTADR_A(x + 1, y + 1));
		one_vram_buffer(0xe0, NTADR_A(x, y + 2));
		one_vram_buffer(0xe1, NTADR_A(x + 1, y + 2));
		one_vram_buffer(0xf0, NTADR_A(x, y + 3));
		one_vram_buffer(0xf1, NTADR_A(x + 1, y + 3));
		break;
	case 2:
		one_vram_buffer(0xc2, NTADR_A(x, y));
		one_vram_buffer(0xc3, NTADR_A(x + 1, y));
		one_vram_buffer(0xd2, NTADR_A(x, y + 1));
		one_vram_buffer(0xd3, NTADR_A(x + 1, y + 1));
		one_vram_buffer(0xe2, NTADR_A(x, y + 2));
		one_vram_buffer(0xe3, NTADR_A(x + 1, y + 2));
		one_vram_buffer(0xf2, NTADR_A(x, y + 3));
		one_vram_buffer(0xf3, NTADR_A(x + 1, y + 3));
		break;
	case 3:
		one_vram_buffer(0xc4, NTADR_A(x, y));
		one_vram_buffer(0xc5, NTADR_A(x + 1, y));
		one_vram_buffer(0xd4, NTADR_A(x, y + 1));
		one_vram_buffer(0xd5, NTADR_A(x + 1, y + 1));
		one_vram_buffer(0xe4, NTADR_A(x, y + 2));
		one_vram_buffer(0xe5, NTADR_A(x + 1, y + 2));
		one_vram_buffer(0xf4, NTADR_A(x, y + 3));
		one_vram_buffer(0xf5, NTADR_A(x + 1, y + 3));
		break;
	case 4:
		one_vram_buffer(0xc6, NTADR_A(x, y));
		one_vram_buffer(0xc7, NTADR_A(x + 1, y));
		one_vram_buffer(0xd6, NTADR_A(x, y + 1));
		one_vram_buffer(0xd7, NTADR_A(x + 1, y + 1));
		one_vram_buffer(0xe6, NTADR_A(x, y + 2));
		one_vram_buffer(0xe7, NTADR_A(x + 1, y + 2));
		one_vram_buffer(0xf6, NTADR_A(x, y + 3));
		one_vram_buffer(0xf7, NTADR_A(x + 1, y + 3));
		break;
	case 5:
		one_vram_buffer(0xc8, NTADR_A(x, y));
		one_vram_buffer(0xc9, NTADR_A(x + 1, y));
		one_vram_buffer(0xd8, NTADR_A(x, y + 1));
		one_vram_buffer(0xd9, NTADR_A(x + 1, y + 1));
		one_vram_buffer(0xe8, NTADR_A(x, y + 2));
		one_vram_buffer(0xe9, NTADR_A(x + 1, y + 2));
		one_vram_buffer(0xf8, NTADR_A(x, y + 3));
		one_vram_buffer(0xf9, NTADR_A(x + 1, y + 3));
		break;
	case 6:
		one_vram_buffer(0xca, NTADR_A(x, y));
		one_vram_buffer(0xcb, NTADR_A(x + 1, y));
		one_vram_buffer(0xda, NTADR_A(x, y + 1));
		one_vram_buffer(0xdb, NTADR_A(x + 1, y + 1));
		one_vram_buffer(0xea, NTADR_A(x, y + 2));
		one_vram_buffer(0xeb, NTADR_A(x + 1, y + 2));
		one_vram_buffer(0xfa, NTADR_A(x, y + 3));
		one_vram_buffer(0xfb, NTADR_A(x + 1, y + 3));
		break;
	case 7:
		one_vram_buffer(0xcc, NTADR_A(x, y));
		one_vram_buffer(0xcd, NTADR_A(x + 1, y));
		one_vram_buffer(0xdc, NTADR_A(x, y + 1));
		one_vram_buffer(0xdd, NTADR_A(x + 1, y + 1));
		one_vram_buffer(0xec, NTADR_A(x, y + 2));
		one_vram_buffer(0xed, NTADR_A(x + 1, y + 2));
		one_vram_buffer(0xfc, NTADR_A(x, y + 3));
		one_vram_buffer(0xfd, NTADR_A(x + 1, y + 3));
		break;
	case 8:
		one_vram_buffer(0xce, NTADR_A(x, y));
		one_vram_buffer(0xcf, NTADR_A(x + 1, y));
		one_vram_buffer(0xde, NTADR_A(x, y + 1));
		one_vram_buffer(0xdf, NTADR_A(x + 1, y + 1));
		one_vram_buffer(0xee, NTADR_A(x, y + 2));
		one_vram_buffer(0xef, NTADR_A(x + 1, y + 2));
		one_vram_buffer(0xfe, NTADR_A(x, y + 3));
		one_vram_buffer(0xff, NTADR_A(x + 1, y + 3));
		break;
	case 9:
		one_vram_buffer(0x5e, NTADR_A(x, y));
		one_vram_buffer(0x5f, NTADR_A(x + 1, y));
		one_vram_buffer(0x6e, NTADR_A(x, y + 1));
		one_vram_buffer(0x6f, NTADR_A(x + 1, y + 1));
		one_vram_buffer(0x7e, NTADR_A(x, y + 2));
		one_vram_buffer(0x7f, NTADR_A(x + 1, y + 2));
		one_vram_buffer(0x8e, NTADR_A(x, y + 3));
		one_vram_buffer(0x8f, NTADR_A(x + 1, y + 3));
		break;
	case 0:
		one_vram_buffer(0x1e, NTADR_A(x, y));
		one_vram_buffer(0x1f, NTADR_A(x + 1, y));
		one_vram_buffer(0x2e, NTADR_A(x, y + 1));
		one_vram_buffer(0x2f, NTADR_A(x + 1, y + 1));
		one_vram_buffer(0x3e, NTADR_A(x, y + 2));
		one_vram_buffer(0x3f, NTADR_A(x + 1, y + 2));
		one_vram_buffer(0x4e, NTADR_A(x, y + 3));
		one_vram_buffer(0x4f, NTADR_A(x + 1, y + 3));
		break;
	default:
		break;
	}
}

void bank_3_draw_cost(void)
{

	// sprite_cost = cost5;
	// find_sprite();
	// oam_meta_spr(0x40, 0x60, pointer);

	if (cost3_changed)
	{
		num_holder = cost4;
		x = 21;
		y = 14;
		bank_3_draw_number_as_bg_tile();
		cost3_changed = 0;
	}

	if (cost2_changed)
	{
		num_holder = cost3;
		x = 23;
		y = 14;
		bank_3_draw_number_as_bg_tile();
		cost2_changed = 0;
	}

	if (cost1_changed)
	{
		num_holder = cost2;
		x = 25;
		y = 14;
		bank_3_draw_number_as_bg_tile();
		cost1_changed = 0;
	}

	num_holder = cost1;
	x = 27;
	y = 14;
	bank_3_draw_number_as_bg_tile();

	// sprite_cost = cost1;
	// find_sprite();
	// oam_meta_spr(0x80, 0x60, pointer);
}

void bank_3_draw_gas(void)
{

	// sprite_cost = gas5;
	// find_sprite();
	// oam_meta_spr(0x40, 0x30, pointer);

	// sprite_cost = gas4;
	// find_sprite();
	// oam_meta_spr(0x68, 0x70, pointer);

	// sprite_cost = gas3;
	// find_sprite();
	// oam_meta_spr(0x78, 0x70, pointer);

	// sprite_cost = gas2;
	// find_sprite();
	// oam_meta_spr(0x88, 0x70, pointer);

	// sprite_cost = gas1;
	// find_sprite();
	// oam_meta_spr(0x98, 0x70, pointer);

	if (gas3_changed)
	{
		num_holder = gas4;
		x = 21;
		y = 20;
		bank_3_draw_number_as_bg_tile();
		gas3_changed = 0;
	}

	if (gas2_changed)
	{
		num_holder = gas3;
		x = 23;
		y = 20;
		bank_3_draw_number_as_bg_tile();
		gas2_changed = 0;
	}

	if (gas1_changed)
	{
		num_holder = gas2;
		x = 25;
		y = 20;
		bank_3_draw_number_as_bg_tile();
		gas1_changed = 0;
	}

	num_holder = gas1;
	x = 27;
	y = 20;
	bank_3_draw_number_as_bg_tile();
}

void bank_3_find_sprite(void)
{
	switch (sprite_cost)
	{
	case 0:
		pointer = Zero;
		break;
	case 1:
		pointer = One;
		break;
	case 2:
		pointer = Two;
		break;
	case 3:
		pointer = Three;
		break;
	case 4:
		pointer = Four;
		break;
	case 5:
		pointer = Five;
		break;
	case 6:
		pointer = Six;
		break;
	case 7:
		pointer = Seven;
		break;
	case 8:
		pointer = Eight;
		break;
	case 9:
		pointer = Nine;
		break;
	default:
		break;
	}
}

void bank_3_adjust_gas(void)
{
	if (gas1 >= 10)
	{
		gas1_changed = 1;
		gas1 = 0;
		++gas2;
		if (gas2 >= 10)
		{
			gas2_changed = 1;
			gas2 = 0;
			++gas3;
			if (gas3 >= 10)
			{
				gas3_changed = 1;
				gas3 = 0;
				++gas4;
			}
			if (gas4 >= 10)
			{
				gas4_changed = 1;
				gas4 = 0;
				++gas5;
			}
		}
	}

	if (gas5 >= 10)
	{ // maximum 9999
		gas5 = 9;
		gas4 = 9;
		gas3 = 9;
		gas2 = 9;
		gas1 = 9;
	}
}

void bank_3_adjust_cost(void)
{
	if (cost1 >= 10)
	{
		cost1_changed = 1;
		cost1 = 0;
		++cost2;
		if (cost2 >= 10)
		{
			cost2_changed = 1;
			cost2 = 0;
			++cost3;
			if (cost3 >= 10)
			{
				cost3_changed = 1;
				cost3 = 0;
				++cost4;
			}
			if (cost4 >= 10)
			{
				cost4_changed = 1;
				cost4 = 0;
				++cost5;
			}
		}
	}

	if (cost5 >= 10)
	{ // maximum 9999
		cost5 = 9;
		cost4 = 9;
		cost3 = 9;
		cost2 = 9;
		cost1 = 9;
	}
}

unsigned char blimp_x = 160;
unsigned char blimp_y = 20;
unsigned char duck_0_x = 20;
unsigned char duck_0_y = 100;
unsigned char x_direction = 0;
unsigned char y_direction = 0;
unsigned char duck_hit_top = 0;

#include "SPRITES/gaspump.h"

unsigned char blimp_frames = 0;
unsigned char cloud_frames = 0;
unsigned int cloud_x = 20<<8;
unsigned int cloud_y = 20<<8;
void bank_3_level_sprites(void){
	if(reset_level){
		blimp_x = 160;
		blimp_y = 20;
		duck_0_x = 20;
		duck_0_y = 100;
		x_direction = 0;
		y_direction = 0;
		duck_hit_top = 0;
		reset_level = 0;
	}
	++moveframes;
	++moveframes2;

	if(levels_complete == 0){  
		++blimp_frames;
		
		if(moveframes > 100){
			if(moveframes2 > 20){
				--blimp_x;
				if(blimp_y == 10){
					y_direction = 0;
				}
				if(blimp_y == 20){
					y_direction = 1;
				}
				if(y_direction){
					--blimp_y;
				} else {
					++blimp_y;
				}
				moveframes2 = 0;
			}
			
			if(blimp_frames < 20){
				oam_meta_spr(blimp_x, blimp_y, blimp_0);
			} else if(blimp_frames < 40){
				oam_meta_spr(blimp_x, blimp_y, blimp_1);
			} else if(blimp_frames < 60){
				oam_meta_spr(blimp_x, blimp_y, blimp_2);
			} else if(blimp_frames < 80){
				oam_meta_spr(blimp_x, blimp_y, blimp_3);
			} else if(blimp_frames < 100){
				oam_meta_spr(blimp_x, blimp_y, blimp_4);
			} else if(blimp_frames < 120){
				oam_meta_spr(blimp_x, blimp_y, blimp_5);
			} else if(blimp_frames < 140){
				oam_meta_spr(blimp_x, blimp_y, blimp_6);
			} else if(blimp_frames < 160){
				oam_meta_spr(blimp_x, blimp_y, blimp_7);
			} else {
				oam_meta_spr(blimp_x, blimp_y, blimp_0);
				blimp_frames = 0;
			}
			
		}
	}
	if(levels_complete == 1){ //level_complete ==1
		//birds for level 2
		if(moveframes > 600){ //wait a bit before doing anything.

			//update movement
				if(duck_0_y == 5){
					++duck_hit_top;
					if(duck_hit_top < 3){
						y_direction = 0;
					} else{
						duck_hit_top = 0;
					}
				}
				if(duck_0_y == 100){
					y_direction = 1;
				}
				if(y_direction){
					--duck_0_y;
				} else {
					++duck_0_y;
				}

				if(duck_0_x > 170){
					x_direction = 0;
				}
				if(duck_0_x < 4){
					x_direction = 1;
				}

				if((get_frame_count() & 2) == 0){
					if(x_direction){
						++duck_0_x;
					} else {
						--duck_0_x;
					}
				}

			//draw duck
			if(moveframes2 < 5){
				if(x_direction){
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_l_0);
				} else {
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_r_0); 
				}  
				
			} else if (moveframes2 < 10){
				if(x_direction){
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_l_1);
				} else {
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_r_1);
				}
			} else if (moveframes2 < 15){
				if(x_direction){
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_l_2);
				} else {
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_r_2);
				}
			}else if (moveframes2 < 20){
				if(x_direction){
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_l_3);
				} else {
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_r_3);
				}
			}else if (moveframes2 < 25){
				if(x_direction){
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_l_4);
				} else {
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_r_4);
				}
			} else if (moveframes2 < 30){
				if(x_direction){
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_l_5);
				} else {
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_r_5);
				}
			} else if (moveframes2 < 35){
				if(x_direction){
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_l_4);
				} else {
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_r_4);
				}
			} else if (moveframes2 < 40){
				if(x_direction){
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_l_3);
				} else {
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_r_3);
				}
			} else if (moveframes2 < 45){
				if(x_direction){
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_l_2);
				} else {
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_r_2);
				}
			} else if (moveframes2 < 50){
				if(x_direction){
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_l_1);
				} else {
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_r_1);
				}
			} else {
				if(x_direction){
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_l_0);
				} else {
					oam_meta_spr(duck_0_x,duck_0_y, bigduck_r_0);
				}
				moveframes2 = 0;
			}
			
		}
	}
	if(levels_complete == 2){
		// ++cloud_frames;
		
		cloud_x += 7;
		if(high_byte(cloud_y) == 18 && low_byte(cloud_y) == 100){
			y_direction = 0;
		}
		if(high_byte(cloud_y) == 21 && low_byte(cloud_y) == 100){
			y_direction = 1;
		}
		if(y_direction){
			cloud_y -= 2;
		} else {
			cloud_y += 2;
		}
		// cloud_frames = 0;

		++blimp_frames;
		
		if(moveframes > 3600){ //wait til 1 minute in for the blimp
			if(moveframes2 > 20){
				--blimp_x;
				if(blimp_y == 10){
					y_direction = 0;
				}
				if(blimp_y == 20){
					y_direction = 1;
				}
				if(y_direction){
					--blimp_y;
				} else {
					++blimp_y;
				}
				moveframes2 = 0;
			}
			
			if(blimp_frames < 20){
				oam_meta_spr(blimp_x, blimp_y, blimp_0);
			} else if(blimp_frames < 40){
				oam_meta_spr(blimp_x, blimp_y, blimp_1);
			} else if(blimp_frames < 60){
				oam_meta_spr(blimp_x, blimp_y, blimp_2);
			} else if(blimp_frames < 80){
				oam_meta_spr(blimp_x, blimp_y, blimp_3);
			} else if(blimp_frames < 100){
				oam_meta_spr(blimp_x, blimp_y, blimp_4);
			} else if(blimp_frames < 120){
				oam_meta_spr(blimp_x, blimp_y, blimp_5);
			} else if(blimp_frames < 140){
				oam_meta_spr(blimp_x, blimp_y, blimp_6);
			} else if(blimp_frames < 160){
				oam_meta_spr(blimp_x, blimp_y, blimp_7);
			} else {
				oam_meta_spr(blimp_x, blimp_y, blimp_0);
				blimp_frames = 0;
			}
		}

		if(moveframes2 > 3600){ //wait til 1 minute in for the blimp
			if(moveframes2 > 20){
				--blimp_x;
				if(blimp_y == 10){
					y_direction = 0;
				}
				if(blimp_y == 20){
					y_direction = 1;
				}
				if(y_direction){
					--blimp_y;
				} else {
					++blimp_y;
				}
				moveframes2 = 0;
			}
			
			if(blimp_frames < 20){
				oam_meta_spr(blimp_x, blimp_y, blimp_0);
			} else if(blimp_frames < 40){
				oam_meta_spr(blimp_x, blimp_y, blimp_1);
			} else if(blimp_frames < 60){
				oam_meta_spr(blimp_x, blimp_y, blimp_2);
			} else if(blimp_frames < 80){
				oam_meta_spr(blimp_x, blimp_y, blimp_3);
			} else if(blimp_frames < 100){
				oam_meta_spr(blimp_x, blimp_y, blimp_4);
			} else if(blimp_frames < 120){
				oam_meta_spr(blimp_x, blimp_y, blimp_5);
			} else if(blimp_frames < 140){
				oam_meta_spr(blimp_x, blimp_y, blimp_6);
			} else if(blimp_frames < 160){
				oam_meta_spr(blimp_x, blimp_y, blimp_7);
			} else {
				oam_meta_spr(blimp_x, blimp_y, blimp_0);
				blimp_frames = 0;
			}
		}
	
		
		oam_meta_spr(high_byte(cloud_x), high_byte(cloud_y), cloud_1);
			
	}

}

unsigned char grass_move = 0;

void bank_3_level_loop(void)
{
	if(moveframes == 0){
		//moveframes is set on the level_init, so we can initailize variables here.
		blimp_x = 160;
		blimp_y = 20;
		duck_0_x = 20;
		duck_0_y = 100;
	}

	++grass_move;
	++moveframes;
	++moveframes2;
	ppu_wait_nmi(); // wait till beginning of the frame
	oam_clear();
	bank_3_draw_level_base_sprites();
	bank_3_draw_gas();
	bank_3_draw_cost();

	// zapper_ready = pad2_zapper^1; // XOR last frame, make sure it is not held down still

	// is trigger pulled?
	read_input(); // sets input_active

	if(grass_move > 30){
		if(chr_bank == 0)
		{
			set_chr_bank_0(GASPUMP_ALT_CHR_0);
			chr_bank = 1;
			
		} else {
			set_chr_bank_0(GASPUMP_CHR_0);
			chr_bank = 0;
		}
		grass_move = 0;		
	}

	banked_call(BANK_3, bank_3_level_sprites);



	if (trigger_pulled)
	{
		started_pumping = 1; // actually only need to set this once

		gas_speed += GAS_STEP;
		while (gas_speed > 256)
		{
			++gas1;
			gas_speed -= 256;
		}
		bank_3_adjust_gas();

		cost_speed += COST_STEP;
		while (cost_speed > 256)
		{
			++cost1;
			cost_speed -= 256;
		}
		bank_3_adjust_cost();
	}
	else
	{
		if (started_pumping == 1)
		{
			// trigger ending
			wait_and_fade_out();
			banked_call(BANK_1, bank_1_evaluation_init);
		}
	}
}

#pragma endregion

#pragma region BANK4

#pragma rodata-name("BANK4")
#pragma code-name("BANK4")

#include "BACKGROUNDS/future_pump.h"
#include "BACKGROUNDS/abduction_cutscene.h"
#include "BACKGROUNDS/abduction_cutscene_beam.h"
#include "BACKGROUNDS/futuretalk.h"
#include "BACKGROUNDS/intro_cutscene_1x.h"
#include "BACKGROUNDS/intro_cutscene_2x.h"
#include "BACKGROUNDS/intro_cutscene_3x.h"
const unsigned char alien_instruction_text[] = "Welcome to Planet Gardok\nWe modified our pump\njust for you.\n\nJust pump to the goal\nnumber on the left\n\nPump, human!\nThe Battle BEGINS!";
const unsigned char alien_evaluation_text_bad[] = "Well...\nThat's your best?\n\nYou're earth's best?!\nIt's not good enough.\n\nWe're doomed.";
const unsigned char alien_evaluation_text_good[] = "Perfect pumping!\nI knew you could do it.\n\nI'm fueled up and ready\nto go! Now hop on!!\n\nLet's stop Lord ZARKAQ!";
#include "SPRITES/gasboy.h"
#include "SPRITES/spacepump.h"

void bank_5_starfield_init(void); // prototype
void bank_5_gameover_init(void);	// prototype

void bank_4_cutscene_init(void)
{
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites
	// pal_bg(abduction_palette); //idk where I got this palette before.
	pal_bg(intro_cutscene_palette);
	pal_spr(abduction_palette);
	// TODO change this to the right CHR
	set_chr_bank_0(CUTSCENE_ABDUCTION_CHR_0);
	set_chr_bank_1(CUTSCENE_ABDUCTION_CHR_1);
	scroll(0, 0); // reset scrolling
	index = 0;

	vram_adr(NAMETABLE_A); // Nametable A;

	for (largeindex = 0; largeindex < 1024; ++largeindex)
	{
		vram_put(abduction_cutscene[largeindex]);
		++index;
		if (index > 40)
		{ // don't put too much in the vram_buffer
			flush_vram_update2();
			index = 0;
		}
	}

	vram_adr(NAMETABLE_C);

	for (largeindex = 0; largeindex < 1024; ++largeindex)
	{
		vram_put(intro_cutscene_2x[largeindex]);
		++index;
		if (index > 40)
		{ // don't put too much in the vram_buffer
			flush_vram_update2();
			index = 0;
		}
	}

	ppu_on_all();
	pal_fade_to(0, 4);
	wait_a_little();
	game_mode = MODE_ABDUCTION_CUTSCENE;
	started_pumping = 0;
	moveframes = 0;

	abduction_cutscene_step = ABDUCTION_START;
	music_play(SONG_ABDUCTIONCUTSCENE);
}

void bank_4_alien_level_init(void)
{

	ppu_off();	 // screen off
	oam_clear(); // clear all sprites

	pal_bg(futurepump_palette);
	pal_spr(futurepump_palette);
	set_chr_bank_0(FUTUREPUMP_CHR_0);
	set_chr_bank_1(FUTUREPUMP_CHR_1);
	scroll(0, 0); // reset scrolling
	index = 0;

	vram_adr(NAMETABLE_A); // Nametable A;

	for (largeindex = 0; largeindex < 1024; ++largeindex)
	{
		vram_put(FUTURE_PUMP_LEVEL[largeindex]);
		++index;
		if (index > 40)
		{ // don't put too much in the vram_buffer
			flush_vram_update2();
			index = 0;
		}
	}

	// debug, for now I'm gonna manually put the goal numbers in too.
	vram_adr(0x2048);
	vram_put(0xbe);
	vram_put(0xbf);
	vram_adr(0x2068);
	vram_put(0xce);
	vram_put(0xcf);
	vram_adr(0x2088);
	vram_put(0xde);
	vram_put(0xdf);
	vram_adr(0x20a8);
	vram_put(0xee);
	vram_put(0xef);
	flush_vram_update2();
	vram_adr(0x204a);
	vram_put(0xbc);
	vram_put(0xbd);
	vram_adr(0x206a);
	vram_put(0xcc);
	vram_put(0xcd);
	vram_adr(0x208a);
	vram_put(0xdc);
	vram_put(0xdd);
	vram_adr(0x20aa);
	vram_put(0xec);
	vram_put(0xed);
	flush_vram_update2();
	vram_adr(0x204c);
	vram_put(0xbe);
	vram_put(0xbf);
	vram_adr(0x206c);
	vram_put(0xce);
	vram_put(0xcf);
	vram_adr(0x208c);
	vram_put(0xde);
	vram_put(0xdf);
	vram_adr(0x20ac);
	vram_put(0xee);
	vram_put(0xef);
	flush_vram_update2();

	pal_fade_to(0, 4);
	ppu_on_all();
	started_pumping = 0;
	// todo, set actual gas goal here.
	gas_goal = LAST_LEVEL_GOAL;
	gas_pumped = 0;
	game_mode = MODE_ALIEN_LEVEL;
	music_play(SONG_ALIENPUMP);
}

void bank_4_instruction_init(void)
{
	scroll(0, 0); // reset scrolling
	index = 0;
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites
	pal_bg(futuretalk_palette);

	set_chr_bank_0(FUTURETALK_CHR_0);
	set_chr_bank_1(FUTURETALK_CHR_1);
	vram_adr(NAMETABLE_A); // Nametable A;

	for (largeindex = 0; largeindex < 1024; ++largeindex)
	{
		vram_put(futuretalk[largeindex]);
		++index;
		if (index > 40)
		{ // don't put too much in the vram_buffer
			flush_vram_update2();
			index = 0;
		}
	}
	ppu_on_all();

	// init instructions
	text_x_start = 3;
	text_y_start = 4;
	reset_text_values();

	if (alien_level_status == ALIEN_INITIAL_INSTRUCTION)
	{
		pointer = alien_instruction_text;
		text_length = sizeof(alien_instruction_text);
		alien_level_status = ALIEN_EVALUATION; // used for next time
	}
	else if (alien_level_status == ALIEN_EVALUATION)
	{
		if (gas_pumped > LAST_LEVEL_GOAL - 5 && gas_pumped < LAST_LEVEL_GOAL + 5)
		{
			pointer = alien_evaluation_text_good;
			text_length = sizeof(alien_evaluation_text_good);
			alien_level_cleared = 1;
		}
		else
		{
			pointer = alien_evaluation_text_bad;
			text_length = sizeof(alien_evaluation_text_bad);
			alien_level_failed = 1;
		}
	}

	game_mode = MODE_ALIEN_INSTRUCTION;
	pal_fade_to(0, 4);
	music_play(SONG_ALIENTALKINGTIME);
}

void bank_4_instruction_loop(void)
{
	ppu_wait_nmi();
	moveframes++;
	// write text

	if (text_row < 9)
	{
		typewriter();
	}

	oam_clear();

	if (moveframes < 5)
	{
		oam_meta_spr(190, 193, alien_gas_mouth_0);
	}
	else if (moveframes < 10)
	{
		oam_meta_spr(190, 193, alien_gas_mouth_1);
	}
	else if (moveframes < 15)
	{
		oam_meta_spr(190, 193, alien_gas_mouth_2);
	}
	else if (moveframes < 20)
	{
		oam_meta_spr(190, 193, alien_gas_mouth_3);
	}
	else if (moveframes < 25)
	{
		oam_meta_spr(190, 193, alien_gas_mouth_4);
	}
	else if (moveframes < 30)
	{
		oam_meta_spr(190, 193, alien_gas_mouth_5);
	}
	else if (moveframes < 35)
	{
		oam_meta_spr(190, 193, alien_gas_mouth_6);
	}
	else if (moveframes < 40)
	{
		oam_meta_spr(190, 193, alien_gas_mouth_7);
	}
	else if (moveframes < 45)
	{
		oam_meta_spr(190, 193, alien_gas_mouth_8);
	}
	else
	{
		oam_meta_spr(190, 193, alien_gas_mouth_0);
		moveframes = 0;
	}

	if (moveframes < 30)
	{
		oam_meta_spr(185, 178, alien_eyes_10);
	}
	else
	{
		oam_meta_spr(185, 178, alien_eyes_17);
	}

	read_input();
	if (trigger_clicked)
	{
		wait_and_fade_out();
		if (alien_level_cleared)
		{
			banked_call(BANK_5, bank_5_starfield_init);
		}
		else if (alien_level_failed)
		{
			banked_call(BANK_5, bank_5_gameover_init);
		}
		else
		{
			banked_call(BANK_4, bank_4_alien_level_init);
		}
	}
}

void bank_4_cutscene_loop(void)
{
	ppu_wait_nmi();

	// add in sprite animation, etc here

	if (abduction_cutscene_step == ABDUCTION_START)
	{
		// 600 frames for guy to smoke cigarette, etc
		// draw sprites:
		oam_clear();
		// ufo
		if (moveframes % 4 == 0)
		{
			sprite_pointer = abduction_ship_1;
		}
		else
		{
			sprite_pointer = abduction_ship_2;
		}

		// guy
		if (moveframes < 100)
		{
			oam_meta_spr(201, 180, abduction_guy_0);
		}
		else if (moveframes < 110)
		{
			oam_meta_spr(201, 180, abduction_guy_1);
		}
		else if (moveframes < 120)
		{
			oam_meta_spr(201, 180, abduction_guy_2);
		}
		else if (moveframes < 130)
		{
			oam_meta_spr(201, 180, abduction_guy_3);
		}
		else if (moveframes < 140)
		{
			oam_meta_spr(201, 180, abduction_guy_4);
		}
		else if (moveframes < 150)
		{
			oam_meta_spr(201, 180, abduction_guy_5);
		}
		else if (moveframes < 160)
		{
			oam_meta_spr(201, 180, abduction_guy_6);
		}
		else if (moveframes < 170)
		{
			oam_meta_spr(201, 180, abduction_guy_7);
		}
		else if (moveframes < 180)
		{
			oam_meta_spr(201, 180, abduction_guy_8);
		}
		else if (moveframes < 190)
		{
			oam_meta_spr(201, 180, abduction_guy_9);
		}
		else if (moveframes < 200)
		{
			oam_meta_spr(201, 180, abduction_guy_10);
		} // end of smoking
		else if (moveframes < 210)
		{
			oam_meta_spr(201, 180, abduction_guy_3);
		}
		else if (moveframes < 220)
		{
			oam_meta_spr(201, 180, abduction_guy_2);
		}
		else if (moveframes < 230)
		{
			oam_meta_spr(201, 180, abduction_guy_1);
		}
		else if (moveframes < 300)
		{
			oam_meta_spr(201, 180, abduction_guy_0);
		}
		else if (moveframes < 310) // second puff of cigarette
		{
			oam_meta_spr(201, 180, abduction_guy_1);
		}
		else if (moveframes < 320)
		{
			oam_meta_spr(201, 180, abduction_guy_2);
		}
		else if (moveframes < 330)
		{
			oam_meta_spr(201, 180, abduction_guy_3);
		}
		else if (moveframes < 340)
		{
			oam_meta_spr(201, 180, abduction_guy_4);
		}
		else if (moveframes < 350)
		{
			oam_meta_spr(201, 180, abduction_guy_5);
		}
		else if (moveframes < 360)
		{
			oam_meta_spr(201, 180, abduction_guy_6);
		}
		else if (moveframes < 370)
		{
			oam_meta_spr(201, 180, abduction_guy_7);
		}
		else if (moveframes < 380)
		{
			oam_meta_spr(201, 180, abduction_guy_8);
		}
		else if (moveframes < 390)
		{
			oam_meta_spr(201, 180, abduction_guy_9);
		}
		else if (moveframes < 400)
		{
			oam_meta_spr(201, 180, abduction_guy_10);
		} // end of second puff
		else if (moveframes < 440)
		{
			oam_meta_spr(201, 180, abduction_guy_11); // empty hand / cigarette flip
			oam_meta_spr(194, 170, abduction_cigarette_0);
		}
		else if (moveframes < 445)
		{
			oam_meta_spr(201, 180, abduction_guy_11); // empty hand / cigarette flip
			oam_meta_spr(186, 172, abduction_cigarette_1);
		}
		else if (moveframes < 450)
		{
			oam_meta_spr(201, 180, abduction_guy_11); // empty hand / cigarette flip
			oam_meta_spr(180, 174, abduction_cigarette_2);
		}
		else if (moveframes < 460)
		{
			oam_meta_spr(201, 180, abduction_guy_11); // empty hand / cigarette flip
			oam_meta_spr(176, 176, abduction_cigarette_3);
		}
		else if (moveframes < 470)
		{
			oam_meta_spr(201, 180, abduction_guy_11); // empty hand / cigarette flip
			oam_meta_spr(170, 178, abduction_cigarette_4);
		}
		else if (moveframes < 480)
		{
			oam_meta_spr(201, 180, abduction_guy_11); // empty hand / cigarette flip
			oam_meta_spr(168, 180, abduction_cigarette_5);
		}
		else if (moveframes < 490)
		{
			oam_meta_spr(201, 180, abduction_guy_11); // empty hand / cigarette flip
			oam_meta_spr(167, 181, abduction_cigarette_6);
		}
		else if (moveframes < 500)
		{
			oam_meta_spr(201, 180, abduction_guy_11); // empty hand / cigarette flip
			oam_meta_spr(166, 182, abduction_cigarette_7);
			moveframes2 = 0;
		}
		else if (moveframes < 510)
		{
			// ufo comes down
			oam_meta_spr(172, 0, sprite_pointer);
			oam_meta_spr(201, 180, abduction_guy_12); // hand going down
			oam_meta_spr(166, 182, abduction_cigarette_7);
		}
		else if (moveframes < 511)
		{
			oam_meta_spr(172, 1, sprite_pointer);
			oam_meta_spr(201, 180, abduction_guy_12); // hand going down
			oam_meta_spr(166, 182, abduction_cigarette_7);
			moveframes2 = 0;
		}
		else if (moveframes < 520)
		{
			oam_meta_spr(172, 2 + moveframes2, sprite_pointer);
			oam_meta_spr(201, 180, abduction_guy_13);
			oam_meta_spr(166, 182, abduction_cigarette_7);
		}
		else if (moveframes < 540)
		{
			oam_meta_spr(172, 12, sprite_pointer);
			oam_meta_spr(201, 180, abduction_guy_14);
			oam_meta_spr(166, 182, abduction_cigarette_7);
		}
		else
		{
			oam_meta_spr(172, 12, sprite_pointer);
			oam_meta_spr(201, 180, abduction_guy_14);
			oam_meta_spr(166, 182, abduction_cigarette_7);
			// init next step
			moveframes = 0;
			abduction_cutscene_step = ABDUCTION_BEAM;
			cutscene_index = NAMETABLE_A;
			attribute_bytes_written = 0;
			nametable_index = 0;
		}
		// the ship needs to come in here, from the right
		++moveframes;
		if (moveframes % 2 == 0)
		{
			++moveframes2;
		}
	}

	if (abduction_cutscene_step == ABDUCTION_BEAM)
	{
		oam_clear();
		oam_meta_spr(166, 182, abduction_cigarette_7); // cigarette on the ground
		oam_meta_spr(201, 180, abduction_guy_14);
		if (moveframes % 4 == 0)
		{
			oam_meta_spr(172, 12, abduction_ship_1);
		}
		else
		{
			oam_meta_spr(172, 12, abduction_ship_2);
		}

		// this is just used for the beam coming down, maybe we want the guy
		//  to anmiate here to, but not right now
		if (nametable_index == 960)
		{
			moveframes = 0;
			abduction_cutscene_step = ABDUCTION_BEAM_UP;
		}

		// todo: need sprite of beam coming down
		//  we want to do 1 line every 5 frames
		if (index2 == 5 && nametable_index < 960)
		{
			// index3 is going through the loop 2 times, because of
			if (index3 == 3 && attribute_bytes_written < 64)
			{
				for (index = 0; index < 8; ++index)
				{
					one_vram_buffer(abduction_cutscene_beam[960 + attribute_bytes_written], NAMETABLE_A_ATTR + attribute_bytes_written);
					++attribute_bytes_written;
				}
				index3 = 0;
			}

			for (index = 0; index < 32; ++index)
			{
				one_vram_buffer(abduction_cutscene_beam[nametable_index], cutscene_index);
				++nametable_index;
				++cutscene_index;
			}

			++index3;
			index2 = 0;
		}

		++index2;
		++moveframes;
	}
	if (abduction_cutscene_step == ABDUCTION_BEAM_UP)
	{
		oam_clear();
		// cigarette on the ground
		oam_meta_spr(166, 182, abduction_cigarette_7);
		// draw space ship:
		if (moveframes % 4 == 0)
		{
			oam_meta_spr(172, 12, abduction_ship_1);
		}
		else
		{
			oam_meta_spr(172, 12, abduction_ship_2);
		}

		if (moveframes < 0)
		{
			oam_meta_spr(201, 180, abduction_guy_15);
		}
		else if (moveframes < 10)
		{
			oam_meta_spr(201, 180, abduction_guy_16);
		}
		else if (moveframes < 20)
		{
			oam_meta_spr(201, 180, abduction_guy_17);
		}
		else if (moveframes < 30)
		{
			oam_meta_spr(193, 162, abduction_guy_hat);
			oam_meta_spr(201, 180, abduction_guy_18);
		}
		else if (moveframes < 40)
		{
			oam_meta_spr(193, 162 - (2 * (moveframes - 30)), abduction_guy_hat);
			oam_meta_spr(201, 180, abduction_guy_19);
		}
		else if (moveframes < 50)
		{
			oam_meta_spr(193, 162 - (2 * (moveframes - 30)), abduction_guy_hat);
			oam_meta_spr(201, 180, abduction_guy_20);
		}
		else if (moveframes < 60)
		{
			oam_meta_spr(193, 162 - (2 * (moveframes - 30)), abduction_guy_hat);
			oam_meta_spr(201, 180, abduction_guy_21);
		}
		else if (moveframes < 70)
		{
			oam_meta_spr(193, 162 - (2 * (moveframes - 30)), abduction_guy_hat);
			oam_meta_spr(201, 180, abduction_guy_22);
		}
		else if (moveframes < 80)
		{
			oam_meta_spr(193, 162 - (2 * (moveframes - 30)), abduction_guy_hat);
			oam_meta_spr(201, 180, abduction_guy_23);
		}
		else if (moveframes < 90)
		{
			oam_meta_spr(193, 162 - (2 * (moveframes - 30)), abduction_guy_hat);
			oam_meta_spr(201, 180, abduction_guy_24);
		}
		else if (moveframes < 100)
		{
			oam_meta_spr(201, 180, abduction_guy_25);
		}
		// question mark over his head is 35-38
		// guy goes 24 and 25 (to 'scratch' is head)
		// hand back down is 24-18
		else if (moveframes < 110)
		{
			// moveframes between 100 and 110
			oam_meta_spr(201, 150, Cutscene_35_data);
			oam_meta_spr(201, 180, abduction_guy_24);
		}
		else if (moveframes < 120)
		{
			// moveframes between 100 and 110
			oam_meta_spr(201, 150, Cutscene_36_data);
			oam_meta_spr(201, 180, abduction_guy_25);
		}
		else if (moveframes < 130)
		{
			// moveframes between 100 and 110
			oam_meta_spr(201, 150, Cutscene_37_data);
			oam_meta_spr(201, 180, abduction_guy_24);
		}
		else if (moveframes < 190)
		{
			// moveframes between 100 and 110
			oam_meta_spr(201, 150, Cutscene_38_data);
			oam_meta_spr(201, 180, abduction_guy_25);
		}
		else if (moveframes < 200)
		{
			// moveframes between 100 and 110
			oam_meta_spr(201, 150, Cutscene_37_data);
			oam_meta_spr(201, 180, abduction_guy_25);
		}
		else if (moveframes < 210)
		{
			// moveframes between 100 and 110
			oam_meta_spr(201, 150, Cutscene_36_data);
			oam_meta_spr(201, 180, abduction_guy_25);
		}
		else if (moveframes < 220)
		{
			// moveframes between 100 and 110
			oam_meta_spr(201, 150, Cutscene_35_data);
			oam_meta_spr(201, 180, abduction_guy_25);
			moveframes2 = 0;
		}
		// then the abduction below
		else if (moveframes < 230)
		{
			oam_meta_spr(201, 180 - moveframes2, abduction_guy_45);
		}
		else if (moveframes < 240)
		{
			oam_meta_spr(201, 180 - moveframes2, abduction_guy_46);
		}
		else if (moveframes < 250)
		{
			oam_meta_spr(201, 180 - moveframes2, abduction_guy_47);
		}
		else if (moveframes < 260)
		{
			oam_meta_spr(201, 180 - moveframes2, abduction_guy_48);
		}
		else if (moveframes < 270)
		{
			oam_meta_spr(201, 180 - moveframes2, abduction_guy_49);
		}
		else if (moveframes < 280)
		{
			oam_meta_spr(201, 180 - moveframes2, abduction_guy_50);
		}
		else if (moveframes < 290)
		{
			oam_meta_spr(201, 180 - moveframes2, abduction_guy_51);
		}
		else if (moveframes < 300)
		{
			oam_meta_spr(201, 180 - moveframes2, abduction_guy_52);
		}
		else if (moveframes < 310)
		{
			oam_meta_spr(201, 180 - moveframes2, abduction_guy_53);
		}
		else
		{
			moveframes = 0;
			abduction_cutscene_step = ABDUCTION_BEAM_RETRACT;
			cutscene_index = NAMETABLE_A + 960;
			nametable_index = 960;
			attribute_bytes_written = 64;
			attribute_table_index = NAMETABLE_A_ATTR;
		}

		++moveframes;
		++moveframes2;
		index3 = 0;
		index2 = 0;
	}
	if (abduction_cutscene_step == ABDUCTION_BEAM_RETRACT)
	{
		oam_clear();
		oam_meta_spr(166, 182, abduction_cigarette_7);
		if (moveframes % 4 == 0)
		{
			oam_meta_spr(172, 12, abduction_ship_1);
		}
		else
		{
			oam_meta_spr(172, 12, abduction_ship_2);
		}
		// this is just used for the beam coming down, maybe we want the guy
		//  to anmiate here to, but not right now
		if (nametable_index == 0)
		{
			moveframes = 0;
			abduction_cutscene_step = ABDUCTION_SHIP_FLY_OFF;
		}
		// we want to do 1 line every 5 frames
		if (index2 == 5 && nametable_index > 0)
		{
			if (index3 == 3 && attribute_bytes_written > 0)
			{
				for (index = 0; index < 8; ++index)
				{
					one_vram_buffer(abduction_cutscene[960 + attribute_bytes_written - 1], NAMETABLE_A_ATTR + attribute_bytes_written - 1);
					--attribute_bytes_written;
				}
				index3 = 0;
			}
			for (index = 0; index < 32; ++index)
			{
				one_vram_buffer(abduction_cutscene[nametable_index], cutscene_index);
				--nametable_index;
				--cutscene_index;
			}
			++index3;
			index2 = 0;
		}

		++index2;
		++moveframes;
	}

	if (abduction_cutscene_step == ABDUCTION_SHIP_FLY_OFF)
	{
		oam_clear();
		oam_meta_spr(166, 182, abduction_cigarette_7);
		if (moveframes % 4 == 0)
		{
			sprite_pointer = abduction_ship_1;
		}
		else
		{
			sprite_pointer = abduction_ship_2;
		}

		if (moveframes < 12)
		{
			oam_meta_spr(172, 12 - moveframes, sprite_pointer);
		}
		else
		{
			// scroll(0, scroll_y);
			// --scroll_y;
			abduction_cutscene_step = ABDUCTION_SCROLL_UP;

			set_chr_bank_0(CUTSCENE_CHR_0);
			pal_bg(intro_cutscene_palette);
			scroll_y = 0x1df;
			nametable_index = 960;
			cutscene_index = NAMETABLE_A_ATTR - 1;
			attribute_bytes_written = 0;
			attribute_table_index = NAMETABLE_A_ATTR;
			moveframes = 0;
		}
		++moveframes;
	}
	if (abduction_cutscene_step == ABDUCTION_SCROLL_UP)
	{
		oam_clear();
		if (scroll_y <= 0)
		{
			abduction_cutscene_step = ABDUCTION_STAR_IN_SKY;
			moveframes = 0;
		}
		else
		{
			scroll(0, scroll_y);
			// draw some of the next screen
			if (moveframes == 8)
			{
				for (index = 0; index < 30; ++index)
				{
					one_vram_buffer(intro_cutscene_1x[nametable_index], cutscene_index);
					--nametable_index;
					--cutscene_index;
				}

				moveframes = 0;
			}
			if (scroll_y < 0x100 && attribute_bytes_written < 64)
			{
				// now we can update the attribute table
				for (index = 0; index < 4; ++index)
				{
					if (attribute_bytes_written < 64)
					{
						one_vram_buffer(intro_cutscene_1x[960 + attribute_bytes_written], attribute_table_index + attribute_bytes_written);
					}
					++attribute_bytes_written;
				}
			}
		}
		--scroll_y;
		++moveframes;
	}
	if (abduction_cutscene_step == ABDUCTION_STAR_IN_SKY)
	{
		oam_clear();
		if (moveframes < 100)
		{
			moveframes2 = 0;
		}
		else if (moveframes < 140)
		{
			oam_meta_spr(200 - moveframes2, 30, Cutscene_35_data);
		}
		else if (moveframes < 220)
		{
			moveframes2 = 0;
		}
		else
		{
			pal_fade_to(4, 0);
			abduction_cutscene_step = ABDUCTION_DONE;
		}
		++moveframes;
		moveframes2 += 5;
	}
	if (abduction_cutscene_step == ABDUCTION_DONE) // to call at the end of everything
	{
		wait_and_fade_out();
		alien_level_status = ALIEN_INITIAL_INSTRUCTION;
		banked_call(BANK_4, bank_4_instruction_init);
	}
}

void bank_4_alien_number_sprites(void)
{
	switch (temp)
	{
	case 1:
		pointer = AlienNumber1;
		break;
	case 2:
		pointer = AlienNumber2;
		break;
	case 3:
		pointer = AlienNumber3;
		break;
	default:
		pointer = AlienNumber0;
	}
}

unsigned char spacelevel_sprites[] = {0,1,2};
unsigned char spacelevel_sprites_x[] = {0, 120, 50};
unsigned char spacelevel_sprites_y[] = {0, 0, 60};

void bank_4_alien_level_loop(void)
{
	++moveframes;
	ppu_wait_nmi();
	oam_clear();  

	for(index = 0; index < 3; index++){
		if(index == 0){
			oam_meta_spr(spacelevel_sprites_x[index], spacelevel_sprites_y[index], tinyship0);
			spacelevel_sprites_x[index] = spacelevel_sprites_x[index] - 1;
			spacelevel_sprites_y[index] = spacelevel_sprites_y[index] - 1;
		}
		if(index == 1){
			oam_meta_spr(spacelevel_sprites_x[index], spacelevel_sprites_y[index], asteroidship0);
			spacelevel_sprites_x[index] = spacelevel_sprites_x[index] + 1;
			spacelevel_sprites_y[index] = spacelevel_sprites_y[index] - 1;
		}
		if(index == 2){
			if(moveframes%8 == 0){
				oam_meta_spr(spacelevel_sprites_x[index], spacelevel_sprites_y[index], jellyfish0);
			} else {
				oam_meta_spr(spacelevel_sprites_x[index], spacelevel_sprites_y[index], jellyfish1);
			}
			
			spacelevel_sprites_x[index] = spacelevel_sprites_x[index] + 1;
			spacelevel_sprites_y[index] = spacelevel_sprites_y[index] + 1;
		}
		
	}


	
	if(moveframes2 > 20){

		if(chr_bank == 0)
		{
			set_chr_bank_0(FUTUREPUMP_ALT_CHR_0);
			chr_bank = 1;
		} else if(chr_bank==1){
			set_chr_bank_0(FUTUREPUMP_ALT_2_CHR_0);
			chr_bank = 2;
		}else {
			set_chr_bank_0(FUTUREPUMP_CHR_0);
			chr_bank = 0;
		}	
		moveframes2 = 0;
	}
	

	if (moveframes < 5)
	{
		oam_meta_spr(124, 130, alien_gas_mouth_0);
	}
	else if (moveframes < 10)
	{
		oam_meta_spr(124, 130, alien_gas_mouth_1);
	}
	else if (moveframes < 15)
	{
		oam_meta_spr(124, 130, alien_gas_mouth_2);
	}
	else if (moveframes < 20)
	{
		oam_meta_spr(124, 130, alien_gas_mouth_3);
	}
	else if (moveframes < 25)
	{
		oam_meta_spr(124, 130, alien_gas_mouth_4);
	}
	else if (moveframes < 30)
	{
		oam_meta_spr(124, 130, alien_gas_mouth_5);
	}
	else
	{
		oam_meta_spr(124, 130, alien_gas_mouth_0);
	}

	if (moveframes > 90)
	{
		moveframes = 0;
	}

	if (moveframes < 30)
	{
		oam_meta_spr(120, 110, alien_eyes_10);
	}
	else
	{
		oam_meta_spr(120, 110, alien_eyes_17);
	}

	// draw_gliboons_count as sprites
	temp = aliengas1;
	banked_call(BANK_4, bank_4_alien_number_sprites);
	oam_meta_spr(176, 14, pointer);
	temp = aliengas2;
	banked_call(BANK_4, bank_4_alien_number_sprites);
	oam_meta_spr(160, 14, pointer);
	temp = aliengas3;
	banked_call(BANK_4, bank_4_alien_number_sprites);
	oam_meta_spr(144, 14, pointer);

	read_input(); // sets input_active  

	if (trigger_pulled)
	{
		++moveframes2;
		started_pumping = 1; // actually only need to set this once

		// add gas every X frameas
		if (moveframes > 16)
		{
			++gas_pumped; //<--total gas

			++aliengas1;
			moveframes = 0;
		}

		// roll up numbers
		if (aliengas1 > 3)
		{
			aliengas1 = 0;
			++aliengas2;
			if (aliengas2 > 3)
			{
				aliengas2 = 0;
				++aliengas3;
				if (aliengas3 > 3)
				{
					aliengas3 = 0;
					aliengas2 = 0;
					aliengas1 = 0;
				}
			}
		}
	}
	else
	{
		if (started_pumping == 1)
		{
			//if the number was wrong, flash the screen, and set the number to 0, give 3 tries
			if(gas_pumped != LAST_LEVEL_GOAL){
				pal_bg(alert_2);
				for (index = 0; index < 15; ++index)
				{
					ppu_wait_nmi();
				}
				pal_bg(alert_1);
				for (index = 0; index < 15; ++index)
				{
					ppu_wait_nmi();
				}
				
				//play_sfx() alert
				--lives;	
				if(lives > 0){
					started_pumping = 0;
					gas_pumped = 0;
					aliengas3 = 0;
					aliengas2 = 0;
					aliengas1 = 0;
					pal_bg(futurepump_palette);
				} else {
					wait_and_fade_out();
					banked_call(BANK_4, bank_4_instruction_init);
				}
			} else {
				wait_and_fade_out();
				banked_call(BANK_4, bank_4_instruction_init);
			}

			
		}
	}
}

#pragma endregion

#pragma region BANK_5
/*
 * Bank 5 is Gameover (and ....)
 *
 */
#pragma rodata-name("BANK5")
#pragma code-name("BANK5")

#include "BACKGROUNDS/gameover.h"
#include "BACKGROUNDS/starfield1.h"
#include "BACKGROUNDS/starfield2.h"
#include "BACKGROUNDS/starfield3.h"
#include "BACKGROUNDS/starfield4.h"
#include "BACKGROUNDS/starfield5.h"
#include "BACKGROUNDS/starfield6.h"
#include "BACKGROUNDS/starfield7.h"
#include "BACKGROUNDS/starfieldearth.h"

const unsigned char Starfields[8] = {
		STARFIELD1, STARFIELD2, STARFIELD3, STARFIELD4, STARFIELD5, STARFIELD6, STARFIELD7, STARFIELD8};

void bank_5_gameover_init(void)
{
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites

	pal_bg(gameover_palette);
	set_chr_bank_0(GAMEOVER_CHR_0);
	set_chr_bank_1(GAMEOVER_CHR_1);
	scroll(0, 0); // reset scrolling
	index = 0;

	vram_adr(NAMETABLE_A); // Nametable A;

	for (largeindex = 0; largeindex < 1024; ++largeindex)
	{
		vram_put(gameover[largeindex]);
		++index;
		if (index > 40)
		{ // don't put too much in the vram_buffer
			flush_vram_update2();
			index = 0;
		}
	}

	ppu_on_all();
	pal_fade_to(0, 4);
	game_mode = MODE_GAME_OVER;
	music_play(SONG_ASCENTIONOFZ);
}

void bank_5_gameover_loop(void)
{
	ppu_wait_nmi();
	// wait for keybaord input, then restart the whole game
	// I like the idea of just having this screen tell them they have to reset the game.
}


unsigned int spaceship_1_x = 230<<8;
unsigned int spaceship_1_y = 100<<8;
unsigned char spaceship_1_frames = 0;
unsigned char spaceship_destroyed = 0;
unsigned char spaceship_y_dir = 0;
const unsigned char ship_speeds[] = { 90, 180, 250, 200};
#include "SPRITES/starfield.h"

void bank_5_spaceship_generator(){
		spaceship_destroyed = 0;
		spaceship_1_x = 230<<8;
		spaceship_1_y = 100<<8;
		spaceship_1_frames = 0;
		++starfield_enemies;
		index = get_frame_count() % 4;
		temp = ship_speeds[index];
		spaceship_y_dir = (get_frame_count() & 1) == 0;
		switch(index){
			case 0:
				sprite_pointer = rocket_ship_0;
				break;
			case 1:
				sprite_pointer = ufo_ship;
				break;  
			case 2:  
				sprite_pointer = small_ufo_0;
				break;
			case 3:
				sprite_pointer = spacesquid_0;
				break;
			default:
				sprite_pointer = ufo_ship;
				break;  
		}
		if(starfield_enemies == 10){
			//boss level
			boss_level = 1;
			sprite_pointer = big_boss_ship;
			spaceship_1_x = 200<<8;
			spaceship_1_y = 100<<8;
		}
}

void bank_5_starfield_init(void)
{
	set_mirroring(MIRROR_VERTICAL);
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites

	pal_bg(starfield_palette);
	set_chr_bank_0(STARFIELD_CHR_0);
	set_chr_bank_1(STARFIELD_CHR_1);
	scroll(0, 0); // reset scrolling
	index = 0;
	scroll_x = 0;
	moveframes = 0;
	scroll_page = 0;
	nametable_selected = 1;
	starfield_enemies = 0;
	enemies_hit = 0;

	vram_adr(NAMETABLE_A);

	for (largeindex = 0; largeindex < 1024; ++largeindex)
	{
		vram_put(starfield1[largeindex]);
		++index;
		if (index > 40)
		{ // don't put too much in the vram_buffer
			flush_vram_update2();
			index = 0;
		}
	}

	vram_adr(NAMETABLE_B);
	for (largeindex = 0; largeindex < 1024; ++largeindex)
	{
		vram_put(starfield2[largeindex]);
		++index;
		if (index > 40)
		{ // don't put too much in the vram_buffer
			flush_vram_update2();
			index = 0;
		}
	}

	pal_fade_to(0, 4);
	ppu_on_all();
	game_mode = MODE_ALIEN_STARFIELD;
	pointer = starfield3;
	nametable_index = NAMETABLE_A;
	attribute_table_index = NAMETABLE_A_ATTR;
	attribute_bytes_written = 0;
	music_play(SONG_ENDINGSPACE);
	bank_5_spaceship_generator();
}

unsigned char column_pixel_counter = 0;
unsigned char row_column_index = 0;

void bank_5_draw_screen_right(void)
{
	if (column_pixel_counter > 7)
	{
		// after we've scrolled 8 pixels, lets draw the next column
		for (largeindex = 0; largeindex <= 960; largeindex += 32)
		{
			// draw a column of sprites.
			one_vram_buffer(pointer[largeindex + row_column_index], nametable_index + largeindex + row_column_index);
		}
		column_pixel_counter = 0;
		++row_column_index;
		if (attribute_bytes_written < 64)
		{
			// todo: fix this attribute stuff being bad
			//  either shift the screen forward before drawing more
			//  or just draw all the attributes buffer at once

			one_vram_buffer(pointer[960 + attribute_bytes_written], attribute_table_index);
			++attribute_bytes_written;
			++attribute_table_index;
			one_vram_buffer(pointer[960 + attribute_bytes_written], attribute_table_index);
			++attribute_bytes_written;
			++attribute_table_index;
		}
	}

	if (row_column_index >= 32)
	{
		// we've drawn the full screen now, let's pick a new background.

		if (nametable_selected == 0)
		{
			attribute_table_index = NAMETABLE_A_ATTR;
			nametable_index = NAMETABLE_A;
			attribute_bytes_written = 0;
			nametable_selected = 1;
		}
		else
		{
			nametable_index = NAMETABLE_B;
			attribute_table_index = NAMETABLE_B_ATTR;
			attribute_bytes_written = 0;
			nametable_selected = 0;
		}

		// randomly pick a new starfield
		temp1 = rand8(); // 0 - 255
		if (temp1 < 32)
		{
			pointer = starfield1;
		}
		else if (temp1 < 64)
		{
			pointer = starfield2;
		}
		else if (temp1 < 96)
		{
			pointer = starfield3;
		}
		else if (temp1 < 128)
		{
			pointer = starfield4;
		}
		else if (temp1 < 160)
		{
			pointer = starfield5;
		}
		else if (temp1 < 192)
		{
			pointer = starfield6;
		}
		else if (temp1 < 224)
		{
			pointer = starfield7;
		}
		else
		{
			pointer = starfield7;
			// pointer = starfieldearth;
		}

		row_column_index = 0;
	}
}


unsigned char player_x = 40;
unsigned char player_y = 100;
unsigned char player_x_direction = 0;
unsigned char player_y_direction = 0;

void bank_5_draw_starfield_player_sprite(void){
	if(player_y < 30){
		player_y_direction = 1;
	}
	if(player_y > 170){
		player_y_direction = 0;
	}

	if(player_y_direction){
		++player_y;
	} else {
		--player_y;
	}
	oam_meta_spr(player_x, player_y, rocket_rider_right);
}

void bank_5_starfield_boss_defeated(void){
	//todo flash screen
	ppu_wait_nmi();
	ppu_wait_nmi();
	ppu_wait_nmi();
	ppu_wait_nmi();
	ppu_off();

	//flash screen
	//redraw background
	vram_adr(NAMETABLE_A); // Nametable A;

	for (largeindex = 0; largeindex < 1024; ++largeindex)
	{
		vram_put(starfield1[largeindex]);
		++index;
		if (index > 40)
		{ // don't put too much in the vram_buffer
			flush_vram_update2();
			index = 0;
		}
	}
	

	vram_adr(NAMETABLE_B); // Nametable A;

	for (largeindex = 0; largeindex < 1024; ++largeindex)
	{
		vram_put(starfieldearth[largeindex]);
		++index;
		if (index > 40)
		{ // don't put too much in the vram_buffer
			flush_vram_update2();
			index = 0;
		}
	}
	player_x = 100;

	//switch scroll
	scroll_x = 0;
	scroll(scroll_x, 0);
	
	ppu_on_all();
	starfield_complete = 1;
}

unsigned char boss_hits = 0;
unsigned char count_frames = 1;
unsigned int zip_through = 400;
void bank_5_draw_starfield_boss(void){
	++sprite_frames;
	++moveframes;

	if(sprite_frames == 40 && count_frames){
		//change the ship speed randomly

		index = rand8() & 2;
		temp = ship_speeds[index];
		sprite_frames = 0;
	}

	if(spaceship_destroyed && boss_hits == 2){
			if(sprite_frames < 4){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_0);		
			}
			else if(sprite_frames < 8){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_1);		
			}
			else if(sprite_frames < 12){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_2);		
			}
			else if(sprite_frames < 23){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_3);		
			}
			else if (sprite_frames < 30){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_23);	
				count_frames = 0;
			}else if(sprite_frames < 254){
				scroll_x += 2;
			}else if (sprite_frames == 600){	
				banked_call(BANK_5, bank_5_starfield_boss_defeated);
			}
			return;
		}

	if(moveframes > 600 && moveframes < 700 && spaceship_destroyed == 0){
		//open up to shoot during these frames.
		//the guy stops moving for them.
		

		
		//draw the sprite
		if (shooting_mode == 1)
		{
			//todo: smaller target for this guy
			oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), white_3_target);
		} else {
			oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), big_boss_ship);	
		}
		
	} else {
		if(moveframes > 700){
			//reset stuff for boss level
			moveframes = 0;
			spaceship_destroyed = 0;
		}
		if(high_byte(spaceship_1_y) == 40){
			spaceship_y_dir = 0;
		}
		if(high_byte(spaceship_1_y) == 220){
			spaceship_y_dir = 1;
		}

		if(spaceship_y_dir){
			spaceship_1_y -= temp;
		} else {
			spaceship_1_y += temp;
		}	
		if (shooting_mode == 1)
		{
			//show nothing to shoot
			// oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), ufo_ship);	
		} else {
			oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), ufo_ship);	
		}
		
		
	}
	
}

void bank_5_draw_starfield_sprites(void)
{
	if(boss_level){
		banked_call(BANK_5, bank_5_draw_starfield_boss);
		return;
	}
	
	++spaceship_1_frames;
	if(spaceship_destroyed && spaceship_1_frames < 30){
		if(starfield_enemies %2 == 0){
			if(spaceship_1_frames < 4){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_0);		
			}
			else if(spaceship_1_frames < 8){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_1);		
			}
			else if(spaceship_1_frames < 12){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_2);		
			}
			else if(spaceship_1_frames < 23){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_3);		
			}
			else if (spaceship_1_frames < 30){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_23);	
			}
			return;
		
		} 
		else {  
			if(spaceship_1_frames < 3){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_15);	
			}
			else if(spaceship_1_frames < 6){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_16);	
			}
			else if(spaceship_1_frames < 9){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_17);	
			}
			else if(spaceship_1_frames < 12){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_18);	
			}
			else if(spaceship_1_frames < 15){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_19);	
			}else if(spaceship_1_frames < 18){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_20);	
			}else if(spaceship_1_frames < 21){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_21);	
			}else if(spaceship_1_frames < 24){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_22);	
			}else if(spaceship_1_frames < 27){
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_23);	
			} else {
				oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), explosion_23);	
			}
		}
			
			return;
	}
	if(spaceship_destroyed && spaceship_1_frames == 30){
		//after 30 frames, reset it.
		++enemies_hit;
		banked_call(BANK_5,bank_5_spaceship_generator);
	}

	if(high_byte(spaceship_1_x) < 5){
		//shake screen? flash red?
		banked_call(BANK_5,bank_5_spaceship_generator);
	}
	

	// move the sprite

		spaceship_1_x -= temp;
		spaceship_1_x -= temp;

		if(spaceship_y_dir){
			spaceship_1_y -= temp;
		} else {
			spaceship_1_y += temp;
		}	


	
	

	//draw the sprite
	if (shooting_mode == 1)
	{
		oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), white_4_target);
	}    
	else  
	{
		oam_meta_spr(high_byte(spaceship_1_x), high_byte(spaceship_1_y), sprite_pointer);	
		
	}
}

unsigned char test_count = 0;
void bank_5_starfield_loop(void)
{

	ppu_wait_nmi();
	oam_clear();
	
	if (starfield_complete)
	{	
		++test_count;
		
		if(player_x_direction){
			player_x -= 2;
			scroll_x += 1;
			oam_meta_spr(player_x, 100, rocket_rider_left);
		} else {
			if(test_count < 100){
				scroll_x += 2;
			} else {
				scroll_x += 2;
			}
			player_x += 2;
			oam_meta_spr(player_x, 100, rocket_rider_right);
		}
		
		if(player_x < 8){
			player_x_direction = 1;
		}

		if(player_x == 10){
			wait_and_fade_out();
			banked_call(BANK_2, bank_2_ending_scroll_init);
			game_mode = MODE_GAME_ENDING;
		}
		scroll(scroll_x, 0);
		return;		
	}
	

	scroll_x += 2;
	column_pixel_counter += 2;
	scroll(scroll_x, 0);
	bank_5_draw_screen_right();

	bank_5_draw_starfield_player_sprite();
	bank_5_draw_starfield_sprites();

	read_input();
	if (trigger_clicked)
	{
		shooting_mode = 1;
		ppu_mask(0x16); // BG off, won't happen till NEXT frame
		ppu_wait_nmi(); // wait till the top of the next frame
		oam_clear();
		// draw white blocks
		bank_5_draw_starfield_sprites();

		if(hit_detected){
			spaceship_destroyed = 1;
			spaceship_1_frames = 0;
			if(boss_level){
				sprite_frames = 0;
				++boss_hits;
			}
			
			
		}
		ppu_wait_nmi();
		shooting_mode = 0;
		ppu_mask(0x1e); // bg on, won't happen till NEXT frame
	}

	++moveframes;
	
}

#pragma endregion

#pragma region CODE
/*
 *  Bank 7 is the fixed bank for game code.
 *  But I think it's small because of that.
 *  So really it'll just have the game loop and call off to other fns
 *
 * Game flow:
 * title->intro_scroll->intro_cutscene->
 * talking_time(level1)->level1->evaluation(level1)-> (repeat if failed)
 * talking_time(level2)->level2->evaluation(level2)-> (repeat if failed)
 * talking_time(level3)->level3->evaluation(level3)-> (repeat if failed)
 * last_level_cutscene (abduction)->
 * talking_time(level4)->level4(space)->evaluation(level4) (probably a new screen)->
 * (if failed) go to gameoverscreen.
 * shooting_level???->ending_scroll
 */
#pragma rodata-name("CODE")
#pragma code-name("CODE")

void main(void)
{

	ppu_off(); // screen off
	moveframes = 0;

	pal_bg(gaspump_palette);				 //	load the palette
	pal_spr(gaspump_sprite_palette); //	load the palette

	pal_col(0, 0x0D);

	// initial values
	alien_level = 0;

	bank_spr(1);				// sprites use the 2nd tileset
	set_scroll_y(0xff); // shift the bg down 1 pixel

	vram_adr(NAMETABLE_A);
	// this sets a start position on the BG, top left of screen
	// vram_adr() and vram_unrle() need to be done with the screen OFF

	ppu_wait_nmi(); // wait  

	//	music_play(0); // silence

	set_vram_buffer(); // points ppu update to vram_buffer, do this at least once

	ppu_on_all(); // turn on screen

	// debug, actually allow this:
	banked_call(BANK_1, bank_1_title_init);
	game_mode = MODE_TITLE;

	// debug to the level I want to test
	/*
		DEBUG ONLY!!!!
	*/
	// banked_call(BANK_1, bank_1_instructions_init);
	// banked_call(BANK_5, bank_5_gameover_init);
	// alien_level_status = ALIEN_INITIAL_INSTRUCTION;
	// banked_call(BANK_4, bank_4_instruction_init);
	// banked_call(BANK_1, bank_1_instructions_init);
	// banked_call(BANK_4, bank_4_instruction_init);
	// banked_call(BANK_5, bank_5_starfield_init);

	while (1)
	{
		// if(game_mode == MODE_X)
		// {
		// 	call banked loop for this mode, that code will call ppu_wait_nmi
		// 	and handle init/transition to new game modes
		// }

		if (game_mode == MODE_TITLE)
		{
			banked_call(BANK_0, bank_0_title_loop);
		}

		if (game_mode == MODE_INTRO_SCROLL)
		{ // text scroll (in the year 20XX...)
			banked_call(BANK_0, bank_0_intro_scroll_loop);
		}
		if (game_mode == MODE_INTRO_CUTSCENE)
		{ // city scroll (scrolls down from the sky)
			banked_call(BANK_0, bank_0_intro_cutscene_loop);
		}

		if (game_mode == MODE_INTRO_INSTRUCTION)
		{ // Al tells you to pump gas
			banked_call(BANK_1, bank_1_instructions_loop);
		}

		if (game_mode == MODE_EVALUATION_TIME)
		{ // Al tells you how good you did
			banked_call(BANK_1, bank_1_evaluation_loop);
		}
		if (game_mode == MODE_GAME)
		{ // this is game pumping mode,
			banked_call(BANK_3, bank_3_level_loop);
		}
		if (game_mode == MODE_ABDUCTION_CUTSCENE)
		{
			banked_call(BANK_4, bank_4_cutscene_loop);
		}
		if (game_mode == MODE_ALIEN_INSTRUCTION)
		{
			banked_call(BANK_4, bank_4_instruction_loop);
		}
		if (game_mode == MODE_ALIEN_LEVEL)
		{
			// todo
			// get number sprites, do number sprite work.
			banked_call(BANK_4, bank_4_alien_level_loop);
		}
		if (game_mode == MODE_ALIEN_EVALUATION)
		{
			// we don't need this anymore, we just use instruction both times.
		}
		if (game_mode == MODE_ALIEN_STARFIELD)
		{
			// todo
			// add actual shooting and more sprites.
			banked_call(BANK_5, bank_5_starfield_loop);
		}
		if (game_mode == MODE_GAME_ENDING)
		{
			// todo, just gonna be a scroll.
			//
			banked_call(BANK_2, bank_2_ending_scroll_loop);
		}
		if (game_mode == MODE_GAME_OVER)
		{
			// todo brian has better content here eventually
			banked_call(BANK_5, bank_5_gameover_loop);
		}
	}
}

void clear_background(void)
{
	// draw all 0x00 into the bg
	vram_adr(NAMETABLE_A);
	for (tempint = 0; tempint < 1024; ++tempint)
	{
		vram_put(0x00);
		flush_vram_update2();
	}
}

void white_background(void)
{
	// draw all 0x00 into the bg
	vram_adr(NAMETABLE_A);
	for (tempint = 0; tempint < 960; ++tempint)
	{
		vram_put(0x00);
		flush_vram_update2();
	}
}

void draw_talking_time(void)
{

	temp1 = 0x2044; // vram addr for start of box

	for (temp2 = 0; temp2 < 6; ++temp2)
	{
		ppu_wait_nmi();

		vram_adr(temp1); // Nametable A starting block
		for (index = 0; index < 9; ++index)
		{

			vram_put(0x00);
		}
		flush_vram_update2();

		temp1 += 16;
	}
	flush_vram_update2();

	talking_time = 1;
}

void read_input(void)
{
	hit_detected = 0;
	// just a debug to include the a button for now.
	// right now this is using 1 as the zapper
	pad1 = pad_poll(0);				 // read the first controller
	pad1_new = get_pad_new(0); // newly pressed button. do pad_poll first

	zapper_ready = pad1_zapper ^ 1; // XOR last frame, make sure not held down still
	pad1_zapper = zap_shoot(1);			// controller slot 2

	trigger_pulled = (pad1 & PAD_B) || (pad1 & PAD_A) || zap_shoot(1);															 // controller slot 1 zapper
	trigger_clicked = (pad1_new & PAD_A) || (pad1_new & PAD_B) || ((pad1_zapper) && (zapper_ready)); // needs to check last frame for blank

	if ((pad1_zapper) && (zapper_ready))
	{
		hit_detected = zap_read(1);
	}
	if (debug_mode && hit_detected == 0)
	{
		hit_detected = (pad1 & PAD_A);
	}
}

void reset_game_variables()
{
	gas1 = gas2 = gas3 = gas4 = gas5 = 0;
	cost1 = cost2 = cost3 = cost4 = cost5 = 0;
	lives = 3;
}

void wait_a_little()
{
	for (index = 0; index < 25; ++index)
	{
		ppu_wait_nmi();
	}
}

void reset_text_values(void)
{
	text_rendered = 0;
	text_row = 0;
	text_col = 0;
}

void typewriter(void)
{

	if (text_rendered != text_length)
	{

		if (pointer[text_rendered] == '\n')
		{
			// auto-wrap to next row
			++text_row;
			text_col = 0;
		}
		else if (pointer[text_rendered] == '\t')
		{
			text_col += 4;
			if (text_col >= 27) // wrap to next row
			{
				++text_row;
				text_col = 0;
			}
		}
		else
		{
			one_vram_buffer(pointer[text_rendered], NTADR_A(text_x_start + text_col, text_y_start + text_row));
			// delay(1);
			++text_col;

			if (text_col == 27) // wrap to next row
			{
				++text_row;
				text_col = 0;
			}
		}
		++text_rendered;
	}
}

void wait_and_fade_out()
{
	// wait 10 frames before starting the next section

	music_stop();
	for (index = 0; index < 10; ++index)
	{
		ppu_wait_nmi();
	}
	pal_fade_to(4, 0);
}

#pragma endregion
