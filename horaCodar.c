#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    float media;

    printf("*** Programa de Cálculo de Média ***\n");

    printf("Insira a primeira nota: ");
    scanf(" %f", &nota1);

    printf("Insira a segunda nota: ");
    scanf(" %f", &nota2);

    printf("Insira a terceira nota: ");
    scanf(" %f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média dos três alunos é igual a: %.2f\n", media);

    return 0;
}