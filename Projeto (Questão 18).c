#include <stdio.h>
#define TAM_ARRAY 10

int main() {

    float notas[TAM_ARRAY];
    float soma = 0, media;

    //Perguntando as notas, validando a entrada de dados e calculando a soma das notas
    for(int i = 0; i < TAM_ARRAY; i++) {
        printf("Informe a nota do aluno #%d: ", (i + 1));
        scanf("%f", &notas[i]);

        soma += notas[i];

        if(notas[i] < 0 || notas[i] > 10) {
            printf("Por favor, informe uma nota valida (de 0 a 10).\n");
            i--;
        }
    }

   
    printf("Soma das notas da turma: %.1f\n", soma);

    
    media = soma / TAM_ARRAY;

    printf("Media das notas da turma: %.1f\n", media);

    
    float maiorNota = notas[0], menorNota = notas[0];

   
    for(int i = 0; i < TAM_ARRAY; i++) {
        if(notas[i] > maiorNota) {
            maiorNota = notas[i];
        }

        if(notas[i] < menorNota) {
            menorNota = notas[i];
        }
    }

   
    printf("A maior nota e: %.1f\nA menor nota e: %.1f.", maiorNota, menorNota);

    return 0;
}