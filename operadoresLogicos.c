#include <stdio.h>

int main(){

    int idade = 18;
    float altura = 1.69;

    if( idade >= 18 && idade <= 35 && altura > 1.70) {
        printf("Candidato apto para servir no exército!\n");
    } else {
        printf("Candidato não possui os requisitos mínimos para ingressar no exercíto\n");
    }
    return 0;
}