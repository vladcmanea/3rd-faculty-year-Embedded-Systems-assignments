#include <8051.h>

char dir = 1;

void main(void)
{
	P0_7 = 0;
	while (1)
	{
		if (P1 == 0 || P1 == 255)
			dir = -dir;
		P1 = P1 + dir;
	}
}
