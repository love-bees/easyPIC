unsigned st;
bit oldstate;
bit bl;

void blink(){
	LATD = 0xFF;
	Delay_ms(500);
	LATD = 0x00;
	Delay_ms(500);
}

void interrupt(){
	if (TMR0IF_bit){
		TMR0IF_bit = 0;
		if (bl == 0){
			st++;
			LATD = LATD << 1; //bitwise shifting left 1
		}
	}
}

void main(){
	TRISB7_bit = 1;
	TRISD = 0;
	LATD = 0xFF;
	oldstate = 0;
	
	TMR0L = 0;
	T0CON = 0x84;
	GIE_bit = 1;
	TMR0IE_bit = 1;
	st = 0;
	bl = 0;
	
	do {
		if (st>=9){
			st = 0;
			LATD = 0xFF;
		}
		if (Button(&PORTB, 7, 1, 1)){
			oldstate = 1;
		}
		if (oldstate && Button (&PORTB, 7, 1, 0) && (st == 0){
			oldstate = 0;
			bl = 1;
			blink();
			blink();
			blink();
			bl = 0;
		}
	} while (1);
}