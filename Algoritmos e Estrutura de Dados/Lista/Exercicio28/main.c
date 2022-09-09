#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, med;

    printf("Informe 2 notas:\n");
    scanf("%f %f", &nota1, &nota2);

    med = (nota1 * 2 + nota2 * 3) / 5;

    printf("\nMedia ponderada das notas: %f\n", med);

    return 0;
}
