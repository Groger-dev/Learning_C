#include <stdio.h>

int main(){

    int opcao;
    float nota1, nota2, media;

    printf("***Boletim por turma***\n");
    printf("1. Calcular a média da turma\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Digite uma opção: ");
    scanf(" %d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("**Calculadora de média**\n");
        printf("Insira a primeira nota: ");
        scanf(" %f", &nota1);
        printf("Insira a segunda nota: ");
        scanf(" %f", &nota2);
        
        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <=10))
        {
            media = (nota1 + nota2) / 2;
            printf("A média é %.2f", media);
        } else {
            printf("Entrada de notas inválidas!\n");
        }
        
        break;
    case 2:
        printf("Insira o valor da média: ");
        scanf(" %f", &media);
        media >= 6 ? printf("Aprovado!\n")  : printf("Reprovado!\n");
        
    case 3:
        printf("Saindo...\n");

    default:
        break;
    }
    return 0;
}