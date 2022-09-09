#include <stdio.h>
#include <stdlib.h>

int main()
{
    float baseMaior, baseMenor, altura, area;

    printf("Informe a base maior, menor e a altura do trapezio:\n");
    scanf("%f %f %f", &baseMaior, &baseMenor, &altura);

    area = (baseMaior + baseMenor) * altura / 2;

    printf("\nArea do trapezio: %f\n", area);

    return 0;
}
