bit oldstate;
bit activeport;

void main()
{
	TRISB7_bit = 1;	//ulazni pin
	
	TRISD = 0x00;	
	TRISC = 0x00;	//port D i C izlazni pinovi
	LATD = 0xFF;		//inicijalna vrednost D je 1
	LATC = 0x00;		//inicijalna vrednost C je 0
	
	activeport = 1;
	oldstate = 0;
	
	do {
		
		if (Button (&PORTB, 7, 1, 1){
			oldstate = 1;
		}
		if (oldstate && Button(&PORTB, 7, 1, 0){
			if (activeport){
				LATD = 0x00;
				LATC = 0xFF;
			} else{
				LATC = 0x00;
				LATD = 0XFF;
			}
			activeport = ~activeport;
			oldstate = 0;
		}
		
		if (activeport){
			LATD = ~LATD;
		} else {
			LATC = ~LATC;
		}
		Delay_ms(50);
		
	} while(1);

}