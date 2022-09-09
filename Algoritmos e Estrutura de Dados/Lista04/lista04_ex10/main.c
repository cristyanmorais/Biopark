#include <stdio.h>

int main(){

    int v[10], i, j, aux;    

    printf("Informe 10 numeros:\n");

    for(i = 0; i < 10; i++)

        scanf("%d", &v[i]);

    for(i = 0; i < 10 - 1; i++){       

        for(j = 0; j < 10 - i - 1; j++){          

            if(v[j] > v[j + 1]){               

                aux = v[j];

                v[j] = v[j + 1];

                v[j + 1] = aux;

            }

        }

    }

    printf("Vetor ordenado:\n");

    for(i = 0; i < 10; i++){

        printf("%d  ", v[i]);

    }

    return 0;

}