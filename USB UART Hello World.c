void main(){
	ANSELC = 0; //configure PORTC pins as digital
	UART1_Init(9600); //initialize UART module at 9600 bps
	Delay_ms(100); //wait for UART module to stabilize
	
	UART1_Write_Text("Start");
	UART1_Write(13);
	UART1_Write(10);
	
	while (1){
		UART1_Write_Text("Hello World \n"); //send data via UART
		delay_ms(1000);
	}
}