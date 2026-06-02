#include <stdio.h>

int main(){

    for (int i = 0; i < 10; i++){
        
        if(i == 5) continue; //Pula a interação quando i for igual a 5;
        if(i == 8) break; //Sai do loop quando i for igual a 8;

        printf("%d \n", i);
    }


    return 0;
}