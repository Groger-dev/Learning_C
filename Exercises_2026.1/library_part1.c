//======================================================================================
//
//  Prática de linguagem C
//  Sistema de Biblioteca - Parte I
//
//  Objetivo desta parte:
//  Implementar o cadastro e a listagem de livros usando um array estático.
//  Structs, entrada/saída de dados e boas práticas.
//
//======================================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strcspn()

// --- Constantes Globais ---
#define MAX_LIVROS 50
#define TAM_STRING 100

// --- Definição da estrutura (Struct) ---
struct Livro {
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
};

// --- Função para limpar o buffer de entrada ---
void limparBufferEntrada(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
};

// --- Função principal (main) ---
int main(){
    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

    // --- Laço principal do menu ---
    do {

        //Exibe o menu de opções
        printf("====================================\n");
        printf("           SYS LIBRARY 1.0          \n");
        printf("====================================\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - Listar todos os livros\n");
        printf("0 - Sair\n");
        printf("------------------------------------\n");
        printf("Escolha uma opção: ");

        // Lê a opção escolhida
        scanf("%d", &opcao);
        limparBufferEntrada();// Limpa o '\n' deixado pelo scanf

        // --- Processamento da opção ---
        switch (opcao) {
            case 1: //Cadastrar livro
                printf(" --- Cadastro de novo livro --- \n\n");
            
                if(totalLivros < MAX_LIVROS) {
                    printf("Digite o nome do livro: ");
                    fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);

                    printf("Digite o nome do autor: ");
                    fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);

                    printf("Digite o nome da editora: ");
                    fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);

                    biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] = '\0';
                    biblioteca[totalLivros].autor[strcspn(biblioteca[totalLivros].autor, "\n")] = '\1';
                    biblioteca[totalLivros].editora[strcspn(biblioteca[totalLivros].editora, "\n")] = '\2';

                    printf("Digite o número da edição: ");
                    scanf("%d", &biblioteca[totalLivros].edicao);
                    limparBufferEntrada();

                    totalLivros++;

                    printf("\nLivro cadastrado com sucesso!\n");
                } else {
                    printf("Acervo cheio, não há mais espaço para livros.\n");
                }

                printf("Pressione Enter para continuar...");
                getchar();// Pausa para o usuário ler a mensagem antes de voltar ao menu
                break;

            case 2: //Listar todos os livros
                printf(" --- Listar todos os livros ---\n\n");

                if(totalLivros == 0){
                    printf("Não exite livro cadastrado.\n");
                } else{
                    for(int i = 0; i < totalLivros; i++) {
                        printf("-----------------------------------------\n");
                        printf("Livro %d\n", i + 1);
                        printf("Nome: %s\n", biblioteca[i].nome);
                        printf("Autor: %s\n", biblioteca[i].autor);
                        printf("Editora: %s\n", biblioteca[i].editora);
                        printf("Edição: %d\n", biblioteca[i].edicao);
                }
                    printf("-------------------------------------------\n");
                    
                //A pausa é essencial para que o usuário veja a lista antes
                //do próximo loop limpar a tela
                printf("Pressione Enter para continuar...");
                getchar();
                break;
            
            case 0: //Sair
                printf("\nSaindo do sistema...\n");
                break;
            
            default: //Opção inválida
                printf("\nOpção inválida! Tente novamente\n");                
                printf("Pressione Enter para continuar...");
                getchar();
                break; 
            }
        }

    } while (opcao != 0);

    return 0; //Fim do programa
} 