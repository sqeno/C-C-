#include <stdio.h>
#include <locale.h>

int main(){
	int X, Y, quociente, resto;
	setlocale(LC_ALL,"pt_BR");
	
	printf("Diguite um valor para X: ");
	scanf("%i", &X);
	printf("Diguite um valor para Y: ");
	scanf("%i", &Y);
	
	if (Y!=0){
		quociente = X/Y;
		resto = X%Y;
		
		printf("Quociente: %i\n", quociente);
        printf("Resto: %i\n", resto);
	}else
	{
		 printf("Erro: divisão por zero não é permitida.\n");
	}

	return 0;
}