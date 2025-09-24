#include <stdio.h>

int main(){
	int valor;
	printf("Digite um numero inteiro: ");
	scanf("%i", &valor);
	
	if(valor >= 0){
		printf("o valor digitado: %2i\n", valor);
	}else{
		printf("o valor com o sinal invertido: %2i\n", -valor);
	}


	return 0;
}