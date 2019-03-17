#include <stdio.h>

int main(){
	float g, r;
	const float pi=3.141592;
	printf("Informe o angulo em graus: \n");
	scanf("%f",&g);
	r=g*pi/180;
	printf("\nRadianos: \n%.2f",r);
	return 0;
}
