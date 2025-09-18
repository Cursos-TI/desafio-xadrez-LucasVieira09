#include <stdio.h>
#include <string.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// DESAFIO DO MOVIMENTO DAS PEÇAS DE XADREZ.
//=== FUNÇÕES RECURSIVAS ===

//=== MOVIMENTO DA TORRE ===
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("DIREITA! \n");
    moverTorre(casas - 1);
}

//=== MOVIMENTO DA RAINHA ===
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("ESQUERDA! \n");
    moverRainha(casas - 1);
}

//=== MOVIMENTO DO BISPO ===
void moverBispo(int casas) {
    if (casas == 0) return;
// LOOPS ANINHADOS. (VERTICAL DEPOIS HORIZONTAL)
    for (int v = 0; v < 1; v++) {
        printf("CIMA! ");
    for (int h = 0; h < 1; h++) {
        printf("DIREITA! \n");
        }
    }
    moverBispo(casas - 1); // CHAMADA RECURSIVA.
}

//=== MOVIMENTO DO CAVALO ===
void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("CIMA! \n");
    }
    for (int j = 0; j < 1; j++) {
        printf("DIREITA! \n");
    }
}

int main () {
//=== VARIÁVEIS ===

    int torre = 5;
    int bispo = 5;
    int rainha = 8;

// ### TORRE ###
    printf("=== Movimento da Torre ===\n");
    moverTorre(torre);

// ### BISPO ###
    printf("\n");
    printf("=== Movimento do Bispo ===\n");
    moverBispo(bispo);

// ### RAINHA ###
    printf("\n");
    printf("=== Movimento da Rainha ===\n");
    moverRainha(rainha);

// ### CAVALO ###
    printf("\n");
    printf("=== Movimento do Cavalo ===\n");
    moverCavalo();



   
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
