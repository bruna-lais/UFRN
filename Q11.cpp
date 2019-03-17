#include <stdio.h>

int main(){
	float a, r;
	const float pi=3.141592;
	printf("Informe o raio do circulo: \n");
	scanf("%f",&r);
	a=pi*r*r;
	printf("\nArea: \n%.2f",a);
	return 0;
}
