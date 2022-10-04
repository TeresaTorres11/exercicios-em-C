#include <stdio.h>

int main()
{
    float f, c, k;
    
    printf("Informe a temperatura em Graus Fahrenheit: ");
    scanf("%f" , &f);
    
    c = ((f - 32) * 5/90);
    
    printf("Graus Celsius: %f" , c );
    
    printf("\n");
    
     printf("Informe a temperatura em Graus Fahrenheit:");
    
    scanf("%f" , &f);
    
    k = ((f + 459.67) * 5/90);
    
    printf("Graus Kelvin: %f" , k);
    
    printf("\n");

    return 0;
}