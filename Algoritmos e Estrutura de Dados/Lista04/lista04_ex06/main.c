#include <stdio.h>

int main()
{
    int a[10], posMenor, posMaior, maior = 0, menor;

    printf("Informe 10 idades:\n");

    for(int i = 0; i < 10; i++){

        scanf("%d", &a[i]);

        if(i == 0){

            menor = a[i];
            maior = a[i];
            posMenor = i;
            posMaior = i;
        }

        if(a[i] > maior){

            maior = a[i];
            posMaior = i;
        }

        if(a[i] < menor){

            menor = a[i];
            posMenor = i;
        }
    }

    printf("\nMaior idade: %d, na posicao %d.\n", maior, posMaior);
    printf("Menor idade: %d, na posicao %d.\n", menor, posMenor);
    
    return 0;
}