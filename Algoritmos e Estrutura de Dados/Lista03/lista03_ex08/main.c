#include <stdio.h>

int main ()
{
    int idade, menor = 9999;
    char nome[20], menorNome[20];

    printf("Informe seu nome e depois sua idade\n");

    for(int i = 0; i < 10; i++){
        fgets(nome, 20, stdin);
        scanf("%d", &idade);
        
        fflush(stdin);

        if(idade < menor){
            menor = idade;
            for(int j = 0; j < sizeof(nome); j++){
                menorNome[j] = nome[j];
            }
        }
    }

    printf("\nMenor nome: %s\n", menorNome);

    return 0;
}