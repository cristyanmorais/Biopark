#include <stdio.h>
#include <stdlib.h>

int main()
{
    int camisasP, camisasM, camisasG, venda;

    printf("Informe a quantidade de camisetas P:\n");
    scanf("%d", &camisasP);
    printf("\nInforme a quantidade de camisetas M:\n");
    scanf("%d", &camisasM);
    printf("\nInforme a quantidade de camisetas G:\n");
    scanf("%d", &camisasG);

    venda = camisasP * 10 + camisasM * 12 + camisasG * 15;

    printf("\nTotal da venda: %d\n", venda);

    return 0;
}
