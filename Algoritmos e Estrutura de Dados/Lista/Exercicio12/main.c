#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, sal15, salFinal;

    printf("Informe seu salario:\n");
    scanf("%f", &salario);

    sal15 = salario * 1.15;
    salFinal = sal15 * 0.92;

    printf("\nSalario inicial: %f\nSalario com aumento: %f\nSalario final: %f\n", salario, sal15, salFinal);

    return 0;
}
