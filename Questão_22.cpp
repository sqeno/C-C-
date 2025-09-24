#include <stdio.h>

int main() {
    int num1, num2, operacao;
    float resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Escolha a operação:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Divisão\n");
    printf("4 - Multiplicação\n");
    printf("Digite o número da operação: ");
    scanf("%d", &operacao);

    switch (operacao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da adição: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado da subtração: %.2f\n", resultado);
            break;
        case 3:
            if (num2 == 0) {
                printf("Erro: divisão por zero não é permitida.\n");
            } else {
                resultado = (float) num1 / num2;
                printf("Resultado da divisão: %.2f\n", resultado);
            }
            break;
        case 4:
            resultado = num1 * num2;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;
        default:
            printf("Operação inválida.\n");
            break;
    }

    return 0;
}
