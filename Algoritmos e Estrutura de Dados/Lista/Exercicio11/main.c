#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diasUsuario, anos, meses, dias;

    printf("Informe a quantidade de dias sem acidentes:\n");
    scanf("%d", &diasUsuario);

    if(diasUsuario < 30){
        printf("\nSe passaram %d dia(s) sem acidentes.\n", diasUsuario);
    } else if(diasUsuario < 365){
        meses = diasUsuario / 30;
        dias = diasUsuario % 30;

        printf("\nSe passaram %d mes(es) e %d dia(s) sem acidentes.\n", meses, dias);
    } else{
        anos = diasUsuario / 365;
        dias = diasUsuario % 365;

        if(dias > 30){
            meses = dias / 30;
            dias %= 30;

            printf("\nSe passaram %d ano(s), %d mes(es) e %d dia(s) sem acidentes.\n", anos, meses, dias);
        } else{
            printf("\nSe passaram %d ano(s) e %d dia(s) sem acidentes.\n", anos, dias);
        }
    }

    return 0;
}
