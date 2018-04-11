char counter;

void main(){
	TRISD = 0x00;
	LATD = 0x00;
	counter = 0;
	
	do {
		for (counter = 0; counter < 8; counter ++){
			LATD = 0x80 >> counter; //shift right by counter amount
			delay_ms(50);
		}
		for (counter = 0; counter < 7; counter ++){
			LATD = 0x01 << counter; //shift left by counter amount
			delay_ms(50);
		}
	} while(1);
}