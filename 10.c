#include <8051.h>

char nr[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
char i = 0, numar = 0, contor = 0;
char a = 0, b = 0, c = 0, tmp = 0, flag = 1;
void main(){
P0_7 = 0;
P3 = 0x0;
/*numar = 123;
tmp = numar;*/
for(i = 0; i < 10; i++)
	P1 = nr[i];
/*a = numar%100;
numar = numar - a * 100;

b = numar % 10;
numar = numar - numar * 10;

c = numar;
}
while(1){
	P3 = 0x0;
	//P3_4 = 0;
	P1 = nr[a];
	
	P3 = 0x1;
	//P3_4 = 0;
	P1 = nr[b];
	P3 = 0x3;
	//P3_4 = 1;
	P1 = nr[c];
}*/
}
