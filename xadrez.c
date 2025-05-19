#include <stdio.h>

int main (){

    // mover a torre cinco casas para a direita, usando a estrutura de repetição WHILE

    printf("**********Sequência de movimentos da Torre********** \n");
    printf("\n");

    int i = 0;

    while (i < 5){

        printf("Mover a Torre para a Direita \n"); // imprime o movimento da Torre
        i++;
    
    }

    // mover o Bispo cinco casas para cima e para a direita, usando a estrutura de repetição DO WHILE

    printf("**********Sequência de movimentos do Bispo********** \n");
    printf("\n");

    i = 0;

    do {
        printf("Mover o Bispo para cima e direita \n");
        i++;
    } while (i < 5);

    // Mover a Rainha oito casas para a esquerda, usando a estrutura FOR

    printf("**********Sequência de movimentos da Rainha********** \n");
    printf("\n");

    for (int i = 0; i < 8; i++){

        printf("Mover a Rainha para a esquerda \n"); // imprime o movimento da Rainha
    
    }

    // Mover o cavalo duas casas para baixo e uma para a esquerda, utilizando o Loop aninhado FOR / WHILE

    printf("**********Sequência de movimentos do cavalo********** \n");
    printf("\n");
    
    int cavalo = 1; // criando uma variável para o cavalo

    while (cavalo--) 
    {
        for (int i = 0; i < 2; i++) // condição (sequência de dois movimentos)
        {
            printf("Mover cavalo para baixo \n"); // imprime o movimento do cavalo na condição verdadeira
        }
        printf("Mover cavalo  para esquerda \n"); // imprime uma vez o movimento quando a condição passa a ser falsa
    }

    return 0;
}