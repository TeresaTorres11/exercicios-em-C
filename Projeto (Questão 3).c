#include <stdio.h>

int main() {

    int decimal;

    printf("Digite um numero inteiro decimal: ");
    scanf("%d", &decimal);

    printf("%d corresponde a %X em hexadecimal\n", decimal, decimal);
    printf("%d corresponde a %o em octal\n", decimal, decimal);

    return 0;
}