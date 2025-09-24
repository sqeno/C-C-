#include <stdio.h>

int main() {
    int quantidade;
    float preco, total;

    
    printf("Digite o número de maçãs compradas: ");
    scanf("%d", &quantidade);

    if (quantidade < 12) {
        preco = 0.30;
    } else {
        preco = 0.25;
    }

    total = quantidade * preco;

    printf("Valor total da compra: R$%.2f\n", total);

    return 0;
}
