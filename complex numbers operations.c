#include <stdio.h>

struct Complex
{
	float real, img;
};

int main()
{
	struct Complex a, b, c, d, e;
	printf( "Unesite brojeve a i b, gde vazi a+ib kao prvi kompleksni broj.\n");
	printf("a = ");
	scanf("%f", &a.real);
	printf("b= ");
	scanf("%f", &a.img);
	printf("Unesite brojeve c i d gde vazi c + id kao drugi kompleksni broj.\n");
	printf("c = ");
	scanf("%f", &b.real);
	printf("d = ");
	scanf("%f", &b.img);
	
	c.real = a.real + b.real;
	c.img = a.img + b.img;
	d.real = a.real - b.real;
	d.img = a.img - b.img;
	e.real = a.real*b.real - a.img*b.img;
	e.img = a.img*b.img + a.real*b.img;
	
	if (c.img >=0)
		printf("Zbir dva kompleksna broja = %f + %fi\n", c.real, c.img);
	else
		printf("Zbir dva kompleksna broja = %f %fi\n", c.real, c.img);
	if (d.img >=0)
		printf("Razlika dva kompleksna broja = %f + %fi \n", d.real, di.mg);
	else
		printf("Razlika dva komplesna broja = %f %fi \n", d.real, d.img);
	if (e.img >=0)
		printf("Proizvod dva komplesnka broja = %f + %fi \n", e.real,e.img);
	else
		printf("Proizvod dva komplesna broja = %f %fi \n", e.real, e.img);
	return 0;
}