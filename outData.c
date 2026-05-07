#include <stdio.h>

int main(){

    char nome[25];
    int idade;
    float altura;
    //sintaxe scanf
    //scanf("%formato1" "%formato2", &variavel1, variavel2 - sem o & se caso for uma string-, ...);

    printf("Digite o seu nome: ");
    fgets(nome, 25, stdin);
    printf("O nome informado é: %s\n", nome);

    printf("Qual a sua idade? ");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);

    printf("Qual a sua altura em metros? ");
    scanf("%f", &altura);
    printf("Você mede %.2fm\n", altura);

    return 0;
}