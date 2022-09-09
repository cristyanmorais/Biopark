#include <stdio.h>

int main()
{
    int num1;

    printf("Informe um numero:\n");
    scanf("%d", &num1);

    if(num1 >= 0)
        printf("Resultado: %d\n", num1 * 2);
    else
        printf("\nResultado: %d\n", num1 * 3);

    return 0;
}