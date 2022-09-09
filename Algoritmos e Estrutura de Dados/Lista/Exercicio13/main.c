#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, centena, dezena, unidade;

    printf("Informe um numero de 3 digitos:\n");
    scanf("%d", &numero);

    centena = numero / 100;
    numero %= 100;
    dezena = numero / 10;
    unidade = numero % 10;

    printf("\nCentena : %d\nDezena: %d\nUnidade: %d\n", centena, dezena, unidade);

    return 0;
}
