#include <stdio.h>
#include <locale.h>

int main(){
	int A, B, C;
	setlocale(LC_ALL, "pt-br");
	printf("Digite um valor para A: ");
	scanf("%i", &A);
	printf("Digite um valor para B: ");
	scanf("%i", &B);
	
	C=A*B;
	scanf("i", &C);
	printf("O resultaddo do produto de %i e %i é igual a %i.", A, B, C);
	
	return 0;
}