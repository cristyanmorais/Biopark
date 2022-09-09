#include <stdio.h>

int main ()
{
    int idade[20], maior = 0;

    printf("Informe a idade de 20 pessoas:\n");

    for(int i = 0; i < 20; i++){
        scanf("%d", &idade[i]);
        
        if(idade[i] >= 18)
            maior++;
    }

    printf("\nPessoas maiores de idade: %d\n", maior); 

    return 0;
}