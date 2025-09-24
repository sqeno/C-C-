#include <stdio.h>
#include <math.h>

int main() {
    float valorCompra, valorPago, troco;
    int trocoReais, trocoCentavos;
    int n100, n50, n20, n10, n5, n2, m1, m050, m025, m010, m005, m001;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("Digite o valor pago pelo cliente: R$ ");
    scanf("%f", &valorPago);

    if (valorPago < valorCompra) {
        printf("Valor pago insuficiente. Faltam R$ %.2f\n", valorCompra - valorPago);
        return 1;
    }

    troco = valorPago - valorCompra;

    printf("\nTroco: R$ %.2f\n", troco);

    
    int totalCentavos = round(troco * 100);

    trocoReais = totalCentavos / 100;
    trocoCentavos = totalCentavos % 100;

    
    n100 = trocoReais / 100;
    trocoReais %= 100;

    n50 = trocoReais / 50;
    trocoReais %= 50;

    n20 = trocoReais / 20;
    trocoReais %= 20;

    n10 = trocoReais / 10;
    trocoReais %= 10;

    n5 = trocoReais / 5;
    trocoReais %= 5;

    n2 = trocoReais / 2;
    trocoReais %= 2;

    m1 = trocoReais; 

    
    m050 = trocoCentavos / 50;
    trocoCentavos %= 50;

    m025 = trocoCentavos / 25;
    trocoCentavos %= 25;

    m010 = trocoCentavos / 10;
    trocoCentavos %= 10;

    m005 = trocoCentavos / 5;
    trocoCentavos %= 5;

    m001 = trocoCentavos; 
    printf("\nCédulas e moedas para o troco:\n");

    if (n100) printf("R$100: %d\n", n100);
    if (n50)  printf("R$50 : %d\n", n50);
    if (n20)  printf("R$20 : %d\n", n20);
    if (n10)  printf("R$10 : %d\n", n10);
    if (n5)   printf("R$5  : %d\n", n5);
    if (n2)   printf("R$2  : %d\n", n2);
    if (m1)   printf("R$1  : %d\n", m1);

    if (m050) printf("R$0.50: %d\n", m050);
    if (m025) printf("R$0.25: %d\n", m025);
    if (m010) printf("R$0.10: %d\n", m010);
    if (m005) printf("R$0.05: %d\n", m005);
    if (m001) printf("R$0.01: %d\n", m001);

    return 0;
}
