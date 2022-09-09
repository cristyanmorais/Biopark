#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempCelsius, tempFahrenheit;

    printf("Informe a temperatura em celsius:\n");
    scanf("%f", &tempCelsius);

    tempFahrenheit = tempCelsius * 1.8 + 32;

    printf("\nTemperatura em fahrenheit: %f\n", tempFahrenheit);

    return 0;
}
