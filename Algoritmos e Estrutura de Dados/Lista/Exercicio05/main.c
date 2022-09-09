#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valGasolina, valDisponivel, litColocados;

    printf("Informe o valor do litro de gasolina:\n");
    scanf("%f", &valGasolina);
    printf("\nInforme o valor que sera gasto:\n");
    scanf("%f", &valDisponivel);

    litColocados = valDisponivel / valGasolina;

    printf("\nQuantidade de litros colocados: %f\n", litColocados);

    return 0;
}
