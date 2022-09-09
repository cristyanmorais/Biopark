#include <stdio.h>

int main()
{
    int num1, num2, res;

    printf("Informe 2 numeros:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
        res = num1 - num2;
    else if(num1 < num2)
        res = num2 - num1;
    else
        res = 0;

    printf("\nResultado: %d\n", res);

    return 0;
}