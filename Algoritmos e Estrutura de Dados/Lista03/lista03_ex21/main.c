#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int mesaFumantes = 25, mesaNao = 25;
    char mesa;

    while(mesaNao != 0 || mesaFumantes != 0){

        printf("\nInforme a mesa que deseja(f ou n):\n");
        scanf("%c", &mesa);

        fflush(stdin);
        
        if(mesa == 'f')
            --mesaFumantes;
        if(mesa == 'n')
            --mesaNao;

        printf("\nMesas de fumante restantes: %d\nMesa de nao fumantes restantes: %d\n", mesaFumantes, mesaNao);
    }

    return 0;
}