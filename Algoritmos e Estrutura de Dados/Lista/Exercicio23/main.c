#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altPessoa, altPredio, sombPessoa, sombPredio;

    printf("Informe a sua altura em metros, tamanho de sua sombra e o tamanho da sombra do predio:\n");
    scanf("%f %f %f", &altPessoa, &sombPessoa, &sombPredio);

    altPredio = (sombPredio * altPessoa) / sombPessoa;

    printf("\nAltura do predio: %f", altPredio);

    return 0;
}
