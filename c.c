#include <8051.h>
// variabilele tipuri pe un octed
// variabile globale
unsigned char doi = 128;
unsigned char unu = 1;
int main()
{
	while(1)
	{
		unu = (unu << 1) | (unu >> 7);
		doi = (doi >> 1) | (doi << 7);
		
		P1 = ~(doi | unu);
	}
	
	return 0;
}