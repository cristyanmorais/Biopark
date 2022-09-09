#include <stdio.h>

int main ()
{
    int numeros[20], cont = 0;

    printf("Informe 20 numeros:\n");

    for(int i = 0; i < 20; i++){
        scanf("%d", &numeros[i]);

        if(numeros[i] % 2 == 0)
            cont++;
    }

    printf("\n%d numeors sao pares.\n", cont);

    return 0;
}