#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant350, quant600, quant2l;
    float litros;

    printf("Informe quantas latas de 350ml foram compradas:\n");
    scanf("%d", &quant350);
    printf("\nInforme quantas garrafas de 600ml foram compradas:\n");
    scanf("%d", &quant600);
    printf("\nInforme quantas garrafas de 2L foram compradas:\n");
    scanf("%d", &quant2l);

    litros = quant350 * 0.35 + quant600 * 0.6 + quant2l * 2;

    printf("\nQuantidade total de litros comprados: %f\n", litros);

    return 0;
}
