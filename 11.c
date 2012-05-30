#include <8051.h>

char disp[12] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90, 0x89/* *steluta */, 0xA3 /*diez*/};

void main(){
	P0 = 0x7F;
	P0_7 = 1;
	P3 = 0x0;
	
	P0_0 = 0;
	P0_1 = 1;
	P0_2 = 1;
	P0_3 = 1;

	while(1){
		if(P0_0 == 0){
			if(P0_6 == 0){
				P1 = disp[10];
			}
			if(P0_5 == 0){
				P1 = disp[0];
			}

			if(P0_4 == 0){
				P1 = disp[11];
			}
			P0_0 = 1;
			P0_1 = 0;
		}
		else
		
		if(P0_1 == 0){
			if(P0_6 == 0){
				P1 = disp[7];
			}
			if(P0_5 == 0){
				P1 = disp[8];
			}

			if(P0_4 == 0){
				P1 = disp[9];
			}
			P0_1 = 1;
			P0_2 = 0;
		}		
		else
		
		if(P0_2 == 0){
			if(P0_6 == 0){
				P1 = disp[4];
			}
			if(P0_5 == 0){
				P1 = disp[5];
			}

			if(P0_4 == 0){
				P1 = disp[6];
			}
			P0_2 = 1;
			P0_3 = 0;
		}
		else
		
		if(P0_3 == 0){
			if(P0_6 == 0){
				P1 = disp[1];
			}
			if(P0_5 == 0){
				P1 = disp[2];
			}
			if(P0_4 == 0){
				P1 = disp[3];
			}
			P0_3 = 1;
			P0_0 = 0;
		}
	}
}
