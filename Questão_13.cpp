#include <stdio.h>

int main() {
    float precoFabrica, impostos, revendedor, precoFinal;

    printf("Digite o preço de fábrica do carro: R$ ");
    scanf("%f", &precoFabrica);

    impostos = precoFabrica * 0.45;
    revendedor = precoFabrica * 0.28;
    precoFinal = precoFabrica + impostos + revendedor;

    printf("\nImpostos (45%%): R$ %.2f\n", impostos);
    printf("Porcentagem do revendedor (28%%): R$ %.2f\n", revendedor);
    printf("Preço final do carro: R$ %.2f\n", precoFinal);

    return 0;
}
