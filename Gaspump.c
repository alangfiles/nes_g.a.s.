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



const unsigned char pal1[]={
0x0f, 0x00, 0x10, 0x30,
0,0,0,0,
0,0,0,0,
0,0,0,0
}; 

const unsigned char pal2[]={
0x0f, 0x12, 0x22, 0x30,
0x0f, 0x15, 0x25, 0x30,
0x0f, 0x17, 0x27, 0x30,
0x0f, 0x19, 0x29, 0x30,
}; 







	
void main (void) {
	
	ppu_off(); // screen off

	pal_bg(pal1); //	load the palette
	pal_spr(pal2); //	load the palette
	
	bank_spr(1); // sprites use the 2nd tileset
	
	vram_adr(NAMETABLE_A);
	// this sets a start position on the BG, top left of screen
	// vram_adr() and vram_unrle() need to be done with the screen OFF
	
	ppu_wait_nmi(); // wait
	
//	music_play(0); // silence
	
	set_vram_buffer(); // points ppu update to vram_buffer, do this at least once
	
	ppu_on_all(); // turn on screen
	
	
	while (1){
		// infinite loop
		ppu_wait_nmi(); // wait till beginning of the frame
		
		oam_clear();
		
		// zapper_ready = pad2_zapper^1; // XOR last frame, make sure it is not held down still
		
		// is trigger pulled?
		debug_zap(); //sets input_active
		
		multi_vram_buffer_horz("Gas Pumped:", 11, NTADR_A(10,7)); 
		multi_vram_buffer_horz("Cost:", 11, NTADR_A(10,9)); 

		if(input_active){

			gas_speed += GAS_STEP;
			while(gas_speed > 256){
				++gas1;
				gas_speed -= 256;
			}
			adjust_gas();
			draw_gas();
		
			cost_speed += COST_STEP;
			while(cost_speed > 256){
				++cost1;
				cost_speed -= 256;
			}
			adjust_cost();
			draw_cost();
			
			multi_vram_buffer_horz("Pumping!!!", 10, NTADR_A(10,11)); 
			
			
		} else {
			multi_vram_buffer_horz("Waiting...", 10, NTADR_A(10,11)); 
		}
		
		
	}
}

void debug_zap(void) {
	//just a debug to include the a button for now.
	pad1 = pad_poll(0);				 // read the first controller
	// pad1_new = get_pad_new(0); // newly pressed button. do pad_poll first

	input_active = (pad1 & PAD_A) || zap_shoot(0); // controller slot 1 zapper
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
	// copy score to BG
	temp1 = cost5 + 0x30;
	one_vram_buffer(temp1, NTADR_A(22,9));
	temp1 = cost4 + 0x30;
	one_vram_buffer(temp1, NTADR_A(23,9));
	temp1 = cost3 + 0x30;
	one_vram_buffer(temp1, NTADR_A(24,9));
	one_vram_buffer('.', NTADR_A(25,9));
	temp1 = cost2 + 0x30;
	one_vram_buffer(temp1, NTADR_A(26,9));
	temp1 = cost1 + 0x30;
	one_vram_buffer(temp1, NTADR_A(27,9));
}

void draw_gas(void){
	// copy score to BG
	temp1 = gas5 + 0x30;
	one_vram_buffer(temp1, NTADR_A(22,7));
	temp1 = gas4 + 0x30;
	one_vram_buffer(temp1, NTADR_A(23,7));
	temp1 = gas3 + 0x30;
	one_vram_buffer('.', NTADR_A(24,7));

	one_vram_buffer(temp1, NTADR_A(25,7));
	temp1 = gas2 + 0x30;
	one_vram_buffer(temp1, NTADR_A(26,7));
	temp1 = gas1 + 0x30;
	one_vram_buffer(temp1, NTADR_A(27,7));
}
