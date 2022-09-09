#include <stdio.h>

int main()
{
    int r[5], s[10], x[5], c = 0;

    printf("Informe 5 numeros inteiros:\n");

    for(int i = 0; i < 5; i++){

        scanf("%d", &r[i]);
    }

    printf("Informe 10 numeros inteiros:\n");

    for(int i = 0; i < 10; i++){

        scanf("%d", &s[i]);

        for(int j = 0; j < 5; j++){
            
            if(r[j] == s[i]){

                x[c] = r[j];
                c++;
            }
        }
    }

    printf("Vetor resultado:\n");

    for(int i = 0; i < c; i++){

        printf("%d ", x[i]);
    }
    
    return 0;
}