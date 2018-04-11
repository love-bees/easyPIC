char uart_rd;
void main(){
	ANSELC = 0x00;
	
	UART1_Init(9600);
	Delay_ms(100);
	
	UART1_Write_Text("Start");
	UART_Write(13);
	UART_Write(10);
	while (1){
		if (UART_Data_Ready()){
			uart_rd = UART1_Read();
			UART1_Write(uart_rd);
		}
	}
}