#include <stdio.h>

int main()
{
    int num1, num2, resultado;

    printf("Informe 2 numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);

    if(num1 == num2)
        resultado = num1 + num2;
    else
        resultado = num1 * num2;

    printf("Resultado: %d\n", resultado);

    return 0;
}