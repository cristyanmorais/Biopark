#include <stdio.h>

int main ()
{
    int numeros[20], cont = 0;

    printf("Informe 20 numeros:\n");

    for(int i = 0; i < 20; i++){
        scanf("%d", &numeros[i]);

        if(numeros[i] > 0 && numeros[i] <= 100)
            cont++;
    }

    printf("\n%d numeros entre 0 e 100.\n", cont);

    return 0;
}