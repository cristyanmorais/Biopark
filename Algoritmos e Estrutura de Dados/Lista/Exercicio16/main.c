#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sanduiches;
    float quantQueijo, quantPresunto, quantHamburguer;

    printf("Informe a quantidade de sanduiches:\n");
    scanf("%d", &sanduiches);

    quantQueijo = sanduiches * 0.05 * 2;
    quantPresunto = sanduiches * 0.05;
    quantHamburguer = sanduiches * 0.1;

    printf("\nQuantidade necessaria de queijo: %f KG\nQuantidade necessaria de presunto: %f KG\nQuantidade necessaria de hamburguer: %f KG\n", quantQueijo, quantPresunto, quantHamburguer);

    return 0;
}
