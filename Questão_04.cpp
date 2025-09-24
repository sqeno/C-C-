#include <stdio.h>
#include <locale.h>

int main(){
	float x, y, soma, produto, quociente;
	setlocale(LC_ALL,"pt_BR");
	
	printf("Diguite um valor para x: ");
	scanf("%f", &x);
	printf("Diguite um valor para y: ");
	scanf("%f", &y);
	
	soma = x+y;
	produto = x*y;
	
	printf("Soma: %.2f\n", soma);
	printf("Produto: %.2f\n", produto);
	
	if (y!=0){
		quociente = x/y;
		printf("Quociente: %.2f\n", quociente);
	}else
	{
		printf("Erro: divisão por zero não é permitida.\n");
	}
	

	return 0;
}