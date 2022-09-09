#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, diasPassados;

    printf("Informe o mes:\n");
    scanf("%d", &mes);
    printf("Informe o dia:\n");
    scanf("%d", &dia);

    diasPassados = ((mes - 1) * 30) + dia;

    printf("\nDias passados desde o inicio do ano: %d\n", diasPassados);

    return 0;
}
