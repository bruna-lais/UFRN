#include <stdio.h>

int main(){
	float m, w, x, y, z;
	printf ("Informe o primeiro numero: \n");
	scanf ("%f",&w);
	printf ("Informe o segundo numero: \n");
	scanf ("%f",&x);
	printf ("Informe o terceiro numero: \n");
	scanf ("%f",&y);
	printf ("Informe o quarto numero: \n");
	scanf ("%f",&z);
	m=(w+x+y+z)/4;
	printf ("A media aritmetica e: %.2f",m);
	return 0;
}
