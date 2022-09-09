#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantBlusas, quantNovelos;
    float novBlusa;

    printf("Informe o numero de roupas feitas:\n");
    scanf("%d", &quantBlusas);
    printf("\nInforme o numero de novelos utilizados:\n");
    scanf("%d", &quantNovelos);

    novBlusa = quantNovelos / quantBlusas;

    printf("\nQuantidade de novelos usados por blusa: %f\n", novBlusa);

    return 0;
}
