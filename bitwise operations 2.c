#include<stdio.h>
#include<math.h>

int main()
{
	long int decimalNumber, remainder,quotient;
	int i=1, j, num1 = 0, num0 = 0, binaryNumber[100];
	
	printf("Unesite broj u decimalnom formatu: ");
	scanf("%ld", &decimalNumber);
	
	while (quotient!=0){
		binaryNumber[i++] = quotient%2;
		quotient = quotient/2;
	}
	
	printf("Binarni zapis: ");
	
	for (j=i-1;j>0; j--){
		printf("%d", binaryNumber[j]);
		if (binaryNumber[j]==1)
			num1++;
		else
			num0++;
	}
	
	printf("\n");
	printf("Broj nula: %d", num0);
	printf("Broj jedinica: %d", num1);
	
	return 0;
	
}