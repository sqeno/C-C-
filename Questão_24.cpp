#include <stdio.h>

int main() {
    int classe;
    float consumo, tarifa, valorFornecimento, icms, valorPagar;

    printf("Digite o tipo da Classe Consumidora:\n");
    printf("1 - Residencial\n");
    printf("2 - Comercial\n");
    printf("3 - Industrial\n");
    printf("Informe a classe (1, 2 ou 3): ");
    scanf("%d", &classe);

    printf("Informe o consumo em kWh: ");
    scanf("%f", &consumo);

    switch (classe) {
        case 1:
            tarifa = 0.50;
            break;
        case 2:
            tarifa = 0.80;
            break;
        case 3:
            tarifa = 1.00;
            break;
        default:
            printf("Classe inválida.\n");
            return 1;
    }

    valorFornecimento = consumo * tarifa;
    icms = 0.3 * valorFornecimento;
    valorPagar = valorFornecimento + icms;

    printf("\n--- Conta de Energia ---\n");
    printf("Consumo: %.2f kWh\n", consumo);
    printf("Tarifa aplicada: R$ %.2f\n", tarifa);
    printf("Valor do fornecimento: R$ %.2f\n", valorFornecimento);
    printf("ICMS (30%%): R$ %.2f\n", icms);
    printf("Valor total a pagar: R$ %.2f\n", valorPagar);

    return 0;
}
