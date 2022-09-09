#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char especie;
    int animais = 0, cachorro = 0, gato = 0;

    printf ("Informe o numero de animais:\n");
    scanf("%d", &animais);
    fflush(stdin);

    for(int i = 0; i < animais; i++){
        printf("\nInforme a especie(c ou g):\n");
        scanf("%c", &especie);
        fflush(stdin);

        if(especie == 'c')
            cachorro++;
        if(especie == 'g')
            gato++;
    }

    printf("\nQuantidade de gatos: %d\nQuantidade de cachorros: %d\n", gato, cachorro);

    return 0;
}