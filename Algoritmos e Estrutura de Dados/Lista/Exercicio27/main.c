#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;

    printf("Informe 2 numeros:\n");
    scanf("%f %f", &num1, &num2);

    printf("\n%f / %f = %f\n", num1, num2, num1/num2);

    return 0;
}
