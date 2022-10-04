#include <stdio.h>

int main() {

    int numAlunos, numAlunas, totalAlunos;

    
    printf("Informe a quantidade de alunas: ");
    scanf("%d", &numAlunas);
    printf("Informe a quantidade de alunos: ");
    scanf("%d", &numAlunos);

    
    totalAlunos = numAlunas + numAlunos;

   
    if(numAlunas > numAlunos) {
        printf("A turma possui mais alunas que alunos e um total de %d alunos.", totalAlunos);
    } else if (numAlunos > numAlunas) {
        printf("A turma possui mais alunos que alunas.");
    } else {
        printf("A turma possui um numero igual de alunos e alunas");
    }

    return 0;
}
