#include <stdio.h>

int main() {
    
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    int i;

    printf("=== Movimento da Torre ===\n");
    
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }

    printf("\n=== Movimento do Bispo ===\n");
    
    i = 1;
    while (i <= movimentoBispo) {
        printf("Cima Direita (%d casa)\n", i);
        i++;
    }

    printf("\n=== Movimento da Rainha ===\n");
    
    i = 1;
    do {
        printf("Esquerda (%d casa)\n", i);
        i++;
    } while (i <= movimentoRainha);

    return 0;
}
