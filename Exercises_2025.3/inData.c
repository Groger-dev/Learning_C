#include <stdio.h>

int main(){

    int idade = 24;
    float altura = 1.82;
    char opcao = 'G';
    char nome[10] = "Gustavo";

    printf("O seu nome é: %s\n", nome);
    printf("Sua idade é: %d\n", idade);
    printf("Sua altura é: %.2f\n", altura);
    printf("Sua inicial é: %c\n", opcao);
    printf("Logo,\n");
    printf("Você é %s, tem %d anos, mede %.2f e sua inicial é a letra %c\n", nome, idade, altura, opcao);

    /*
    printf("%formato1 %formato2 %formato3\n", variavel1, varivavel2, variavel3);

    %d imprime um inteiro no formato decimal
    %i equivalente a %d
    %f imprime número de ponto flutuante no formato padrão
    %e imprime número de ponto flutuante com notação científica
    %c imprime um único caractere
    %s imprime uma cadeia (string) de caracteres 
    */
}