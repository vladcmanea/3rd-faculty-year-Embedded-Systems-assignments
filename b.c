#include <8051.h>
// variabilele tipuri pe un octed
// variabile globale
unsigned char ch = 254;
int main()
{
	
	while(1)
	{
		// trimite la p1
		P1 = ch;
		// aprinde ceilalti pini
		ch = ch << 1 | (ch >> 7);
	}
	
	return 0;
}