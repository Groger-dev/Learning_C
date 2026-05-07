#include <stdio.h>

int main(){

    int idade, renda, dependentes;

    /*
    Programa para verificar se o usuário atende a três requisitos para participar de uma assistência social
    1 - idade maior ou igual a 18, menor q 65
    2 - renda menor q 3000
    3 - 3 ou mais dependentes
    */
    
    printf("Digite a sua idade: ");
    scanf(" %d", &idade);

    printf("Digite o valor da sua renda: ");
    scanf(" %d", &renda);

    printf("Digite o números de dependentes seus: ");
    scanf(" %d", &dependentes);

    if (idade >= 18 && idade < 65){
        if (renda < 3000){
            if (dependentes >= 3){
                printf("Você atende a todos os requisitos!\n");
            } else {
                printf("Você não atende ao requisito Dependentes!\n");
            }
        } else {
            printf("Você não atende ao requisito Renda!\n");
        }    
    } else {
        printf("Você não atende ao requisito Idade!\n");
    }
}