#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numCavalos, numFerraduras;

    printf("Informe o numero de cavalos do haras:\n");
    scanf("%d", &numCavalos);

    numFerraduras = numCavalos * 4;

    printf("\nNumero de ferraduras necessarias: %d\n", numFerraduras);

    return 0;
}
