#include <stdio.h>

int main(){

    int opcao;
    float saldo = 3000, deposito, saque;

    printf("Olá, vamos iniciar o seu atendimento?\n");
    printf("1. Visualizar seu saldo.\n");
    printf("2. Depositar um valor.\n");
    printf("3. Sacar uma quantia.\n");
    printf("Digite o número da sua opção de atendimento: ");
    scanf(" %d", &opcao);
    

    switch (opcao)
    {
    case 1:
        printf("Seu saldo é R$ %.2f\n", saldo);
        break;
    
    case 2:
        printf("Digite o valor do depósito: ");
        scanf(" %f", &deposito);
        printf("R$ %.2f foram depositados na sua conta!\n", deposito);
        break;
    case 3:
        printf("Quanto você deseja sacar?\n");
        scanf(" %f", &saque);
        printf("Você sacou R$ %.2f da sua conta", saque);
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
}