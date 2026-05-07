#include <stdio.h>

    int main (){

        int numero;

        do{
            printf("Digite um número (negativo para sair): ");
            scanf(" %d", &numero);
            
            if (numero >= 0)
            {
                printf("Você escolheu o número %d\n", numero);

            }
                        
        } while (numero >= 0);
        
        printf("Número negativo identificado. Saindo...\n");

        return 0;
    }