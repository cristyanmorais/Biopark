#include <stdio.h>

int main()
{
    int num1;

    printf("Informe 1 numero inteiro:\n");
    scanf("%d", &num1);

    if((num1 % 2) == 0)
        printf("\nO numero e par.\n");
    else
        printf("\nO numero e impar.\n");

    return 0;
}