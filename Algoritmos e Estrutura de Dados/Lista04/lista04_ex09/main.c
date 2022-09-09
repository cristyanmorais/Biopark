#include <stdio.h>

int main()
{
    int d[10], c = 0, tam;

    for(int i = 0; i < 10; i++){
        
        scanf("%d", &d[i]);
    }

    for(int i = 0; i < 10; i++){

        if(d[i] <= 0){
            for(int j = i; j < 10; j++){
                d[j] = d[j + 1];
            }

            i--;
            c++;
        }
    }

    tam = 10 - c;

    for(int i = 0; i < tam; i++){

        printf("%d ", d[i]);
    }

    return 0;
}