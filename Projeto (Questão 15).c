#include <stdio.h>

int main() {

    printf("Numeros pares entre 1 e 50: ");

   
    for (int i = 2; i < 50; i += 2) {
        printf("%d ", i);
    }

    return 0;
}