/*	example code for cc65, for NES
 *  testing the zapper gun on controller slot 2
 *	using neslib
 *	Doug Fraker 2018
 */	
 

#include "LIB/neslib.h"
#include "LIB/nesdoug.h"

#include "LIB/zaplib.h"
#include "Gaspump.h"

#include "Sprites.h"
#include "Metatiles.h"
#include "level1.h"



const unsigned char pal1[16]={ 
	0x0f,0x05,0x3d,0x15,
	0x0f,0x38,0x21,0x15,
	0x0f,0x3d,0x20,0x11,
	0x0f,0x19,0x2a,0x15 };

const unsigned char pal2[]={
	0x0f,0x3d,0x20,0x11,
	
	
	
	0x0f,0x19,0x2a,0x15,
	0x0f,0x05,0x3d,0x15,
	0x0f,0x38,0x21,0x15,

}; 

	
void main (void) {
	
	ppu_off(); // screen off

	pal_bg(pal1); //	load the palette
	pal_spr(pal2); //	load the palette
	
	bank_spr(1); // sprites use the 2nd tileset
	set_scroll_y(0xff); // shift the bg down 1 pixel
	
	vram_adr(NAMETABLE_A);
	// this sets a start position on the BG, top left of screen
	// vram_adr() and vram_unrle() need to be done with the screen OFF
	
	ppu_wait_nmi(); // wait
	
//	music_play(0); // silence
	
	set_vram_buffer(); // points ppu update to vram_buffer, do this at least once
	
	ppu_on_all(); // turn on screen
	
	
	
	game_mode = MODE_TITLE;
	init_mode_title();
	 
	while (1){

		if(game_mode == MODE_TITLE){
			ppu_wait_nmi();

			read_input();

			if (trigger_clicked)
			{
				init_mode_intro();
			}
		}
		if(game_mode == MODE_INTRO){
			ppu_wait_nmi();

			read_input();

			if (trigger_clicked)
			{
				for(index=0; index < 10; ++index){
					ppu_wait_nmi();
				}
				init_mode_game();
			}
		}

		if(game_mode == MODE_GAME){

			
			// infinite loop
			ppu_wait_nmi(); // wait till beginning of the frame
			
			oam_clear();
			
			// zapper_ready = pad2_zapper^1; // XOR last frame, make sure it is not held down still
			
			// is trigger pulled?
			read_input(); //sets input_active
			
			// multi_vram_buffer_horz("Gas Pumped:", 11, NTADR_A(10,7)); 
			// multi_vram_buffer_horz("Cost:", 11, NTADR_A(10,9)); 

			if(trigger_pulled){

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
				
				// multi_vram_buffer_horz("Pumping!!!", 10, NTADR_A(10,11)); 
				
				
			} else {
				// multi_vram_buffer_horz("Waiting...", 10, NTADR_A(10,11)); 
			}

			draw_gas();
			draw_cost();
		
		}
	}
}

void read_input(void) {
	//just a debug to include the a button for now.
	pad1 = pad_poll(0);				 // read the first controller
	pad1_new = get_pad_new(0); // newly pressed button. do pad_poll first

	trigger_pulled =  (pad1 & PAD_A) || zap_shoot(0); // controller slot 1 zapper
	trigger_clicked = (pad1_new & PAD_A);
}

void adjust_gas(void){
	if(gas1 >= 10){
		gas1 = 0;
		++gas2;
		if(gas2 >= 10){
			gas2 = 0;
			++gas3;
			if(gas3 >= 10){
				gas3 = 0;
				++gas4;
			}
			if(gas4 >= 10) {
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
		cost1 = 0;
		++cost2;
		if(cost2 >= 10){
			cost2 = 0;
			++cost3;
			if(cost3 >= 10){
				cost3 = 0;
				++cost4;
			}
			if(cost4 >= 10) {
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

void draw_cost(void){

	// sprite_cost = cost5;
	// find_sprite();
	// oam_meta_spr(0x40, 0x60, pointer);

	sprite_cost = cost4;
	find_sprite();
	oam_meta_spr(0x68, 0xa0, pointer);

	sprite_cost = cost3;
	find_sprite();
	oam_meta_spr(0x78, 0xa0, pointer);

	sprite_cost = cost2;
	find_sprite();
	oam_meta_spr(0x88, 0xa0, pointer);

	
	num_holder = cost1;
	x=19;
	y=20;
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

	sprite_cost = gas4;
	find_sprite();
	oam_meta_spr(0x68, 0x70, pointer);

	sprite_cost = gas3;
	find_sprite();
	oam_meta_spr(0x78, 0x70, pointer);

	sprite_cost = gas2;
	find_sprite();
	oam_meta_spr(0x88, 0x70, pointer);

	sprite_cost = gas1;
	find_sprite();
	oam_meta_spr(0x98, 0x70, pointer);
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



void init_mode_title(void){ 
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites

	multi_vram_buffer_horz("Gas Station Simulator", 21, NTADR_A(4,4)); 
	flush_vram_update2();

	multi_vram_buffer_horz("Pull trigger to start", 21, NTADR_A(4,17)); 
	flush_vram_update2();
	
	ppu_on_all(); // turn on screen
	game_mode=MODE_TITLE;
}	


void init_mode_intro(void){ 
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites

	multi_vram_buffer_horz("Pull the trigger halfway", 24, NTADR_A(4,4)); 
	flush_vram_update2();

	multi_vram_buffer_horz("But not til it clicks", 21, NTADR_A(4,17)); 
	flush_vram_update2();
	
	ppu_on_all(); // turn on screen
	game_mode=MODE_INTRO;
}	

void init_mode_game(void){ 
	//draw_bg: draw background code
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites

	index = 0;
	vram_adr(0x2000); //Nametable A;
	for(largeindex = 0; largeindex < 1024; ++largeindex){
		vram_put(level1[largeindex]);
		++index;
		if(index > 40) { //don't put too much in the vram_buffer
			flush_vram_update2();
			index = 0;
		}
	}
	ppu_on_all(); // turn on screen
	game_mode=MODE_GAME;
}	




