#include <stdio.h>
#include <stdlib.h>

int main()
{
    float largura, comprimento, area;

    printf("Escreva a largura do terreno:\n");
    scanf("%f", &largura);

    printf("\nEscreva o comprimento do terreno:\n");
    scanf("%f", &comprimento);

    area = largura * comprimento;

    printf("\nArea do terreno: %f\n", area);

    return 0;
}
