#include <stdio.h>

int main (){

    for(int i = 1; i <= 10; i++)
    {
        // printf("Tabuada de %d \n", i);

        for(int j = 1; j <= 10; j++)
        {
            printf("%d \t", i * j);
        }

        printf("\n");
    }
    return 0;
}