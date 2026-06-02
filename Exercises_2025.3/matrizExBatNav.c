#include <stdio.h>

int main(){

    
    int i, j;
    int a = 0; //variável para água ou navio;

    int tabuleiro [10][10] = {
        {a, a, a, a, a, a, a, a, a},
        {a, a, a, a, a, a, a, a, a},
        {a, a, a, a, a, a, a, a, a},
        {a, a, a, a, a, a, a, a, a},
        {a, a, a, a, a, a, a, a, a},
        {a, a, a, a, a, a, a, a, a},
        {a, a, a, a, a, a, a, a, a},
        {a, a, a, a, a, a, a, a, a},
        {a, a, a, a, a, a, a, a, a}
        
        
    };

    
    //printf("%d", tabuleiro [1][5]);
    printf("Tabuleiro do jogo \n");
    printf(" \n"); //organizando a visualização;
    printf("   A B C D E F G H I J\n"); //direção horizontal;

    for (i = 0; i < 10; i++)
    {   
        printf("%d ", i + 1); //direção vertical;     
        for (j = 0; j < 10; j++)
        {
            printf(" %d", tabuleiro [j][i]);
        }

        
        printf("\n");


        
    }
    

    return 0;
}