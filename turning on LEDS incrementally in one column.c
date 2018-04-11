bit oldstate;
int counter;

void wait(){
	Delay_ms(100);
}

void main(){
	TRISB7_bit = 1;
	
	TRISC = 0x00;
	TRISD = 0x00;
	
	LATC = 0x00;
	LATD = 0x00;
	
	oldstate = 0;
	counter = 0;


	do {
		if(Button(&PORTB, 7, 1, 1))
			oldstate = 1;
		if (oldstate && Button(&PORTB(7, 1, 1))){
			counter++;
			oldstate=0;
			counter = counter%4;
		}
		
		LATC = 0x11 << counter;
		LATD = 0x11 << counter;
		
	}while(1);
}