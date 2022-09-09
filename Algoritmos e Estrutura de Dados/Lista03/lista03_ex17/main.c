#include <stdio.h>

int main ()
{
    float peso = 1, bebida = 1, total;

    while(peso != 0.0 && bebida != 0.0){
        printf("Informe o peso do prato e o valor das bebidas:\n", peso);
        scanf("%f %f", &peso, &bebida);

        if(peso == 0.0 && bebida == 0.0)
            break;
        
        total += (bebida + (peso * 23.59));
    }

    printf("\nTotal gasto: %f\n", total);

    return 0;
}