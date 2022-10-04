#include <stdio.h>

int main() {

    
    float precoProduto, precoInflacionado;


    printf("Qual o valor do produto? ");
    scanf("%f", &precoProduto);

    
    switch ((int)(precoProduto / 100)) {
        case 0:
            precoInflacionado = precoProduto + (precoProduto * 10 / 100);
            printf("O valor final do produto e: %.2f.", precoInflacionado);
            break;
        default:
            precoInflacionado = precoProduto + (precoProduto * 20 / 100);
            printf("O valor final do produto e: %.2f.", precoInflacionado);
    }

    return 0;
}