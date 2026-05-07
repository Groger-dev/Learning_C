#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao, numerosecreto, palpite, regras;

    printf("Menu Principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf(" %d", &opcao);

    switch (opcao){
    case 1:
        srand(time(0));
        numerosecreto = rand() % 10;
        printf("Digite um número de 0 a 9: ");
        scanf(" %d", &palpite);
        if (numerosecreto == palpite){
            printf("Você acertou o número secreto!\n");
            printf("Número secreto: %d\n", numerosecreto);
        } else {
            printf("Você errou!\n");
            printf("Número secreto: %d\n", numerosecreto);
        }
        break;
    case 2:
        printf("Regras do Jogo\n");
        printf("Ao todo são 3 regras, digite qual você visualizar: ");
        scanf(" %d", &regras);

        switch (regras){
        case 1:
            printf("Regra 1\n");
            break;
        case 2:
            printf("Regra 2\n");
            break;
        case 3:
            printf("Regra 3\n");
            break;
        default:
            printf("Ops :) essa regra não existe ksksksksks\n");
            break;
        }
        break;
    case 3:
        printf("Saindo do jogo!\n");
        break;
    default:
        printf("Opção inválida\n");
        break;

    return 0;
    }
}