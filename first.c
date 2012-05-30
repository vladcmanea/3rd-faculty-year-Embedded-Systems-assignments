#include <8051.h>

// primul bit aprins
volatile char led = 254;

void timer0(void) interrupt 1
{
	// set timer high value
	TH0 = 3;
	// set timer low value
	TL0 = 232;
	
	P1 = led;
	
	led = ~led;
	led = led << 1;
	if(led == 0)
		led = 254;
	else led = ~led;
}

int main()
{
	// opreste numaratoarea
	TR0 = 0;
	
	// configurez timerul
	TMOD = 1;
	
	// enable the timer0 overflow interrupt
	ET0 = 1;
	
	// enable all: each interrupt source is individually enabled or disabled by setting or clearing its enable bit.
	EA = 1;
	
	// timer high value
	TH0 = 3;
	// timer low value
	TL0 = 232;
	
	// incepe numaratoarea
	TR0 = 1;
	
	return 0;
}