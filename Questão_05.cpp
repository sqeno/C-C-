#include <stdio.h>
#include <locale.h>

int main(){
	float cm, polegadas;
	setlocale(LC_ALL,"pt_BR");
	
	printf("Diguite um valor em centímetros: ");
	scanf("%f", &cm);
	
	polegadas = cm/2.54;
	
	printf("Valor em polegadas: %.2f\n", polegadas);

	return 0;
}