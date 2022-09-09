#include <stdio.h>

int main()
{
    int v[20], par = 0, impar = 0, m50 = 0, m7 = 0;

    printf("Informe 20 numeros:\n");

    for(int i = 0; i < 20; i++){
   
        scanf("%d", &v[i]);

        if((v[i] % 2) == 0)
            par++;
        else
            impar++;

        if(v[i] > 50)
            m50++;
        if(v[i] < 7)
            m7++;   
    }

    printf("\nNumeros impares: %d", impar);
    printf("\nNumeros pares: %d", par);
    printf("\nNumeros maiores que 50: %d", m50);
    printf("\nNumeros menores que 7: %d", m7);
    
    return 0;
}