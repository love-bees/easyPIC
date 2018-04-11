bit oldstate;

void main()
{
	TRISB7_bit = 1;	//ulazni pin
	
	TRISD = 0x00;	
	TRISC = 0x00;	//port D i C izlazni pinovi
	LATD = 0xFF;		//inicijalna vrednost D je 1
	LATC = 0x00;		//inicijalna vrednost C je 0
	
	oldstate = 0;
	
	do {
		
		if (Button (&PORTB, 7, 1, 1){
			oldstate = 1;
		}
		if (oldstate && Button(&PORTB, 7, 1, 0){
			LATD = ~LATD;
			LATC = ~LATC;
			oldstate = 0;
		}
		
	} while(1);

}