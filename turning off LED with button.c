bit oldstate;

void main(){
	TRISB0_bit = 1;
	TRISD = 0x00;
	LATD = 0xFF;
	oldstate = 0;
	
	do{
		if (Button(&PORTB, 0, 1, 1)){
			oldstate = 1;
		}
		
		if (oldstate && Button(&PORTB, 0, 1, 0)){
			LATD = ~LATD;
			oldstate = 0;
		}
		
	} 
	while(1);
}