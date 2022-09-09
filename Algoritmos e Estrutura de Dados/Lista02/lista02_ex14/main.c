#include <stdio.h>

int main()
{
    int ano;
    float valor;

    printf("Informe o ano do carro e seu valor:\n");
    scanf("%d %f", &ano, &valor);

    if(ano < 1990)
        valor = (valor * 1.01) - valor;
    else
        valor = (valor * 1.015) - valor;

    printf("\nValor do imposto: %f\n", valor);

    return 0;
}