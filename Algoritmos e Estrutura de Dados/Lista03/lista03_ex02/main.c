#include <stdio.h>

int main ()
{
    int num1, num2, soma = 0;

    printf("Informe 2 numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2){
        for(int i = num2; i <= num1; i++){
            soma += i;
        }
    } else {
        for(int i = num1; i <= num2; i++){
            soma += i;
        }
    }

    printf("\nSoma dos numeros: %d\n", soma);

    return 0;
}