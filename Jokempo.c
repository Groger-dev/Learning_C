#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int escolhauser, escolhapc;
    srand(time(0));

    printf("***Jokenpô***\n");
    printf("Faça sua escolha\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf(" %d", &escolhauser);

    escolhapc = rand() % 3 + 1;

    switch (escolhauser){
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
        printf("Jogador: Tesoura - ");
        break;
    
    default:
        printf("Opção inválida\n");
        break;
    }

    switch (escolhapc){
    case 1:
        printf("PC: Pedra\n");
        break;
    case 2:
        printf("PC: Papel\n");
        break;
    case 3:
        printf("PC: Tesoura\n");
        break;
    }
    
    if (escolhauser == escolhapc){
        printf("Jogo empatado :o !\n");
    } else if ((escolhauser == 1) && (escolhapc == 3) ||
               (escolhauser == 2) && (escolhapc == 1) ||
               (escolhauser == 3) && (escolhapc == 2))
    {
        printf("Você venceu!!! Parabéns!!!! ;)\n");
    } else {
        printf("PC venceu!!! Tente novamente! :)\n");
    }
    return 0;       
}