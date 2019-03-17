#include <stdio.h>

int main(){
	float r, v;
	const float d=3.77;
	printf("Informe o valor em reais: ");
	scanf("%f",&r);
	v=r/d;
	printf("\nO valor em dolares e: %.2f",v);
	return 0;
}
