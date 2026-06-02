#include <stdio.h>

int main(){

    int tabuleiroCone [7][7], tabuleiroCruz [7][7], tabuleiroOctaedro [7][7], tabuleiroJogo [10][10];
    
    printf("**Cone** \n");
    printf("   A B C D E F G \n");
    
    for (int i = 0; i < 7; i++){
        printf("%d  ", i + 1);
        for(int j = 0; j < 7; j++){

            if(i == 2 && j == 3){
                tabuleiroCone [i][j] = 1;
            
            } else if ((i == 3) && (j > 1 && j < 5)){
                tabuleiroCone [i][j] = 1;

            } else if ((i == 4) && (j > 0 && j < 6)){
                tabuleiroCone [i][j] = 1;
           
            } else {
                tabuleiroCone [i][j] = 0;

            }

            printf("%d ", tabuleiroCone [i][j]);
        }

        
        printf("\n");        
    }
    printf("\n");        
    
    printf("**Cruz** \n");
    printf("   A B C D E F G \n");
    
    for (int i = 0; i < 7; i++){
        printf("%d  ", i + 1);
        for(int j = 0; j < 7; j++){

            if((i > 1 && i < 5) && (j == 3)){
            
                tabuleiroCruz [i][j] = 1;
            
            } else if ((i == 3) && (j > 0 && j < 6)){
                tabuleiroCruz [i][j] = 1;
            
            } else {
                tabuleiroCruz [i][j] = 0;

            }

            printf("%d ", tabuleiroCruz [i][j]);
        }

        
        printf("\n");        
    }
    printf("\n");        
    
    printf("**Octaedro** \n");
    printf("   A B C D E F G \n");
    
    for (int i = 0; i < 7; i++){
        printf("%d  ", i + 1);
        for(int j = 0; j < 7; j++){

            if((i > 1 && i < 5) && (j == 3)){
                tabuleiroOctaedro [i][j] = 1;
            
            } else if ((i == 3) && (j > 1 && j < 5)){
                tabuleiroOctaedro [i][j] = 1;
            
            } else {
                tabuleiroOctaedro [i][j] = 0;

            }

            printf("%d ", tabuleiroOctaedro [i][j]);
        }

        
        printf("\n");        
    }
    printf("\n");        
    
    printf("### Tabuleiro do jogo ### \n");  
    printf("   A B C D E F G H I J  \n"); //orientação das colunas

    //loop externo controla o eixo vertical (variável i);
    /*
    for (int i = 0; i < 10; i++){

            printf("%d  ", i + 1); //orientação das linhas

        //loop interno controla o eixo horizontal (variável j);
        for (int j = 0; j < 10; j++){
            if ((i > 2 && i < 6) && (j == 8)){ //coordenadas do primeiro navio (vertical).
                
                tabuleiroJogo [i][j] = 3; //3 marca a posição do primeiro navio.

            } else if ((j > 4 && j < 8) && (i == 5)){ //coordenadas do segundo navio (horizontal).

                tabuleiroJogo [i][j] = 3; //3 marca a posição do segundo navio.

            } else if ((i == j) && (i >= 0 && i < 3)){ // i == j indica a posição do navio na diagonal central (do canto superior esquerdo ao canto inferior direito) e i > 0 indica o início (B2) e i < 4o fim do navio (D4).

                tabuleiroJogo [i][j] = 3; //3 marca a posição do terceiro navio.

            } else if ((i + j == 8) && (j > 5 && j < 9)){ // i + j == 8 indica a diagonal (A9 -> I1) escolhida para o quarto navio. j > 5 indica o início do navio (G3) e j < 9 o fim (I1).
            
                tabuleiroJogo [i][j] = 3; //3 marca a posição do quarto navio.
                        
            } else {

                tabuleiroJogo [i][j] = 0; // 0 indica a água.
            
            } 
        }
    }    
    */
    
    
        //Loops para inserir as posições das habilidades no tabuleiro
        for (int i = 0; i < 10; i++){

            printf("%d  ", i + 1); //orientação das linhas

            //loop interno controla o eixo horizontal (variável j);
            for (int j = 0; j < 10; j++){
               
                if ((i > 2 && i < 6) && (j == 8)){ //coordenadas do primeiro navio (vertical).
                
                tabuleiroJogo [i][j] = 3; //3 marca a posição do primeiro navio.

            } else if ((j > 3 && j < 7) && (i == 5)){ //coordenadas do segundo navio (horizontal).

                tabuleiroJogo [i][j] = 3; //3 marca a posição do segundo navio.

            } else if ((i == j) && (i >= 0 && i < 3)){ // i == j indica a posição do navio na diagonal central (do canto superior esquerdo ao canto inferior direito) e i > 0 indica o início (B2) e i < 4o fim do navio (D4).

                tabuleiroJogo [i][j] = 3; //3 marca a posição do terceiro navio.

            } else if ((i + j == 8) && (j > 5 && j < 9)){ // i + j == 8 indica a diagonal (A9 -> I1) escolhida para o quarto navio. j > 5 indica o início do navio (G3) e j < 9 o fim (I1).
            
                tabuleiroJogo [i][j] = 3; //3 marca a posição do quarto navio.


            //Coordenadas das áreas atingidas  
            }else if(i == 2 && j == 3){ //cone
                
                tabuleiroJogo [i][j] = 5;
            
            } else if ((i == 3) && (j > 1 && j < 5)){
                
                tabuleiroJogo [i][j] = 5;

            } else if ((i == 4) && (j > 0 && j < 6)){
                
                tabuleiroJogo [i][j] = 5;

            } else if ((i > 5 && i < 9) && (j == 7)){ //cruz
            
                tabuleiroJogo [i][j] = 5;
            
            } else if ((i == 7) && (j > 4 && j < 10)){
                
                tabuleiroJogo [i][j] = 5;

            } else if((i > 5 && i < 9) && (j == 1)){ //octaedro
                
                tabuleiroJogo [i][j] = 5;
            
            } else if ((i == 7) && (j >= 0 && j < 3)){
                
                tabuleiroJogo [i][j] = 5;
                                   
            } else {

                tabuleiroJogo [i][j] = 0; // 0 indica a água

            }
                printf("%d ", tabuleiroJogo [i][j]); // impressão da posição dos navios (3), área atingida pelas habilidades (5) e a água (0)
            }
            printf("\n"); //organizando as linhas para montar a tabela
        }


    return 0;
}