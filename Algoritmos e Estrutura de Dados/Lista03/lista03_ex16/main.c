#include <stdio.h>

int main ()
{
    int produtos;

    printf ("Informe o numero de produtos comprados:\n");
    scanf ("%d", &produtos);
    printf ("\nInforme o preco de cada produto:\n");

    float precos[produtos], soma = 0;

    for(int i = 0; i < produtos; i++){
        scanf("%f", &precos[i]);

        soma += precos[i];
    }

    printf("\nPreco total: %f\n", soma);

    return 0;
}