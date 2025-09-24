#include <stdio.h>
#include <math.h> 

int main() {
    float a, b, c, D, x1, x2;

    printf("Digite o valor de a (diferente de 0): ");
    scanf("%f", &a);

    if (a == 0) {
        printf("Não é uma equação do 2º grau, pois a = 0.\n");
        return 1;
    }

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    D = b * b - 4 * a * c;

    printf("Discriminante (D) = %.2f\n", D);

    if (D < 0) {
        printf("Não há solução real, pois D < 0.\n");
    } else if (D == 0) {
        x1 = -b / (2 * a);
        printf("Há duas soluções reais iguais: x1 = x2 = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("Há duas soluções reais e diferentes:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}
