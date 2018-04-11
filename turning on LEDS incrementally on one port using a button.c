bit oldstate;
int counter;

void wait(){
	Delay_ms(100);
}

void main(){
	TRISB7_bit = 1;
	
	TRISD = 0x00;
	LATD = 0x00;
	
	oldstate = 0;
	counter = 0;
	
	do {
		if (Button(&PORTB, 7, 1, 1))
			oldstate = 1;
		if(oldstate && Button(&PORTB, 7, 1, 0)){
			counter++;
			oldstate = 0;
			counter = counter%8;
		}
		LATD = 0x01 << counter;
		
	} while (1);
	
}