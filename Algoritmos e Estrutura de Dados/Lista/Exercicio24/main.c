#include <stdio.h>
#include <stdlib.h>

int main()
{
    float refresco, litAgua, litMaracuja;

    printf("Informe a quantidade de refresco que sera produzida:\n");
    scanf("%f", &refresco);

    litAgua = 8.0 / 10 * refresco;
    litMaracuja = 2.0 / 10 * refresco;

    printf("\nLitros de agua: %f\nLitros de suco: %f\n", litAgua, litMaracuja);

    return 0;
}
