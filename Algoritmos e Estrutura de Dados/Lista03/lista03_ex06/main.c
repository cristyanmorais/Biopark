#include <stdio.h>

int main ()
{
    int idade[20], media = 0;

    printf("Informe a idade de 20 pessoas:\n");

    for(int i = 0; i < 20; i++){
        scanf("%d", &idade[i]);

        media += idade[i];
    }

    media /= 20;

    printf("\nMedia das idades: %d\n", media); 

    return 0;
}