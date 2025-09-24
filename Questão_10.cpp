#include <stdio.h>

int main() {
    int valor, resto;
    int n100, n50, n20, n10, n5, n2, n1;

    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);

    resto = valor;

    n100 = resto / 100;
    resto = resto % 100;

    n50 = resto / 50;
    resto = resto % 50;

    n20 = resto / 20;
    resto = resto % 20;

    n10 = resto / 10;
    resto = resto % 10;

    n5 = resto / 5;
    resto = resto % 5;

    n2 = resto / 2;
    resto = resto % 2;

    n1 = resto;

    printf("\nCédulas necessárias:\n");
    if (n100 > 0) printf("100: %d\n", n100);
    if (n50  > 0) printf("50 : %d\n", n50);
    if (n20  > 0) printf("20 : %d\n", n20);
    if (n10  > 0) printf("10 : %d\n", n10);
    if (n5   > 0) printf("5  : %d\n", n5);
    if (n2   > 0) printf("2  : %d\n", n2);
    if (n1   > 0) printf("1  : %d\n", n1);

    return 0;
}