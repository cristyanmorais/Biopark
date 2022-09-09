#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, vendas, comissao;

    printf("Informe o salario e o valor de vendas:\n");
    scanf("%f %f", &salario, &vendas);

    comissao = vendas * 0.04;

    printf("\nComissao: %f\nSalario final: %f", comissao, comissao + salario);

    return 0;
}
