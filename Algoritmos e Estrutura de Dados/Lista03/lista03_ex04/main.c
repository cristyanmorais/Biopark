#include <stdio.h>

int main ()
{
    char nome[50];
    int numero;

    printf("Informe seu nome:\n");
    fgets(nome, 50, stdin);
    printf("Informe um numero:\n");
    scanf("%d", &numero);

    for(int i = 0; i < numero; i++){
        puts(nome);
    }

    return 0;
}