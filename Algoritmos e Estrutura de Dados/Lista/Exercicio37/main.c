#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i;

    printf("Informe um numero:\n");
    scanf("%d", &numero);

    printf("\nTabuada do %d", numero);

    for(i = 1; i < 11; i++){
        printf("\n%d * %d = %d", numero, i, numero * i);
    }

    return 0;
}
