#include <stdio.h>

int main(){
	float h, a, b;
	printf("Informe o cateto A: \n");
	scanf("%f",&a);
	printf("\nInforme o cateto B: \n");
	scanf("%f",&b);
	h= (a*a)+(b*b);
	printf("\nA hipotenusa e: \n%.2f",h);
	return 0;
}
