#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Escreva a 1a nota:\n");
    scanf("%f", &nota1);
    printf("\nEscreva a 2a nota:\n");
    scanf("%f", &nota2);
    printf("\nEscreva a 3a nota:\n");
    scanf("%f", &nota3);

    media = (nota1 * 1 + nota2 * 2 + nota3 * 3) / 6;

    printf("\nMedia das notas: %f\n", media);

    return 0;
}
