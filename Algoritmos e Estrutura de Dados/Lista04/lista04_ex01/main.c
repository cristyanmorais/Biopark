#include <stdio.h>

int main()
{
    int v1[10], v2[10], v3[10];

    printf("Escreva 10 numeros:\n");

    for(int i = 0; i < 10; i++){

        scanf("%d", &v1[i]);
    }

    printf("Escreva 10 numeros:\n");

    for(int i = 0; i < 10; i++){

        scanf("%d", &v2[i]);
    }

    printf("\nVetor resultado:\n");

    for(int i = 0; i < 10; i++){
        printf("%d ", v1[i] + v2[i]);
    }
    
    return 0;
}