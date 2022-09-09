#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diaMaior, diaMenor;

    printf("Informe a diagonal maior e menor do trapezio:\n");
    scanf("%f %f", &diaMaior, &diaMenor);

    printf("\nArea do trapezio: %f\n", (diaMaior * diaMenor) / 2);

    return 0;
}
