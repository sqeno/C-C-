#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &a);
    
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &b);
    
    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &c);

    if (a == b || a == c || b == c) {
        printf("Erro: os valores devem ser distintos.\n");
        return 1;
    }
    
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Valores em ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}
