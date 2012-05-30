#include <8051.h>
// variabilele tipuri pe un octed
// variabile globale
char ch = 85;
int main()
{
	
	while(1)
	{
		// trimite la p1
		P1 = ch;
		// aprinde ceilalti pini
		ch = ~ch;
	}
	
	return 0;
}