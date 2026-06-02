#include <stdio.h>

//Função recursiva para contagem regressiva de n a 1;
void recursiveloop(int n) {
    if(n > 0){
        printf("%d \n", n); //Imprimi o valor atual de n; OBS.: a ordem desse código vai alterar e muito o produto;
        recursiveloop(n - 1); //Chama a si mesma com n - 1;
        //printf("%d \n", n); nesse caso os resultados serão armazenados e dps descompactados na ordem inversa, exibindo 1 2 3 4 5...
    }
}

int main() {
    int numero = 5;
    printf("Contagem regressiva!\n");
    recursiveloop(numero); //Chamada da função e atribuição da variável numero para n;

    return 0;
}