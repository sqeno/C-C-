#include <stdio.h>

int main(){
	int valor;
	printf("Digite um numero inteiro: ");
	scanf("%i", &valor);
	
	if(valor == 0){
		printf("o valor e zero.\n");
	}else if(valor > 0){
		   printf("o valor e positivo.\n");	
	}else{
		printf("o valor e negativo.\n");
	}


	return 0;
}