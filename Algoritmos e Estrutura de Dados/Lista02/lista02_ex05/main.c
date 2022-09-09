#include <stdio.h>

int main()
{
    int num1;

    printf("Informe um numero:\n");
    scanf("%d", &num1);

    if(num1 % 2 == 0)
        printf("Resultado: %d\n", num1 + 5);
    else
        printf("\nResultado: %d\n", num1 + 8);

    return 0;
}