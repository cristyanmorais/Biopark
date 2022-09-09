#include <stdio.h>

int main()
{
    int a[8], b[8];

    printf("Informe 8 numeros:\n");

    for (int i = 0; i < 8; i++){

        scanf("%d", &a[i]);

        b[i] = a[i] * 2;
    }

    printf("\nVetor B:\n");

    for(int i = 0; i < 8; i++){

        printf("%d ", b[i]);
    }
    
    return 0;
}