#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o primeiro lado: ");
    scanf("%d", &a);

    printf("Digite o segundo lado: ");
    scanf("%d", &b);

    printf("Digite o terceiro lado: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a) {        
        if (a == b && b == c) {
            printf("Triângulo equilátero.\n");
        } else if (a == b || a == c || b == c) {
            printf("Triângulo isósceles.\n");
        } else {
            printf("Triângulo escaleno.\n");
        }
    } else {
        printf("Os valores informados não podem formar um triângulo.\n");
    }

    return 0;
}
