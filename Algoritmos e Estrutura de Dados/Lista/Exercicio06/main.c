#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoKg = 12.0, pesoPrato, valorPago;

    printf("Informe o peso do prato em KG:\n");
    scanf("%f", &pesoPrato);

    valorPago = precoKg * pesoPrato;

    printf("\nValor do prato: %f\n", valorPago);

    return 0;
}
