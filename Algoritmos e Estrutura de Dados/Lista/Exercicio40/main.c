#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1, lado2, hipotenusa;

    printf("Informe o valor dos 2 lados do triangulo:\n");
    scanf("%d %d", &lado1, &lado2);

    hipotenusa = lado1 * lado1 + lado2 * lado2;

    printf("\nValor da hipotenusa: %d\n", hipotenusa);

    return 0;
}
