//LCD module connections
sbit LCD_RS at LATB4_bit;
sbit LCD_EN at LATB5_bit;
sbit LCD_D4 at LATB0_bit;
sbit LCD_D5 at LATB1_bit;
sbit LCD_D6 at LATB2_bit;
sbit LCD_D7 at LATB3_bit;

sbit LCD_RS_Direction at TRISB4_bit;
sbit LCD_EN_Direction at TRSB5_bit;
sbit LCD_D4_Direction at TRSB0_bit;
sbit LCD_D5_Direction at TRSB1_bit;
sbit LCD_D6_Direction at TRSB2_bit;
sbit LCD_D7_Direction at TRSB3_bit;
//End LCD module connections

char txt1[] = "Hello";
char txt2[] = "World";
char txt3[] = "Example";
char txt4[]= "1";

char i;

void Move_Delay(){
	Delay_ms(500); //function used for text moving
}

void main(){
	ANSELB = 0; //configure PORTB pins as digital
	
	Lcd_Init(); //initialize LCD
	
	Lcd_Cmd(_LCD_CLEAR); //clear display
	Lcd_Cmd(_LCD_CURSOR_OFF); //cursor off
	Lcd_Out(1,6,txt3); //Write text in first row
	
	Lcd_out(2,8,txt4); //write text in second row
	Delay_ms(2000);
	Lcd_Cmd(_LCD_CLEAR); //clear display
	
	Lcd_Out(1,1,txt1); //write text in first row
	Lcd_Out(2,1, txt2); //Write text in second row
	
	Delay_ms(2000);
	
	//moving text
	
	for (i=0; i<4; i++){
		Lcd_Cmd(_LCD_SHIFT_RIGHT);
		Move_Delay();
	}
	
	while (1){
		for (i=0; i<4; i++){
			Lcd_Cmd(_LCD_SHIFT_LEFT);
			Move_Delay();
		}
		for (i=0; i<4; i++){
			Lcd_Cmd(_LCD_SHIFT_RIGHT);
			Move_Delay();
		}
		
	}
}