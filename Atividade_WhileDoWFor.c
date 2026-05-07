#include <stdio.h>

int main (){

    /* Exemplo While
    int i = 0;

    while (i <= 10)
    {
        
        if(i % 2 != 0)
        {
            printf("O número %d é ímpar!\n", i);
        }

        i++;
    }
    */

    /* Exemplo Do-While
    int number;

    do
    {
        printf("Digite um número par para sair do programa: ");
        scanf(" %d", &number);

        if (number % 2 == 0)
        {
            printf("%d é um número par!\n", number);
        } else {
            printf("%d é um número ímpar!\n", number);
        }
        

    } while (number % 2 != 0);

    printf("Você digitou um número par! Saindo...\n");
    */

    //Exemplo da Tabuada com a estrutura For
    int number, i;

    printf("Digite um número para calcular a tabuada: ");
    scanf(" %d", &number);

    for (i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d \n", i, number, i * number);
    }

    return 0;
}