#include <stdio.h>

#define TAM_ARRAY 10

int main() {

    int numeros[TAM_ARRAY];
    int soma = 0, subtra = 0;

    for(int i = 0; i < TAM_ARRAY; i++) {
        printf("Digite o numero do indice %d da lista: ", i);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < TAM_ARRAY; i++) {
        if(i % 2 == 0) {
            soma += numeros[i];
        } else {
            if(subtra == 0) {
                
                subtra = numeros[i];
            } else {
                subtra -= numeros[i];
            }
        }
    }

    printf("Soma dos numeros nos indices pares: %d\n", soma);
    printf("Subtracao dos numeros nos indices impares: %d\n", subtra);

    return 0;
}