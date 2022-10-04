#include <stdio.h>

#define TAM_ARRAY 5

int main() {

    int vetor[TAM_ARRAY];

    printf("Digite 5 numeros inteiros: ");

    
    for(int i = 0; i < TAM_ARRAY; i++) {
        scanf("%d", &vetor[i]);
    }

    
    int maiorNum = vetor[0];

   
    for(int i = 0; i < TAM_ARRAY; i++) {
        if(vetor[i] > maiorNum) {
            maiorNum = vetor[i];
        }
    }

    
    printf("O maior numero e: %d", maiorNum);

    return 0;
}