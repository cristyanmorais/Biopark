#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, peso20, peso15;

    printf("Informe o seu peso:\n");
    scanf("%f", &peso);

    peso20 = peso * 0.8;
    peso15 = peso * 1.15;

    printf("\nNovo peso se engordar 15%%: %f\nNovo peso se emagrecer 20%%: %f\n", peso15, peso20);

    return 0;
}
