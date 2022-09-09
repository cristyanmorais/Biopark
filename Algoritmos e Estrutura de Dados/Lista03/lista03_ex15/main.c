#include <stdio.h>

int main ()
{
    int numero, resultado = 1;

    printf("Informe um numero inteiro:\n");
    scanf("%d", &numero);

    for(int i = numero; i > 0; i--){
        resultado *= i;
    }

    printf("\nFatorial de %d: %d\n", numero, resultado);

    return 0;
}