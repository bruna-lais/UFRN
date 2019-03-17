#include <stdio.h>

int main(){
	float c, f;
	printf("Informe a temperatura em graus Celsius: \n");
	scanf("%f",&c);
	f=c*(9.0/5.0)+32.0;
	printf("\nA temperatura em Fahrenheit e: \n%.2f",f);
	return 0;
}
