#include <8051.h>

volatile unsigned char unu = 1, doi = 128;

void reload(int k)
{
TH0 = k >> 8;
TL0 = k & 255;
}

void timer0(void) interrupt 1
{
unu = (unu << 1) | (unu >> 7);
doi = (doi >> 1) | (doi << 7);
P1 = ~(doi | unu);
reload(1000);
}

void main(void)
{
TR0 = 0;
reload(1000);
TMOD = 1;
EA = 1;
ET0 = 1;
TR0 = 1;
}