#include <stdio.h>

int main(){

    int idade, matricula;
    char nome[50];
    float altura;

    printf("Digite o seu nome completo: \n");
    fgets(nome, 50, stdin);

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite o número da sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Digite a sua altura em metros: \n");
    scanf("%f", &altura);

    printf("%s foi cadastrado com sucesso!\n", nome);
    printf("Matrícula: %d\n", matricula);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2fm\n", altura);
    printf("Seja bem-vindo %s!E bons estudos!\n", nome);

    return 0;
}