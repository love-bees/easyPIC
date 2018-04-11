#include <studio.h> //potrebno za IO funkcije
int arr[5];
int i,j,a;
int main(){
	int max_num = 0;
	int min_num = 0;
	int avg_num = 0;
	for (i=0;i<5;i++){
		printf("Unesite broj: ");
		scanf("%d", &arr[i]); //%d za citanje int-a
		avg_num += arr[i];
	}
	max_num = arr[0];
	min_num = arr[0];
	for (i=1;i<5;++i){	//razlikujemo ++i & i++
		if(max_num < arr[i])
			max_num = arr[i];
		if(min_num > arr[i])
			min_num = arr[i];
	}
	
	avg_num /=5;
	for (i=0;i<5;i++){
		for(j=i+1;j<5;++j){
			if(arr[i] > arr[j]){
				a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
		}
	}
	med = arr[2];
	//ispis rezultata
	printf("Najveci broj u nizu %d.\n", max_num);
	printf("Najmanji broj u nizu %d.\n", min_num);
	printf("Medijana %d.\n", med);
	printf("Prosecna vrednost %d.\n", avg_num);
	
	return 0;
}