#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Torre (recursivo) - move-se em linha reta
void moverTorre(int casas) {
    if (casas <= 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Bispo (recursivo simples)
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return; // condição de parada
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1); // chamada recursiva
}

// Rainha (recursivo) - move-se em todas as direções
void moverRainha(int casas) {
    if (casas <= 0) return; // condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// Cavalo - loops aninhados (2 para cima, 1 para a direita)
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int vertical = 1; vertical <= 2; vertical++) {
            printf("Cima\n");
            if (vertical == 2) { // quando subir duas casas
                for (int horizontal = 1; horizontal <= 1; horizontal++) {
                    printf("Direita\n");
                }
            }
        }
    }
}

// Bispo - versão com loops aninhados
void moverBispoLoops(int casas) {
    for (int vertical = 1; vertical <= casas; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }
}

int main() {
    int bispo = 5;
    int torre = 5;
    int rainha = 8;
    int cavalo = 1;

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // Implementação de Movimentação do Bispo
    printf("\nMovimento Bispo(Recursivo):\n");
    moverBispoRecursivo(bispo);
    printf("\nMovimento do Bispo (com loops aninhados):\n");
    moverBispoLoops(bispo);

    // Implementação de Movimentação da Torre
    printf("\nMovimento Torre:\n");
    moverTorre(torre);

    // Implementação de Movimentação da Rainha
    printf("\nMovimento Rainha:\n");
    moverRainha(rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    printf("\nMovimento Cavalo:\n");
    moverCavalo(cavalo);

    return 0;
}