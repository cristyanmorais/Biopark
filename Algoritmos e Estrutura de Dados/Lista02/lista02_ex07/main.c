#include <stdio.h>

int main()
{
    float altura, peso;
    char sexo;

    printf("Informe a sua altura e seu sexo:\n");
    scanf("%f %c", &altura, &sexo);

    if(sexo == 'm' || sexo == 'M')
        peso = (72.7 * altura) - 58;
    if(sexo == 'f' || sexo == 'F')
        peso = (62.1 * altura) - 44.7;

    printf("\nSeu peso ideal e: %f KG\n", peso);

    return 0;
}