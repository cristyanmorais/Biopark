#include <stdio.h>

int main ()
{
    char nome[50];

    printf("Informe seu nome:\n");
    fgets(nome, 50, stdin);

    for(int i = 0; i < 10; i++){
        puts(nome);
    }

    return 0;
}