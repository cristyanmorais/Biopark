#include <stdio.h>

int main()
{
    int v[10], soma = 0, quant = 0, med = 0;

    printf("Informe 10 numeros:\n");

    for(int i = 0; i < 10; i++) {

        scanf("%d", &v[i]);

        if(v[i] < 15)
            soma += v[i];
        if(v[i] == 15)
            quant++;  
        if(v[i] > 15)
            med += v[i]; 
    }

    printf("\nSoma dos elementos menores que 15: %d", soma);
    printf("\nQuantidade de elementos iguais a 15: %d", quant);
    printf("\nMedia dos elementos maiores que 15: %d", med);
    
    return 0;
}