#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantHoras, quantHoExtra;
    float liquido, bruto;

    printf("Informe a quantidade de horas trabalhadas:\n");
    scanf("%d", &quantHoras);
    printf("\nInforme a quantidade de horas extras trabalhadas:\n");
    scanf("%d", &quantHoExtra);

    bruto = quantHoras * 10 + quantHoExtra * 15;
    liquido = bruto * 0.9;

    printf("\nSalario bruto: %f\nSalario liquido: %f\n", bruto, liquido);

    return 0;
}
