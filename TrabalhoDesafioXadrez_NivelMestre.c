#include <stdio.h>

// Função recursiva para simular o movimento da Torre
void moverTorre(int casas, int atual) {
    if (atual > casas) return; // Condição de parada
    printf("Direita\n");
    moverTorre(casas, atual + 1); // Chamada recursiva
}

// Função recursiva para simular o movimento do Bispo
void moverBispo(int casas, int atual) {
    if (atual > casas) return; // Condição de parada
    // Loops aninhados para simular o movimento diagonal (Cima e Direita)
    for (int i = 1; i <= 1; i++) { // Loop externo para movimento vertical
        for (int j = 1; j <= 1; j++) { // Loop interno para movimento horizontal
            printf("Cima, Direita\n");
        }
    }
    moverBispo(casas, atual + 1); // Chamada recursiva
}

// Função recursiva para simular o movimento da Rainha
void moverRainha(int casas, int atual) {
    if (atual > casas) return; // Condição de parada
    printf("Esquerda\n");
    moverRainha(casas, atual + 1); // Chamada recursiva
}

// Programa principal
int main() {
    // Variáveis para controlar o número de casas a serem percorridas
    int casas_torre = 5;   // Torre: 5 casas para a direita
    int casas_bispo = 5;   // Bispo: 5 casas na diagonal (cima e direita)
    int casas_rainha = 8;  // Rainha: 8 casas para a esquerda
    int casas_cavalo_cima = 2; // Cavalo: 2 casas para cima
    int casas_cavalo_direita = 1; // Cavalo: 1 casa para a direita

    // Simulação do movimento da Torre (usando recursividade)
    printf("Movimento da Torre (Direita):\n");
    moverTorre(casas_torre, 1);
    printf("\n");

    // Simulação do movimento do Bispo (usando recursividade e loops aninhados)
    printf("Movimento do Bispo (Cima e Direita):\n");
    moverBispo(casas_bispo, 1);
    printf("\n");

    // Simulação do movimento da Rainha (usando recursividade)
    printf("Movimento da Rainha (Esquerda):\n");
    moverRainha(casas_rainha, 1);
    printf("\n");

    // Simulação do movimento do Cavalo (usando loops aninhados complexos)
    printf("Movimento do Cavalo (Duas para cima, uma para a direita):\n");
    int mov_cima = 0, mov_direita = 0;
    int max_movimentos = casas_cavalo_cima + casas_cavalo_direita;
    for (int i = 1; i <= max_movimentos; i++) { // Loop externo para total de movimentos
        if (mov_cima < casas_cavalo_cima) { // Controla movimento para cima
            for (int j = 1; j <= 1; j++) {
                if (mov_cima >= casas_cavalo_cima) {
                    continue; // Pula se já moveu para cima o suficiente
                }
                printf("Cima\n");
                mov_cima++;
                if (mov_cima == casas_cavalo_cima) {
                    break; // Sai do loop interno após completar movimentos para cima
                }
            }
        } else if (mov_direita < casas_cavalo_direita) { // Controla movimento para a direita
            printf("Direita\n");
            mov_direita++;
            break; // Sai do loop após mover para a direita
        }
    }

    return 0;
}