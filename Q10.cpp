#include <stdio.h>

int main(){
	float g1, g2, g3;
	const float p=78000.00;
	printf("O premio de R$78.000,00 sera dividido para 3 ganhadores: \n");	
	g1=p*0.46;
	printf("\nO primeiro ganhador recebera: \n%.2f\n",g1);
	g2=p*0.32;
	printf("\nO segundo ganhador recebera: \n%.2f\n",g2);
	g3=p-g1-g2;
	printf("\nO terceiro ganhador recebera: \n%.2f\n",g3);
	return 0;
}
