#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //mover torre 5 casas para direita
    printf("Movimento da torre:\n");
    for(int i = 0; i < 5; i++){
        printf("Direita\n");//imprime a direção do movimento
    }
    printf("\n\n");
    //bispo move 5 casas na diagonal pra cima e pra direita
    printf("Movimento do bispo:\n");
    int i = 0;
    do{
    printf("Cima, direita\n");//imprime a direção do movimento
    i++;
    }while(i <= 5);//condição pro loop
    printf("\n\n");
    //rainha move 8 casas pra esquerda
    i = 0;
    printf("movimento da rainha:\n");
    while(i <= 8){
        printf("Esquerda\n");//imprime o movimento
        i++;
    }

    return 0;
}
