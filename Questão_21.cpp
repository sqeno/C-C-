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
            printf("Tri�ngulo equil�tero.\n");
        } else if (a == b || a == c || b == c) {
            printf("Tri�ngulo is�sceles.\n");
        } else {
            printf("Tri�ngulo escaleno.\n");
        }
    } else {
        printf("Os valores informados n�o podem formar um tri�ngulo.\n");
    }

    return 0;
}
