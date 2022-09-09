#include <stdio.h>

int main ()
{
    int km, kmPercorrido = 0;

    while(kmPercorrido < 4000) {

        printf("\nInforme quantos kms voce percorreu desde a ultima parada:\n");
        scanf("%d", &km);

        kmPercorrido += km;
    }

    printf("\nVoce percorreu %d kms.\n", kmPercorrido);

    return 0;
}