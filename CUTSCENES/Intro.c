/*	example code for cc65, for NES
 *  testing the zapper gun on controller slot 2
 *	using neslib
 *	Doug Fraker 2018
 */	
 

#include "../LIB/neslib.h"
#include "../LIB/nesdoug.h"

#include "../LIB/zaplib.h"
#include "../MMC1/bank_helpers.h"
#include "../Gaspump.h"

 
#include "../LEVELS/intro_topdata.h"
#include "../LEVELS/intro_middledata.h"
#include "../LEVELS/intro_bottomdata.h"


const unsigned char abackground_pal[16]={ 
	0x2c,0x05,0x3d,0x15,
	0x2c,0x05,0x37,0x15,
	0x2c,0x0f,0x20,0x11,
	0x2c,0x19,0x2a,0x0f
	};

// const unsigned char pal2[]={ 
// 	0x0f,0x20,0x16,0x36,
// 	0x0f,0x05,0x16,0x36,
// 	0x0f,0x13,0x0f,0x36,
// 	0x0f,0x09,0x19,0x29 
// 	};

// //todo: ask brian for this palete
// const unsigned char talking_time_palete[]={
// 	0x0f,0x20,0x16,0x36,
// 	0x0f,0x05,0x16,0x36,
// 	0x0f,0x13,0x0f,0x36,
// 	0x0f,0x09,0x19,0x29 
// };

// {
// 	0x0f,0x07,0x27,0x36,
// 	0x0f,0x30,0x27,0x36,
// 	0x0f,0x05,0x3d,0x15,
// 	0x0f,0x38,0x21,0x15,

// }; 


void init_mode_intro_cutscene(void){
	scrolled_past_once = 0;
	stop_scrolling = 0;
	set_mirroring(MIRROR_HORIZONTAL);
	//reset changed values so they redraw
	ppu_off();	 // screen off
	oam_clear(); // clear all sprites

	pal_col(0,0x21);
	pal_bg(abackground_pal);

	// bird_x = 0;

	set_chr_bank_0(INTRO_CHR);
	set_chr_bank_1(TALKING_TIME_CHR);
	//draw_bg: draw background code
	

	vram_adr(NAMETABLE_A);
	// this sets a start position on the BG, top left of screen A
	vram_unrle(INTRO_TOP);

	vram_adr(NAMETABLE_C);
	// this sets a start position on the BG, top left of screen A
	vram_unrle(INTRO_MIDDLE);
	
	// vram_adr(NAMETABLE_A); //Nametable A;
	// for(largeindex = 0; largeindex < 1024; ++largeindex){
	// 	vram_put(intro_top[largeindex]);
	// 	++index;
	// 	if(index > 40) { //don't put too much in the vram_buffer
	// 		flush_vram_update2();
	// 		index = 0;
	// 	}
	// }

	// vram_adr(NAMETABLE_C); //Nametable A;
	// for(largeindex = 0; largeindex < 1024; ++largeindex){
	// 	vram_put(intro_middle[largeindex]);
	// 	++index;
	// 	if(index > 40) { //don't put too much in the vram_buffer
	// 		flush_vram_update2();
	// 		index = 0;
	// 	}
	// }
	ppu_on_all(); // turn on screen
	game_mode=MODE_INTRO_CUTSCENE;
}	

void mode_intro_cutscene(void){
	++moveframes;

	if(stop_scrolling == 0 && moveframes > 0){

		scroll_y += 1;

		if(scrolled_past_once == 1 && scroll_y > 0x1df){
			stop_scrolling = 1;
			moveframes=0;
		}
		
		// scroll_y = add_scroll_y(1, scroll_y);

		if(scroll_y == 0x0ff){
			ppu_off();
			vram_adr(NAMETABLE_A);
			vram_unrle(INTRO_BOTTOM);
			ppu_on_all();
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
		init_mode_intro_instructions();
	}
}