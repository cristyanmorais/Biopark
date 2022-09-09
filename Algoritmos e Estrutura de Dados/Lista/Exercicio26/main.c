#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3;

    printf("Informe 3 numeros:\n");
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("\n%f * %f * %f = %f\n", num1, num2, num3, num1 * num2 * num3);

    return 0;
}
