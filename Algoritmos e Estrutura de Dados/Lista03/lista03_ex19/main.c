#include <stdio.h>

int main ()
{
    float altura, menor = 9999, maior = 0;

    printf("Informe a altura de 15 pessoas:\n");

    for(int i = 0; i < 15; i++){
        scanf("%f", &altura);

        if(altura < menor)
            menor = altura;
        if(altura > maior)
            maior = altura;
    }

    printf("\nMaior altura: %f\nMenor altura: %f\n", maior, menor);

    return 0;
}