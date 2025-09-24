#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14
float r,h,area,volume;

int main(){
	setlocale(LC_ALL,"");	
	printf("Diguite o valor do raio:");
	scanf("%f", &r);
	printf("Diguite da altura:");
	scanf("%f", &h);
	
	area = 2 * PI * r * (h + r);
	volume = PI * pow(r, 2) * h;
	
	printf("Area do cilindro: %.2f\n", area);
	printf("Volume do cilindro: %.2f\n", volume);

	return 0;
}