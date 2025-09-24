#include <stdio.h>

int main() {
    int num1, num2, operacao;
    float resultado;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    printf("Escolha a opera��o:\n");
    printf("1 - Adi��o\n");
    printf("2 - Subtra��o\n");
    printf("3 - Divis�o\n");
    printf("4 - Multiplica��o\n");
    printf("Digite o n�mero da opera��o: ");
    scanf("%d", &operacao);

    switch (operacao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da adi��o: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado da subtra��o: %.2f\n", resultado);
            break;
        case 3:
            if (num2 == 0) {
                printf("Erro: divis�o por zero n�o � permitida.\n");
            } else {
                resultado = (float) num1 / num2;
                printf("Resultado da divis�o: %.2f\n", resultado);
            }
            break;
        case 4:
            resultado = num1 * num2;
            printf("Resultado da multiplica��o: %.2f\n", resultado);
            break;
        default:
            printf("Opera��o inv�lida.\n");
            break;
    }

    return 0;
}
