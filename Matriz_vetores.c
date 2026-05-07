#include <stdio.h>

int main(){

    int index;

    char * alunos [3][3] = {
        {"Aluno0", "Pt: 45", "Mat: 87"},
        {"Aluno1", "Pt: 78", "Mat: 52"},
        {"Aluno2", "Pt: 49", "Mat: 98"}
    };

    printf("Para vizualizar a nota de um aluno digite o número correspondente \n");
    printf("Aluno0: 0 \n");
    printf("Aluno1: 1 \n");
    printf("Aluno2: 2 \n");

    scanf(" %d", &index);

    printf("A notas do %s são: %s, %s. \n", alunos [index][0], alunos [index][1], alunos [index][2]);

    return 0;
}