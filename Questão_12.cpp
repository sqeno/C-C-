#include <stdio.h>

int main() {
    float media1, media2, somaMedias, mediaDasMedias;

    
    media1 = (7 + 8 + 9) / 3.0;

    
    media2 = (4 + 5 + 6) / 3.0;

    
    somaMedias = media1 + media2;

    
    mediaDasMedias = somaMedias / 2.0;

    
    printf("Média de 7, 8 e 9: %.2f\n", media1);
    printf("Média de 4, 5 e 6: %.2f\n", media2);
    printf("Soma das médias: %.2f\n", somaMedias);
    printf("Média das médias: %.2f\n", mediaDasMedias);

    return 0;
}
