#include <stdio.h>

int main ()
{
    int numeros[20], cont1 = 0, cont2 = 0, cont3 = 0;

    printf("Informe 20 numeros:\n");

    for(int i = 0; i < 20; i++){
        scanf("%d", &numeros[i]);

        if(numeros[i] > 0 && numeros[i] <= 100)
            cont1++;
        if(numeros[i] > 100 && numeros[i] <= 200)
            cont2++;
        if(numeros[i] > 200)
            cont3++;
    }

    printf("\n%d numeros entre 0 e 100.\n%d numeros entre 101 e 200.\n%d numeros maiores que 200.\n", cont1, cont2, cont3);

    return 0;
}