#include <stdio.h>

int main() {
    float salarioFixo, vendas, comissao, salarioFinal;

    printf("Digite o sal�rio fixo do vendedor: R$ ");
    scanf("%f", &salarioFixo);

    printf("Digite o total de vendas do m�s: R$ ");
    scanf("%f", &vendas);

    comissao = vendas * 0.15;
    salarioFinal = salarioFixo + comissao;

    printf("\nSal�rio fixo: R$ %.2f\n", salarioFixo);
    printf("Comiss�o (15%%): R$ %.2f\n", comissao);
    printf("Sal�rio final do m�s: R$ %.2f\n", salarioFinal);

    return 0;
}

