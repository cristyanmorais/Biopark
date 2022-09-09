#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salMin, salario;

    printf("Informe seu salario e o salario minimo:\n");
    scanf("%f %f", &salario, &salMin);

    printf("\nVoce ganha %f salarios minimos.\n", salario / salMin);
    return 0;
}
