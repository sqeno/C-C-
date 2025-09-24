#include <stdio.h>

int main(){
	int valor;
	printf("Digite um numero inteiro: ");
	scanf("%i", &valor);
	
	if(valor % 2 == 0){
		printf("o valor e par.\n");
	}else{
		printf("o valor e impar.\n");
	}


	return 0;
}