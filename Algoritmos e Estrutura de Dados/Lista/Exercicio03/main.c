#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valPaes = 0.12, valBroas = 1.50, vendas, poupanca;
    int numPaes, numBroas;

    printf("Informe o numero de paes vendidos:\n");
    scanf("%d", &numPaes);
    printf("\nInforme o numero de broas vendidas:\n");
    scanf("%d", &numBroas);

    vendas = (numPaes * valPaes) + (numBroas * valBroas);
    poupanca = vendas * 0.1;

    printf("\nValor total de vendas: %f\n", vendas);
    printf("\nValor total a ser guardado: %f\n", poupanca);

    return 0;
}
