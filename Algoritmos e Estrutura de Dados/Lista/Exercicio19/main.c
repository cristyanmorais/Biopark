#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantFrango;
    float total;

    printf("Informe a quantidade de frangos:\n");
    scanf("%d", &quantFrango);

    total = quantFrango * (4 + 2 * 3.5);

    printf("\nTotal gasto com aneis: %f\n", total);

    return 0;
}
