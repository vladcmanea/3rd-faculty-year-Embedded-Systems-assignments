#include <8051.h>
#define DELAY 512

volatile unsigned char n = 2;

void draw(unsigned char n, unsigned char k)
{
    P3_3 = k & 1;
    P3_4 = k >> 1;

    switch(n)
    {
                case 0:
                    P1 = ~0x3F;
                break;
               
                case 1:
                    P1 = ~0x6;
                break;
               
                case 2:
                    P1 = ~0x5B;
                break;
               
                case 3:
                    P1 = ~0x4F;
                break;
               
                case 4:
                    P1 = ~0x66;
                break;
               
                case 5:
                    P1 = ~0x6D;
                break;
               
                case 6:
                    P1 = ~0x7D;
                break;
               
                case 7:
                    P1 = ~0x7;
                break;
               
                case 8:
                    P1 = ~0x7F;
                break;
               
                case 9:
                    P1 = ~0x6F;
                break;
                
                case 10:
                    P1 = ~64;
                break;

                case 11:
                    P1 = ~128;
                break;
                
                case 12:
                    P1 = ~0;

                break;
            }
}

void reload(int k)
{
	TH0 = k >> 8;
	TL0 = k & 255;
}

void timer0(void) interrupt 1
{
P0 = 254;
        if (P0_6 == 0)
        {
            draw(10, 0);
        }
        if (P0_5 == 0)
        {
            draw(0, 0);        
        }
        if (P0_4 == 0)
        {
            draw(11, 0);        
        }
        
        P0 = 253;
        if (P0_6 == 0)
        {
            draw(7, 0);        
        }
        if (P0_5 == 0)
        {
            draw(8, 0);        
        }
        if (P0_4 == 0)
        {

            draw(9, 0);        
        }
        
        P0 = 251;
        if (P0_6 == 0)
        {
            draw(4, 0);        
        }
        if (P0_5 == 0)
        {
            draw(5, 0);        
        }
        if (P0_4 == 0)
        {

            draw(6, 0);        
        }
        
        P0 = 247;
        if (P0_6 == 0)
        {
            draw(1, 0);    
        }
        if (P0_5 == 0)
        {
            draw(2, 0);        
        }
        if (P0_4 == 0)
        {
            draw(3, 0);        
        }

	reload(DELAY);
}

void main(void)
{
    P0_7 = 0;
    P3_3=1;
    P3_4=1;

	TR0 = 0;
	reload(DELAY);
	TMOD = 1;
	EA = 1;
	ET0 = 1;
	TR0 = 1;
}


