#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numeroJogador, numeroPC, resultado;
    char comparacao;

    //Gerador de número aleatório
    srand(time(0));
    numeroPC = rand() % 100 + 1; //um número entre 1 e 100, inclusive;

    //Início do jogo
    printf("Jogo maior, menor ou igual! `¬´ \n");
    printf("Escolha seu desafio e depois digite um número! :º\n");
    printf("M. Número maior\n");
    printf("N. Número menor\n");
    printf("I. Números iguais\n");
    
    printf("Escolha o tipo de comparação: ");
    scanf(" %c", &comparacao);

    printf("Digite o seu número: ");
    scanf(" %d", &numeroJogador);

    switch (comparacao){
    case 'M':
    case 'm':
        printf("Comparação número maior!\n");
        resultado = numeroJogador > numeroPC ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Comparação número menor!\n");
        resultado = numeroJogador < numeroPC ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Comparação números iguais!\n");
        resultado = numeroJogador == numeroPC ? 1 : 0;
        break;    
    default:
        printf("Opção inválida!\n");
        break;
    }

    printf("O número do PC é: %d\n", numeroPC);
    printf("Você escolheu o número: %d\n", numeroJogador);
    
    if (resultado == 1)
    {
        printf("Parabéns, você venceu!\n");
    } else {
        printf("Infelizmente você perdeu!\n");
    }
    return 0;

}