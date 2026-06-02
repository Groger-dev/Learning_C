#include <stdio.h>

int main(){

    int numero;

    printf("Digite um número: ");
    scanf(" %d", &numero);

    if (numero > 0){
        printf("Número positivo\n");
        if (numero % 2 == 0){
            printf("Número é par\n");
        } else {
            printf("Número é ímpar\n");
        }
        
    } else if (numero < 0){
        printf("Número negativo\n");
    } else {
        printf("Número igual a zero\n");
    }
        
}