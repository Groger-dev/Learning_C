#include <stdio.h>

int main(){

    //Classificador de idade
    int idade;

    /* 
    Criança => todo menor de 12;
    Adolecente => maior ou igual a 12 e menor de 18;
    Adulto => maior ou igual a 18 e menor de 60;
    Idoso => maior ou igual a 60;
    */
    printf("Digite a sua idade: ");
    scanf(" %d", &idade);

    if (idade >= 60 ){
        printf("Você é um idoso! Parabénssssss!\n");
    } else if (idade >=18){
        printf("Você é um adulto -_-\n");
    } else if (idade >= 12){
        printf("Você é um adolescente '~'\n");
    } else {
        printf("Você é FELIZ!!!!! :)\n");
    }
    return 0;
}