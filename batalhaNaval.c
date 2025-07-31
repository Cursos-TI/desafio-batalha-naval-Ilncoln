#include <stdio.h>

int main() {

    char letra[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int numero[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tabuleiro[10][10] = {

        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

    };

    //navio 1
    tabuleiro[8][1] = 3;
    tabuleiro[8][2] = 3;
    tabuleiro[8][3] = 3;

    //navio 2
    tabuleiro[0][7] = 3;
    tabuleiro[1][7] = 3;
    tabuleiro[2][7] = 3;

    for (int i = 0; i < 10; i++)
    {
         printf(" %i", numero[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%c  ", letra[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%i ", tabuleiro[i][j]);
        }
        printf("\n");
        
    }
    

    return 0;

}
