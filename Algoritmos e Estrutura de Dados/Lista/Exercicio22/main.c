#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant1, quant5, quant10, quant25, quant50, quant100;
    float total;

    printf("Informe a quantidade de moedas de 1, 5, 10, 25, 50 centavos e 1 real:\n");
    scanf("%d %d %d %d %d %d", &quant1, &quant5, &quant10, &quant25, &quant50, &quant100);

    total = quant1 * 0.01 + quant5 * 0.05 + quant10 * 0.1 + quant25 * 0.25 + quant50 * 0.5 + quant100;

    printf("\nValor total no cofre: %f\n", total);

    return 0;
}
