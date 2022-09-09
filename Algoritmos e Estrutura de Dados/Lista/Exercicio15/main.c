#include <stdio.h>
#include <stdlib.h>

int main()
{
    float conta, felipe;
    int carlos, andre;

    printf("Informe o valor da conta:\n");
    scanf("%f", &conta);

    carlos = conta / 3;
    andre = carlos;
    felipe = conta - carlos * 2;

    printf("\nValor a ser pago por Carlos: %d\nValor a ser pago por Andre: %d\nValor a ser pago por Felipe: %f", carlos, andre, felipe);

    return 0;
}
