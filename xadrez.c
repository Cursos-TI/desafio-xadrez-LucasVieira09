#include <stdio.h>
#include <string.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// DESAFIO DO MOVIMENTO DAS PEÇAS DE XADREZ.
int main() {
// VARIÁVEIS
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int cavalo = 1;

    // MOVIMENTO DA TORRE (DIREITA).
    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= torre; i++){
        printf("DIREITA! \n");
    }
    
// MOVIMENTO DO BISPO (CIMA E DIREITA).
    printf("\n");
    printf("=== Movimento do Bispo ===\n");
    int i = 1;
    while (i <= bispo){
        printf("Cima, Direita! \n");
        i++;
    }
    
// MOVIMENTO DA RAINHA (ESQUERDA)
    printf("\n");
    printf("=== Movimento da Rainha ===\n");
    int j = 1;
    do {
        printf("Esquerda! \n");
        j++;
    } while (j <= rainha);

// MOVIMENTO DO CAVALO (BAIXO, BAIXO, ESQUERDA)
    printf("\n");
    printf("=== Movimento do Cavalo ===\n");
    while (cavalo--) {
        for (int k = 0; k < 2; k++) {
            printf("Baixo! \n");
        }
        printf("Esquerda! \n");
    }


   
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
