#include <stdio.h>

int main()
{
    int codigo, quantidade;

    printf("Informe o codigo do lanche e a quantidade:\n");
    scanf("%d %d", &codigo, &quantidade);

    switch (codigo)
    {
    case 1:
        printf("\nValor a ser pago: %f", quantidade * 11.0);
        break;
    case 2:
        printf("\nValor a ser pago: %f", quantidade * 8.5);
        break;
    case 3:
        printf("\nValor a ser pago: %f", quantidade * 8.0);
        break;
    case 4:
        printf("\nValor a ser pago: %f", quantidade * 9.0);
        break;
    case 5:
        printf("\nValor a ser pago: %f", quantidade * 10.0);
        break;
    case 6:
        printf("\nValor a ser pago: %f", quantidade * 4.5);
        break;
    default:
        printf("\nCodigo invalido\n");
        break;
    }

    return 0;

    return 0;
}