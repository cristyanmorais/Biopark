#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario = 1200, c1 = 200, c2 = 120;

    c1 *= 1.02;
    c2 *= 1.02;

    salario = salario - c1 - c2;

    printf("Salario restante: %f\n", salario);

    return 0;
}
