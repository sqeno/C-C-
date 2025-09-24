#include <stdio.h>
#include <locale.h>

int main(){
	int A, B, C;
	setlocale(LC_ALL,"pt-BR");
	printf("Digite um número:");
	scanf("%i", &A);
	
	B = A -1;
	C = A +1;
	
	printf("Antecessor: %i\n", B);
	printf("Sucessor: %i\n", C);
	
	return 0;
}