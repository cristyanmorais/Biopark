#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;

    printf("Informe seu peso:\n");
    scanf("%f", &peso);

    printf("\nPeso em gramas: %f", peso * 1000);

    return 0;
}
