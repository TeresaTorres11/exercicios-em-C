#include <stdio.h>

int main() {

    
    int tempFahrenheit = 104;
    float tempCelsius;

    printf("tF\ttC\n");

    
    for(tempFahrenheit, tempCelsius; tempCelsius < 75; tempFahrenheit++) {
        tempCelsius = (tempFahrenheit - 32.0) * (5.0 / 9.0);
        printf("%d\t%.1f\n", tempFahrenheit, tempCelsius);
    }

    return 0;
}