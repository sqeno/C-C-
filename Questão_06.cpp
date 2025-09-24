#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14
float x,y,r;

int main(){
	setlocale(LC_ALL,"");	
	printf("Diguite o valor do raio:");
	scanf("%f", &x);
	printf("Diguite um numero inteiro:");
	scanf("%i", &y);
	printf("valor da area do circulo é: %.2f ",PI*pow(x,2));

	return 0;
}