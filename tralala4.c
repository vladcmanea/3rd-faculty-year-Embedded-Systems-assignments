#include <8051.h>

unsigned char pi, pf;

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


void main(void)
{
	P3_6 = 0;
	P3_6 = 1;
	
	while (P3_2 == 1);
	
	P3_7 = 0;
	
	pi = P2 / 51;
	pf = 0;
	pf = (P2 % 51) / 5;

	while (1) 
	{
		draw(pi, 2);
		draw(11, 1);
		draw(pf, 0);
	}
}
