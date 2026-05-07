#include <stdio.h>

int main(){

    float temperatura, umidade;
    unsigned int estoque;

    printf("Insira o valor da temperatura: \n");
    scanf("%f", &temperatura);
    printf("Insira o valor da umidade: \n");
    scanf("%f", &umidade);
    printf("Insira o valor do estoque: \n");
    scanf("%u", &estoque);

    if( temperatura >= 30){
        printf("A temperatura está alta!\n");   
    } else{
        printf("A temperatura não oferece risco de avarias\n");
    }
    if (umidade < 10){
        printf("Está muito seco\n");
    }else{
        printf("O nível da umidade está normal\n");
    }
}