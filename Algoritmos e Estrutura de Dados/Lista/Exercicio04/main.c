#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diasAno = 365, idade, diasTotal;
    char nome[50];

    printf("Digite seu primeiro nome:\n");
    scanf("%s", nome);
    printf("\nDigite sua idade:\n");
    scanf("%d", &idade);

    diasTotal = idade * diasAno;

    printf("\n%s voce ja viveu %d dias.\n", nome, diasTotal);

    return 0;
}
