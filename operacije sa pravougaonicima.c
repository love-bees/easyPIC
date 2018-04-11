#include <stdio.h>

struct Pravougaonik
{
	float a,b;
	float O,P;
};

float povrsina(struct Pravougaonik *p){
	return p->a*p->b;
};

float obim(struct Pravougaonik *p){
	return 2*p->a + a*p->b;
};

int main()
{
	struct Pravougaonik pr[5];
	int i = 0;
	float avgP = 0, avgO = 0;
	struct Pravougaonik maxO, minO, maxP, minP;
	
	for (i=0; i<5;i++){
		printf("Unesite stranice %d pravougaonika kao a i b .\n", i+1);
		printf("a = ");
		scanf("%f", &pr[i].a);
		printf("b = ");
		scanf("%f", &pr[i].b);
		
		pr[i].O = obim(&pr[i]);
		pr[i].P = povrsina(&pr[i]);
		
		printf("Povrsina: %f \n", pr[i].P);
		printf("Obim: %f \n", pr[i].O);
	}
	
	avgO/=5;
	avgP/=5;
	
	maxO = minO = maxP = minP = pr[0];
	for (i=1;i<5;++i){
		if (maxO.O < pr[i].O)
			maxO = pr[i];
		if (minO.O > pr[i].O)
			minO = pr[i];
		if (maxP.P < pr[i].P)
			maxP = pr[i];
		if (minP.P > pr[i].P)
			minP = pr[i];
	}
	
	printf("Srednja vrednost Obima %f.\n", avgO);
	printf("Srednja vrednost povrsine: %f.\n", avgP);
	printf("Minimalni obim: a = %f i b = %f .\n", minO.a, minO.b);
	printf("Maksimalan obim: a = %f i b = %f .\n", maxO.a, maxO.b);
	printf("Minimalna povrsina: a = %f i b = %f .\n", minP.a, minP.b);
	printf("Minimalna povrsina: a = %f i b = %f.\n", maxP.a, minP.b);
	
	return 0;
	
}