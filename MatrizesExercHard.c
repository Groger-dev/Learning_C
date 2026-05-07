#include <stdio.h>

#define linha 5
#define coluna 5

int main(){

    int matriz [linha][coluna];
    int found = 0, target = 5;
    int soma = 1;


        //Criação da matriz
        for (int i = 0; i < linha; i++){
            for (int j = 0; j < coluna; j++){
                matriz [i][j] = soma;
                soma++;
                printf("%d ", matriz [i][j]); //Visualização da matriz
            }
            printf("\n");
        }

        //Busca do elemento
        for (int i = 0; i < linha; i++) {
            for (int j = 0; j < coluna; j++) {
                if (matriz [i][j] == target) {
                    printf("O elemento %d foi encontrado no indice %d, %d \n", target, i, j);
                    found = 1;
                    break;
                }
                 
            }
            if (found) break;
        }
        if (!found) {
            printf("O elemento %d não foi encontrado na matriz \n", target);
        }


    return 0;
}