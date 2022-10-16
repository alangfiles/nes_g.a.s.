/*	example code for cc65, for NES
 *  testing the zapper gun on controller slot 2
 *	using neslib
 *	Doug Fraker 2018
 */	
 

#include "LIB/neslib.h"
#include "LIB/nesdoug.h"

#include "LIB/zaplib.h"
#include "MMC1/bank_helpers.h"
#include "MMC1/bank_helpers.c"
#include "Gaspump.h"

#include "Sprites.h"
#include "Metatiles.h"
#include "level1.h"
 
#include "BACKGROUNDS/evaluation_rle.h"
#include "BACKGROUNDS/talkingtime_rle.h"

const unsigned char gaspump_palette[16]={ 
	0x2c,0x05,0x3d,0x15,
	0x2c,0x05,0x37,0x15,
	0x2c,0x0f,0x20,0x11,
	0x2c,0x19,0x2a,0x0f
	};

const unsigned char talking_time_palette[]={
	0x0f,0x20,0x16,0x36,
	0x0f,0x05,0x16,0x36,
	0x0f,0x00,0x1b,0x30,
	0x0f,0x09,0x19,0x38 
};
const unsigned char intro_cutscene_palette[16]={
	0x0f,0x01,0x14,0x30,
	0x0f,0x01,0x21,0x31,
	0x0f,0x06,0x16,0x26,
	0x0f,0x09,0x19,0x29 
};

const unsigned char gaspump_sprite_palette[]={ 
	0x0f,0x20,0x16,0x36,
	0x0f,0x05,0x16,0x36,
	0x0f,0x13,0x0f,0x36,
	0x0f,0x09,0x19,0x29 
	};


enum{BANK_0, BANK_1, BANK_2, BANK_3, BANK_4, BANK_5, BANK_6};
// 7 shouldn't be needed, that's the fixed bank, just call it normally


// BANK0 is being used for the INTRO_CUTSCENE
#pragma rodata-name ("BANK0")
#pragma code-name ("BANK0")
#include "BACKGROUNDS/intro_cutscene_1.h"
#include "BACKGROUNDS/intro_cutscene_2.h"
#include "BACKGROUNDS/intro_cutscene_3.h"
#include "BACKGROUNDS/intro_scroll_1.h"
#include "BACKGROUNDS/intro_scroll_2.h"
#include "BACKGROUNDS/intro_scroll_3.h"


void bank_1_init_mode_instructions(void); //prototype (needed to get call from bank_1)

int cutscene_index = NAMETABLE_A;
int nametable_index = 0;

unsigned char line_counter = 0;
unsigned char screen_line_counter = 0;


void bank_0_init_mode_intro_text(void){
	nametable_index = 0;
	scrolled_past_once = 0;
	stop_scrolling = 0;
	moveframes = 0;
	line_counter = 0;
	screen_line_counter=0;
	scroll_page = 0;
	cutscene_index = NAMETABLE_C;
	pointer = intro_scroll_1;
	scroll(0,0); //reset scrolling
	set_mirroring(MIRROR_HORIZONTAL);
	//reset changed values so they redraw
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites

	pal_bg(intro_cutscene_palette);

	set_chr_bank_0(TALKING_TIME_CHR);
	set_chr_bank_1(TALKING_TIME_CHR);
	
	ppu_on_all(); // turn on screen
	game_mode = MODE_INTRO_TEXT;
	
}

void bank_0_init_mode_intro_cutscene(void){
	nametable_index = 0;
	scrolled_past_once = 0;
	stop_scrolling = 0;
	moveframes = 0;
	line_counter = 0;
	scroll_y = 0;
	scroll(0,0); //reset scrolling
	set_mirroring(MIRROR_HORIZONTAL);
	//reset changed values so they redraw
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites

	pal_bg(intro_cutscene_palette);

	// bird_x = 0;

	set_chr_bank_0(INTRO_CHR);
	set_chr_bank_1(TALKING_TIME_CHR);
	//draw_bg: draw background code
	

	vram_adr(NAMETABLE_A);
	// this sets a start position on the BG, top left of screen A
	vram_unrle(intro_cutscene_1);

	vram_adr(NAMETABLE_C);
	// this sets a start position on the BG, top left of screen A
	vram_unrle(intro_cutscene_2);
	
	ppu_on_all(); // turn on screen
	game_mode=MODE_INTRO_CUTSCENE;
	pal_fade_to(0,4);        
}	  


void bank_0_mode_intro_text(void){
	++moveframes; //count up each frame

	if(moveframes == 3){
		++line_counter; //count 1 line up for each frame, so we know when we'd done 8 frames, and card draw
		++screen_line_counter; //count each screen line
		++scroll_y;
		moveframes = 0;
	}
	

	if(screen_line_counter > 240) 
	{
		++scroll_page;
		screen_line_counter = 0;
		nametable_index = 0;
		//update where we're pointing
		if(scroll_page == 1){
				cutscene_index = NAMETABLE_A;
				pointer = intro_scroll_2;
		}
		if(scroll_page == 2){
			cutscene_index = NAMETABLE_C;
			pointer = intro_scroll_3;
		}
	}

	if(scroll_page == 3){ //we're done here
		pal_fade_to(4,0);
		bank_0_init_mode_intro_cutscene();
		return;
	}

	if( line_counter == 8 && nametable_index < 1024){ // after we've scrolled 8 lines down, let's draw the next line in the nametable.
		for(index = 0; index < 32; ++index){
			one_vram_buffer(pointer[nametable_index], cutscene_index);
			++nametable_index;
			++cutscene_index;
		}
		line_counter = 0;
	}

	if(scroll_y > 0x1df) {
		scroll_y = 0;
	}

	if(moveframes == 0){
		scroll(0,scroll_y);
	}
}

void bank_0_mode_intro_cutscene(void){
	++moveframes;
	++line_counter;

	if(stop_scrolling == 0 && moveframes > 0){

		scroll_y += 1;

		if(scrolled_past_once == 1 && scroll_y > 0x1df){
			stop_scrolling = 1;
			moveframes=0;
		}
		
		// scroll_y = add_scroll_y(1, scroll_y);

		if( line_counter == 8 && nametable_index < 1024){ // after we've scrolled 8 lines down, let's draw the next line in the nametable.
			for(index = 0; index < 32; ++index){
				one_vram_buffer(intro_cutscene_3[nametable_index], cutscene_index);
				++nametable_index;
				++cutscene_index;
			}
			// flush_vram_update2();
			

			line_counter = 0;
		}

		

		if(scroll_y == 0x0ff){
			// ppu_off();
			// vram_adr(NAMETABLE_A);
			// vram_unrle(INTRO_BOTTOM);
			// ppu_on_all();
			scrolled_past_once = 1;
		}

		if(scroll_y > 0x1df) {
			scroll_y = 0;
		}
		scroll(0,scroll_y);
		moveframes = 0;
	}

	if(stop_scrolling == 1 && moveframes == 100){
		//wait for a while after scrolling down, then do instructions.
		banked_call(BANK_1, bank_1_init_mode_instructions);
	}
}

#pragma rodata-name ("BANK1")
#pragma code-name ("BANK1")

const unsigned char level_0_text[] = "So you wanna pump gas ?!?\nGive me 1 gallons\n Just pull the trigger\nBut don't click it.";
const unsigned char level_1_text[] = "You're starting to believe\nbut you have much to learn.\n\nNow give me 1 gallons!\nand make it quick!!!";
const unsigned char level_2_text[] = "I can't deny it...\nYou were born to do this.\nOne last test...\nCan you do 1 gallons?\n\nI'm watching closely...";
void bank_1_init_mode_instructions(void){
	reset_text_values();
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites
	clear_background();
	reset_game_variables();

	draw_talking_time_background();
	flush_vram_update2();

	// random gas goal (commenting out for now)
	// index = get_frame_count() & 3; // returns 0,1,2,3
	// gas_goal = gas_goal_array[index];

	switch (levels_complete)
	{
	case 0:
		pointer = level_0_text;
		text_length = sizeof(level_0_text);
		gas_goal = 1;
		break;
	case 1:
		pointer = level_1_text;
		text_length = sizeof(level_1_text);
		gas_goal = 1;
		break;
	case 2: 
		pointer = level_2_text;
		text_length = sizeof(level_2_text);
		gas_goal = 1;
		break;
	
	default:
		break;
	}

	ppu_on_all(); // turn on screen

	game_mode = MODE_INTRO_INSTRUCTION;
}

void bank_1_instructions_loop(void){
			ppu_wait_nmi();
			++moveframes;

			if(text_row < 6){
				typewriter();
			}

			if(moveframes > 60){
				moveframes = 0;
			}
			
			oam_clear(); // clear all sprites
			oam_meta_spr(0xb0, 0xc8, BigAlsShirt);
			oam_meta_spr(0xc0, 0xa8, BigAlsEyes);

			//big al loop:
			if(moveframes >= 0 && moveframes < 30){
				oam_meta_spr(0xb8, 0xbf, BigAlTalkClosedMouth);
			}
			if(moveframes >= 30 && moveframes < 61){
				oam_meta_spr(0xb8, 0xbf, BigAlTalkMidMouth);
			}

			read_input();

			if (trigger_clicked)
			{
				pal_fade_to(4,0);
				wait_a_little();
				init_mode_game();
			}
}

#include "BACKGROUNDS/title_screen_rle.h";

void bank_1_init_mode_title(void){ 
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites

	//todo: update these to the right banks
	pal_bg(intro_cutscene_palette);

	// bird_x = 0;

	set_chr_bank_0(INTRO_CHR);
	set_chr_bank_1(INTRO_CHR);

	vram_adr(NAMETABLE_A);
	vram_unrle(title_screen_rle);
	
	multi_vram_buffer_horz("G.A.S.", 6, NTADR_A(12,4)); 
	multi_vram_buffer_horz("Gas Attendant Simulator", 23, NTADR_A(5,6)); 
	flush_vram_update2();

	multi_vram_buffer_horz("Game Quest Mode", 15, NTADR_A(8,17)); 
	multi_vram_buffer_horz("Free Pump Mode", 14, NTADR_A(8,19)); 
	flush_vram_update2();

	ppu_on_all(); // turn on screen
	game_mode=MODE_TITLE;
	game_level=START_OF_GAME;
	option = 0;
	levels_complete = 0;
	perfect_levels = 0;
	reset_game_variables();

	//todo: add title music
}	


// the fixed bank, bank 7
#pragma rodata-name ("CODE")
#pragma code-name ("CODE")	
	
void main (void) {    
	
	ppu_off(); // screen off
	moveframes =0;

	pal_bg(gaspump_palette); //	load the palette
	pal_spr(gaspump_sprite_palette); //	load the palette

	pal_col(0,0x0D);
	
	bank_spr(1); // sprites use the 2nd tileset
	set_scroll_y(0xff); // shift the bg down 1 pixel
	
	vram_adr(NAMETABLE_A);
	// this sets a start position on the BG, top left of screen
	// vram_adr() and vram_unrle() need to be done with the screen OFF
	
	ppu_wait_nmi(); // wait
	
//	music_play(0); // silence
	
	set_vram_buffer(); // points ppu update to vram_buffer, do this at least once
	
	ppu_on_all(); // turn on screen
	
	
	banked_call(BANK_1,bank_1_init_mode_title);
	 
	while (1){

		if(game_mode == MODE_TITLE){
			ppu_wait_nmi();

			


			if(option == 0){
				one_vram_buffer(0x3d, NTADR_A(6,17));
				one_vram_buffer(0x3f, NTADR_A(6,19));
			} else {
				one_vram_buffer(0x3f, NTADR_A(6,17));
				one_vram_buffer(0x3d, NTADR_A(6,19));
			}

			read_input();
			
			if (trigger_clicked) //if((pad2_zapper)&&(zapper_ready)){
			{

				// bg off, project white boxes
				oam_clear();
				// white_background();
				pal_col(0, 0x30); //set color to white
				// ppu_mask(0x16); // BG off, won't happen till NEXT frame
				
				ppu_wait_nmi(); // wait till the top of the next frame
				// this frame will display no BG and a white box
				
				oam_clear(); // clear the NEXT frame
				
				// draw_title_background();
				// ppu_mask(0x1e); // bg on, won't happen till NEXT frame
				read_input();
				// hit_detected = zap_read(1);

				// hit_detected = zap_read(1); // look for light in zapper, port 2
				pal_col(0, 0x0f); //back to transparent



				if(hit_detected){
					if(option == 0){
						//debug, just go to game
						wait_a_little();
						banked_call(BANK_0, bank_0_init_mode_intro_text);
					} else {
						multi_vram_buffer_horz("No Free Pump Mode yet", 21, NTADR_A(6, 21));
					}
				}
				else{
					if(option == 0){
						option = 1;
					} else {
						option = 0;
					}
					multi_vram_buffer_horz("                     ", 21, NTADR_A(6, 21));
				}
				
			}
		}
		if(game_mode == MODE_INTRO_TEXT){
			ppu_wait_nmi();
			banked_call(BANK_0, bank_0_mode_intro_text);
			read_input();
			if (trigger_clicked) //allow cutscene to be skipped
			{
				//debug, just go to game
				wait_a_little();
				set_scroll_y(0);
				banked_call(BANK_0, bank_0_init_mode_intro_cutscene);
			}
		}
		if(game_mode == MODE_INTRO_CUTSCENE){
			ppu_wait_nmi();
			banked_call(BANK_0, bank_0_mode_intro_cutscene);

			read_input();

			if (trigger_clicked) //allow cutscene to be skipped
			{
				//debug, just go to game
				wait_a_little();
				set_scroll_y(0);
				banked_call(BANK_1, bank_1_init_mode_instructions);
			}
			
		}

		if(game_mode == MODE_INTRO_INSTRUCTION){
			banked_call(BANK_1, bank_1_instructions_loop);
		}

		if(game_mode == MODE_TALKING_TIME){
			ppu_wait_nmi();
			++moveframes;

			if(moveframes > 60){
				moveframes = 0;
			}
			// //big al loop:
			oam_clear(); // clear all sprites

			// draw_talking_time_sprites();

			oam_meta_spr(0xa8, 0xb8, BigAlsShirt);
			oam_meta_spr(0xb8, 0x98, BigAlsEyes);

			if(moveframes >= 0 && moveframes < 30){
				oam_meta_spr(0xb0, 0xaf, BigAlTalkClosedMouth);
			}
			if(moveframes >= 30 && moveframes < 61){
				oam_meta_spr(0xb0, 0xaf, BigAlTalkMidMouth);
			}

			read_input();

			if (trigger_clicked)
			{

				//wait 10 frames before starting the next section
				for(index=0; index < 10; ++index){
					ppu_wait_nmi();
				}
				//based off of `game_level` we choose what to do next
				switch(game_level){
					case START_OF_GAME:
						init_mode_game();
						break;
					case LEVEL_ONE_COMPLETE:
						banked_call(BANK_1, bank_1_init_mode_instructions);
						break;
					default:
					break;
				}
			}
		}

		if(game_mode == MODE_GAME){

			// infinite loop
			ppu_wait_nmi(); // wait till beginning of the frame

			draw_level_one_sprites();
			draw_gas();
			draw_cost();
			
			// zapper_ready = pad2_zapper^1; // XOR last frame, make sure it is not held down still
			
			// is trigger pulled?
			read_input(); //sets input_active
			
			// multi_vram_buffer_horz("Gas Pumped:", 11, NTADR_A(10,7)); 
			// multi_vram_buffer_horz("Cost:", 11, NTADR_A(10,9)); 


			if(trigger_pulled){
				started_pumping = 1; //actually only need to set this once

				gas_speed += GAS_STEP;
				while(gas_speed > 256){
					++gas1;
					gas_speed -= 256;
				}
				adjust_gas();
				
			
				cost_speed += COST_STEP;
				while(cost_speed > 256){
					++cost1;
					cost_speed -= 256;
				}
				adjust_cost();	

				
			} else {
				if(started_pumping == 1){
					//trigger ending
					wait_a_little();
					init_level_one_end();
				}
			}
		}
	}
}  

void draw_evaluation_time_background(void){
	set_chr_bank_0(TALKING_TIME_CHR);
	set_chr_bank_1(TALKING_TIME_CHR);
	// clear_background();
	pal_bg(talking_time_palette);

	vram_adr(NAMETABLE_A);  
	vram_unrle(evaluation_rle);
}

void draw_talking_time_background(void) {
	set_chr_bank_0(TALKING_TIME_CHR);
	set_chr_bank_1(TALKING_TIME_CHR);
	// clear_background();
	pal_bg(talking_time_palette);

	vram_adr(NAMETABLE_A);  
	vram_unrle(talkingtime_rle);
	// ppu_off();	 // screen off
	// oam_clear(); // clear all sprites
	// ppu_mask(0x16); // for blacking out ppu
	//time to draw tiles
	

	// tempint = 0x2084;
	
	//place the non-moving parts of the head down:
	// temp1 = 0x80;
	// for(index2 = 0; index2 < 8; ++index2){
	// 	vram_adr(tempint);
	// 	for(index = 0; index < 8; ++index){
	// 		vram_put(temp1 + index);
	// 	}
	// 	flush_vram_update2();
	// 	temp1 += 16;
	// 	tempint += 32;
	// }
	// ppu_on_all();
}

void draw_talking_time_sprites(void){
	  
		oam_meta_spr(0xb0, 0xc0, BigAlsShirt);
}

void clear_background(void) {
	//draw all 0x00 into the bg
	vram_adr(NAMETABLE_A);
	for(tempint = 0; tempint < 960; ++tempint){
		vram_put(0x00);
		flush_vram_update2();
	}
}

void white_background(void) {
	//draw all 0x00 into the bg
	vram_adr(NAMETABLE_A);
	for(tempint = 0; tempint < 960; ++tempint){
		vram_put(0x00);
		flush_vram_update2();
	}
}

void draw_talking_time(void) {

	temp1 = 0x2044; //vram addr for start of box

	for(temp2 = 0; temp2 < 6; ++temp2){
		ppu_wait_nmi();

		vram_adr(temp1); //Nametable A starting block
		for(index = 0; index < 9; ++index){
			
			vram_put(0x00);
		}
		flush_vram_update2();

		temp1 += 16;
	}
	flush_vram_update2();
	
	talking_time = 1;
	
}

void read_input(void) {
	hit_detected = 0;
	//just a debug to include the a button for now.
	//right now this is using 1 as the zapper
	pad1 = pad_poll(0);				 // read the first controller
	pad1_new = get_pad_new(0); // newly pressed button. do pad_poll first

	zapper_ready = pad1_zapper^1; // XOR last frame, make sure not held down still
	pad1_zapper = zap_shoot(1); // controller slot 2

	trigger_pulled =  (pad1 & PAD_B) || (pad1 & PAD_A) || zap_shoot(1); // controller slot 1 zapper
	trigger_clicked = (pad1_new & PAD_A) || (pad1_new & PAD_B) || ((pad1_zapper)&&(zapper_ready)) ; //needs to check last frame for blank
	
	if((pad1_zapper)&&(zapper_ready)){
		hit_detected = zap_read(1);
	}
	if(debug_mode && hit_detected == 0){
		hit_detected = (pad1 & PAD_A);
	}
}

void adjust_gas(void){
	if(gas1 >= 10){
		gas1_changed = 1;
		gas1 = 0;
		++gas2;
		if(gas2 >= 10){
			gas2_changed = 1;
			gas2 = 0;
			++gas3;
			if(gas3 >= 10){
				gas3_changed = 1;
				gas3 = 0;
				++gas4;
			}
			if(gas4 >= 10) {
				gas4_changed = 1;
				gas4 = 0;
				++gas5;
			}
		}
	}
	
	if(gas5 >= 10){ // maximum 9999
		gas5 = 9;
		gas4 = 9;
		gas3 = 9;
		gas2 = 9;
		gas1 = 9;
	}
}
	

void adjust_cost(void){
	if(cost1 >= 10){
		cost1_changed = 1;
		cost1 = 0;
		++cost2;
		if(cost2 >= 10){
			cost2_changed = 1;
			cost2 = 0;
			++cost3;
			if(cost3 >= 10){
				cost3_changed = 1;
				cost3 = 0;
				++cost4;
			}
			if(cost4 >= 10) {
				cost4_changed = 1;
				cost4 = 0;
				++cost5;
			}
		}
	}
	
	if(cost5 >= 10){ // maximum 9999
		cost5 = 9;
		cost4 = 9;
		cost3 = 9;
		cost2 = 9;
		cost1 = 9;
	}
	
}

void draw_level_one_sprites(){
	// this is the bird/cars that go across the screen
	oam_clear();
	bird_x += 1;
	bird_y = 0x20;
	oam_meta_spr(bird_x,bird_y,Bird);
}

void draw_cost(void){

	// sprite_cost = cost5;
	// find_sprite();
	// oam_meta_spr(0x40, 0x60, pointer);

	if(cost3_changed){
		num_holder = cost4;
		x=21;
		y=14;
		draw_number_as_bg_tile();
		cost3_changed = 0;
	}

	if(cost2_changed){
		num_holder = cost3;
		x=23;
		y=14;
		draw_number_as_bg_tile();
		cost2_changed = 0;
	}

	if(cost1_changed){
		num_holder = cost2;
		x=25;
		y=14;
		draw_number_as_bg_tile();
		cost1_changed = 0;
	}


	num_holder = cost1;
	x=27;
	y=14;
	draw_number_as_bg_tile();
		

	// sprite_cost = cost1;
	// find_sprite();
	// oam_meta_spr(0x80, 0x60, pointer);
}

void draw_number_as_bg_tile(void){
	//expects x and y to be set (top left of number)
	//expects num_holder to be the number to use
	//updated the bg tile for the number.

	switch(num_holder) {
		case 1: 
			one_vram_buffer(0xc0, NTADR_A(x,y));
			one_vram_buffer(0xc1, NTADR_A(x+1,y));
			one_vram_buffer(0xd0, NTADR_A(x, y+1));
			one_vram_buffer(0xd1, NTADR_A(x+1, y+1));
			one_vram_buffer(0xe0, NTADR_A(x,y+2));
			one_vram_buffer(0xe1, NTADR_A(x+1,y+2));
			one_vram_buffer(0xf0, NTADR_A(x,y+3));
			one_vram_buffer(0xf1, NTADR_A(x+1,y+3));
			break;
		case 2: 
			one_vram_buffer(0xc2, NTADR_A(x,y));
			one_vram_buffer(0xc3, NTADR_A(x+1,y));
			one_vram_buffer(0xd2, NTADR_A(x, y+1));
			one_vram_buffer(0xd3, NTADR_A(x+1, y+1));
			one_vram_buffer(0xe2, NTADR_A(x,y+2));
			one_vram_buffer(0xe3, NTADR_A(x+1,y+2));
			one_vram_buffer(0xf2, NTADR_A(x,y+3));
			one_vram_buffer(0xf3, NTADR_A(x+1,y+3));
			break;
			case 3: 
			one_vram_buffer(0xc4, NTADR_A(x,y));
			one_vram_buffer(0xc5, NTADR_A(x+1,y));
			one_vram_buffer(0xd4, NTADR_A(x, y+1));
			one_vram_buffer(0xd5, NTADR_A(x+1, y+1));
			one_vram_buffer(0xe4, NTADR_A(x,y+2));
			one_vram_buffer(0xe5, NTADR_A(x+1,y+2));
			one_vram_buffer(0xf4, NTADR_A(x,y+3));
			one_vram_buffer(0xf5, NTADR_A(x+1,y+3));
			break;
			case 4: 
			one_vram_buffer(0xc6, NTADR_A(x,y));
			one_vram_buffer(0xc7, NTADR_A(x+1,y));
			one_vram_buffer(0xd6, NTADR_A(x, y+1));
			one_vram_buffer(0xd7, NTADR_A(x+1, y+1));
			one_vram_buffer(0xe6, NTADR_A(x,y+2));
			one_vram_buffer(0xe7, NTADR_A(x+1,y+2));
			one_vram_buffer(0xf6, NTADR_A(x,y+3));
			one_vram_buffer(0xf7, NTADR_A(x+1,y+3));
			break;
			case 5: 
			one_vram_buffer(0xc8, NTADR_A(x,y));
			one_vram_buffer(0xc9, NTADR_A(x+1,y));
			one_vram_buffer(0xd8, NTADR_A(x, y+1));
			one_vram_buffer(0xd9, NTADR_A(x+1, y+1));
			one_vram_buffer(0xe8, NTADR_A(x,y+2));
			one_vram_buffer(0xe9, NTADR_A(x+1,y+2));
			one_vram_buffer(0xf8, NTADR_A(x,y+3));
			one_vram_buffer(0xf9, NTADR_A(x+1,y+3));
			break;
			case 6: 
			one_vram_buffer(0xca, NTADR_A(x,y));
			one_vram_buffer(0xcb, NTADR_A(x+1,y));
			one_vram_buffer(0xda, NTADR_A(x, y+1));
			one_vram_buffer(0xdb, NTADR_A(x+1, y+1));
			one_vram_buffer(0xea, NTADR_A(x,y+2));
			one_vram_buffer(0xeb, NTADR_A(x+1,y+2));
			one_vram_buffer(0xfa, NTADR_A(x,y+3));
			one_vram_buffer(0xfb, NTADR_A(x+1,y+3));
			break;
			case 7: 
			one_vram_buffer(0xcc, NTADR_A(x,y));
			one_vram_buffer(0xcd, NTADR_A(x+1,y));
			one_vram_buffer(0xdc, NTADR_A(x, y+1));
			one_vram_buffer(0xdd, NTADR_A(x+1, y+1));
			one_vram_buffer(0xec, NTADR_A(x,y+2));
			one_vram_buffer(0xed, NTADR_A(x+1,y+2));
			one_vram_buffer(0xfc, NTADR_A(x,y+3));
			one_vram_buffer(0xfd, NTADR_A(x+1,y+3));
			break;
			case 8: 
			one_vram_buffer(0xce, NTADR_A(x,y));
			one_vram_buffer(0xcf, NTADR_A(x+1,y));
			one_vram_buffer(0xde, NTADR_A(x, y+1));
			one_vram_buffer(0xdf, NTADR_A(x+1, y+1));
			one_vram_buffer(0xee, NTADR_A(x,y+2));
			one_vram_buffer(0xef, NTADR_A(x+1,y+2));
			one_vram_buffer(0xfe, NTADR_A(x,y+3));
			one_vram_buffer(0xff, NTADR_A(x+1,y+3));
			break;
			case 9: 
			one_vram_buffer(0x5e, NTADR_A(x,y));
			one_vram_buffer(0x5f, NTADR_A(x+1,y));
			one_vram_buffer(0x6e, NTADR_A(x, y+1));
			one_vram_buffer(0x6f, NTADR_A(x+1, y+1));
			one_vram_buffer(0x7e, NTADR_A(x,y+2));
			one_vram_buffer(0x7f, NTADR_A(x+1,y+2));
			one_vram_buffer(0x8e, NTADR_A(x,y+3));
			one_vram_buffer(0x8f, NTADR_A(x+1,y+3));
			break;
			case 0: 
			one_vram_buffer(0x1e, NTADR_A(x,y));
			one_vram_buffer(0x1f, NTADR_A(x+1,y));
			one_vram_buffer(0x2e, NTADR_A(x, y+1));
			one_vram_buffer(0x2f, NTADR_A(x+1, y+1));
			one_vram_buffer(0x3e, NTADR_A(x,y+2));
			one_vram_buffer(0x3f, NTADR_A(x+1,y+2));
			one_vram_buffer(0x4e, NTADR_A(x,y+3));
			one_vram_buffer(0x4f, NTADR_A(x+1,y+3));
			break;
			default: break;
	}
	
}

void draw_gas(void){

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


	if(gas3_changed){
		num_holder = gas4;
		x=21;
		y=20;
		draw_number_as_bg_tile();
		gas3_changed=0;
	}

	if(gas2_changed){
		num_holder = gas3;
		x=23;
		y=20;
		draw_number_as_bg_tile();
		gas2_changed = 0;
	}

	if(gas1_changed){
		num_holder = gas2;
		x=25;
		y=20;
		draw_number_as_bg_tile();
		gas1_changed = 0;
	}

	oam_meta_spr(0xc5,0x89,Decimal_1);//decimal for dollars
	oam_meta_spr(0xc5,0xb9,Decimal_1);//decimal for gas
	
	num_holder = gas1;
	x=27;
	y=20;
	draw_number_as_bg_tile();

}

void find_sprite(void){
	switch(sprite_cost) {
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
			default: break;
	}
}

void init_level_one_end(void){ 
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites
	clear_background();
	gas_goal_hundreds = 0;
	

	draw_evaluation_time_background();  
	gas_pumped = 0;
	for(index = 0; index < gas3; ++index){
		gas_pumped += 100;
	}
	for(index = 0; index < gas2; ++index){
		gas_pumped += 10;
	}
	gas_pumped += gas1;

	for(index = 0; index < gas_goal; ++index){
		gas_goal_hundreds += 100;
	}

	//pump scores:
	//goal
	one_vram_buffer(gas_goal+48, NTADR_A(21,2));
	multi_vram_buffer_horz(".00 G", 5, NTADR_A(22,2)); 
	flush_vram_update2();
	//speed
	multi_vram_buffer_horz(">>>", 3, NTADR_A(21,6)); 
	flush_vram_update2();
	//accuracy
	one_vram_buffer(gas3+48, NTADR_A(21,8));
	one_vram_buffer('.', NTADR_A(22,8));
	one_vram_buffer(gas2+48, NTADR_A(23,8));
	one_vram_buffer(gas1+48, NTADR_A(24,8));
	one_vram_buffer('G', NTADR_A(26,8));
	flush_vram_update2();
	//style 
	multi_vram_buffer_horz("NONE", 4, NTADR_A(21,10)); 
	flush_vram_update2();
	
	if(gas_pumped > gas_goal_hundreds + 5){
		multi_vram_buffer_horz("Bit too much, bub.", 18, NTADR_A(2,18)); 
		flush_vram_update2();
	} else if (gas_pumped >= gas_goal_hundreds-5){
		++levels_complete;
		multi_vram_buffer_horz("!!! WOW !!!", 11, NTADR_A(2,18)); 
		multi_vram_buffer_horz("You've got it kid", 17, NTADR_A(2,20)); 
		flush_vram_update2();
	} else if (gas_pumped >= gas_goal_hundreds-100){
		multi_vram_buffer_horz("Hmmmmm....", 10, NTADR_A(2,18)); 
		multi_vram_buffer_horz("Pump harder.", 12, NTADR_A(2,20)); 
		flush_vram_update2();
	} else {
		multi_vram_buffer_horz("You just don't", 14, NTADR_A(2,18)); 
		multi_vram_buffer_horz("have what it takes", 18, NTADR_A(2,20)); 
		flush_vram_update2();
	}
	
	
	
	ppu_on_all(); // turn on screen
	game_mode=MODE_TALKING_TIME;
	game_level=LEVEL_ONE_COMPLETE;
}	

void init_mode_game(void){ 
	//reset changed values so they redraw
	
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites

	pal_col(0,0x21);
	pal_bg(gaspump_palette);

	bird_x = 0;

	set_chr_bank_0(LEVEL1_BG_CHR);
	set_chr_bank_1(LEVEL1_FG_CHR);
	//draw_bg: draw background code
	

	scroll(0,0); //reset scrolling

	index = 0;
	vram_adr(NAMETABLE_A); //Nametable A;

	vram_unrle(LEVEL_1_PUMP);
	// for(largeindex = 0; largeindex < 1024; ++largeindex){
	// 	vram_put(level1[largeindex]); //todo fix this
	// 	++index;
	// 	if(index > 40) { //don't put too much in the vram_buffer
	// 		flush_vram_update2();
	// 		index = 0;
	// 	}
	// }
	ppu_on_all(); // turn on screen
	pal_fade_to(0,4);
	wait_a_little();
	game_mode=MODE_GAME;
	started_pumping=0;
}	

void reset_game_variables(){
	gas1 = gas2 = gas3 = gas4 = gas5 = 0;
	cost1 = cost2 = cost3 = cost4 = cost5 = 0;
}

void wait_a_little(){
	for(index=0; index < 25; ++index){
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
			one_vram_buffer(pointer[text_rendered], NTADR_A(3 + text_col, 6 + text_row));
			delay(1);
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



