#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoProduto;

    printf("Informe o preco do produto:\n");
    scanf("%f", &precoProduto);

    precoProduto *= 0.9;

    printf("\nNovo valor do produto: %f\n", precoProduto);

    return 0;
}
