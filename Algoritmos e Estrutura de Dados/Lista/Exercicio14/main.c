#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio, pi = 3.14, area;

    printf("Informe o raio da pizza:\n");
    scanf("%f", &raio);

    area = pi * raio * raio;

    printf("\nValor da area: %f", area);

    return 0;
}
