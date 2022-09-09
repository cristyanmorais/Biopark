#include <stdio.h>

int main ()
{
    int numero, soma = 0;

    printf ("Informe alguns numeros:\n");

    for(int i = 0; i < 100; i++){
        scanf("%d", &numero);

        if(numero < 0)
            break;

        soma += numero;
    }

    printf("\nSoma: %d\n", soma);

    return 0;
}