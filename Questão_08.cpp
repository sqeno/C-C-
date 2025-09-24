#include <stdio.h>

int main() {
    float salarioFixo, vendas, comissao, salarioFinal;

    printf("Digite o salário fixo do vendedor: R$ ");
    scanf("%f", &salarioFixo);

    printf("Digite o total de vendas do mês: R$ ");
    scanf("%f", &vendas);

    comissao = vendas * 0.15;
    salarioFinal = salarioFixo + comissao;

    printf("\nSalário fixo: R$ %.2f\n", salarioFixo);
    printf("Comissão (15%%): R$ %.2f\n", comissao);
    printf("Salário final do mês: R$ %.2f\n", salarioFinal);

    return 0;
}

