#include <stdio.h>

int main()
{
    int a[10], b[10], c[10];

    printf("Informe 10 numeros:\n");

    for(int i = 0; i < 10; i++){
        
        scanf("%d", &a[i]);
    }

    printf("Informe 10 numeros:\n");

    for(int i = 0; i < 10; i++){
        
        scanf("%d", &b[i]);

        c[i] = a[i] + b[i];
    }

    printf("Vetor resultante:\n");

    for(int i = 0; i < 10; i++){

        printf("%d ", c[i]);
    }
    
    return 0;
}