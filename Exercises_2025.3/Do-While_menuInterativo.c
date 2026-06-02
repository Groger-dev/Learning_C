#include <stdio.h>

int main (){

    int option;

    do
    {
        printf("** * Menu interativo * **\n");
        printf("1. Opção1\n");
        printf("2. Opção2\n");
        printf("3. Sair\n");
        
        printf("Escolha sua opção: ");
        scanf(" %d", &option);

        switch (option)
        {
        case 1:
            printf("Você escolheu a opção1\n");    

            break;
        case 2:
            printf("Você escolheu a opção2\n");    

            break;
        case 3:
            printf("Você escolheu Sair do programa\n");    

            break;

        default:
            printf("Opção inválida\n");

            break;
        }


    } while (option != 3);
    
}