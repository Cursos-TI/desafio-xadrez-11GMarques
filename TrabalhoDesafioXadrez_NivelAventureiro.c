#include <stdio.h>

// Programa para simular o movimento de quatro peças de xadrez: Torre, Bispo, Rainha e Cavalo
int main() {
    // Variáveis para controlar o número de casas a serem percorridas
    int casas_torre = 5;   // Torre: 5 casas para a direita
    int casas_bispo = 5;   // Bispo: 5 casas na diagonal (cima e direita)
    int casas_rainha = 8;  // Rainha: 8 casas para a esquerda
    int casas_cavalo_baixo = 2; // Cavalo: 2 casas para baixo
    int casas_cavalo_esquerda = 1; // Cavalo: 1 casa para a esquerda
    int i, j;              // Contadores para loops

    // Simulação do movimento da Torre (usando for)
    printf("Movimento da Torre (Direita):\n");
    for (i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do Bispo (usando while)
    printf("Movimento do Bispo (Cima e Direita):\n");
    i = 1;
    while (i <= casas_bispo) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // Simulação do movimento da Rainha (usando do-while)
    printf("Movimento da Rainha (Esquerda):\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casas_rainha);
    printf("\n");

    // Simulação do movimento do Cavalo (usando for e do-while aninhados)
    printf("Movimento do Cavalo (Duas para baixo, uma para a esquerda):\n");
    // Loop for para controlar as duas casas para baixo
    for (i = 1; i <= casas_cavalo_baixo; i++) {
        printf("Baixo\n");
    }
    // Loop do-while para controlar a casa para a esquerda
    j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casas_cavalo_esquerda);

    return 0;
}