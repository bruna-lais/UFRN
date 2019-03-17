#include <stdio.h>

int main(){
	float v, a, r;
	const float pi=3.141592;
	printf("Informe a altura do cilindro: \n\nInforme o raio do cilindro: \n");
	scanf("%f%f",&a,&r);
	v=pi*r*r*a;
	printf("\nO volume do cilindro e: \n%.2f",v);
	return 0;
}
