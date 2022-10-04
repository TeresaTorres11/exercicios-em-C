#include <stdio.h>
#include <math.h>

int main() {

    
    int num1, num2;
    int soma, produtoPeloQuadradoDoSegundo, quadradoDoPrimeiro, moduloDoPrimeiro;
    double raizDaSomaDosQuadrados, senoDiferenca;

    

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    

    soma = num1 + num2;
    produtoPeloQuadradoDoSegundo = num1 * ceil((pow(num2, 2)));
    quadradoDoPrimeiro = ceil(pow(num1, 2));
    raizDaSomaDosQuadrados = sqrt((ceil(pow(num1, 2))) + (ceil(pow(num2, 2))));
    senoDiferenca = sin(num1 - num2);

    
    moduloDoPrimeiro = sqrt(pow(num1, 2));

  
    printf("Soma: %d\n", soma);
    printf("Produto do Primeiro pelo Quadrado do Segundo: %d\n", produtoPeloQuadradoDoSegundo);
    printf("Quadrado do Primeiro: %d\n", quadradoDoPrimeiro);
    printf("Raiz Quadrada da Soma dos Quadrados: %lf\n", raizDaSomaDosQuadrados);
    printf("Seno da Diferenca do Primeiro pelo Segundo: %lf\n", senoDiferenca);
    printf("Modulo do Primeiro: %d\n", moduloDoPrimeiro);

    return 0;
}
