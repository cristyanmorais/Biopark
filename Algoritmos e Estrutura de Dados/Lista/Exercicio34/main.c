#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado;

    printf("Informe o tamanho do lado do quadrado:\n");
    scanf("%f", &lado);

    printf("\nArea do quadrado: %f\n", lado * lado);

    return 0;
}
