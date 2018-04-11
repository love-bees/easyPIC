#include <stdio.h>
#include <math.h>

int main(){
	long int decimalNumber, remainder, quotient;
	int i=1, j, temp, binaryNumber[100];
	char hexadecimalNumber[100];
	
	printf("Unesite broj u decimalnom formatu: ");
	scanf("%ld", &decimalNumber);
	
	quotient = decimalNumber;
	
	while (quotient!=0){
		temp  quotient % 16;
		//to convert integer into char
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;
		hexadecimalNumber[i++] = temp;
		quotient = quotient/16;
	}
	
	printf("Heksadecimalni zapis: ");
	for (j=i-1; j>0; j--)
		printf("%c", hexadecimalNumber[j]);
	printf("\n");
	i = 1;
	
	quotient = decimalNumber;
	
	
	
	while (quotient !=0){
		binaryNumber[i++] = quotient %2;
		quotient = quotient/2;
	}

	printf("Binarni zapis: ")
	for (j=i-1;j>0;j--)
		printf("%d", binaryNumber[j]);
	printf("\n");
	
	return 0;
}
