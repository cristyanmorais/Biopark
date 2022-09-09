#include <stdio.h>

int main ()
{
    int num[10], soma = 0;

    printf("Informe 10 numeros:\n");

    for(int i = 0; i < 10; i++){
        scanf("%d", &num[i]);

        soma += num[i];
    }

    printf("\nSoma dos numeros: %d\n", soma);

    return 0;
}