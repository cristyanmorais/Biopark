#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio, altura, pi = 3.14, volume;

    printf("Informe o raio e a altura:\n");
    scanf("%f %f", &raio, &altura);

    volume = raio * raio * pi * altura;

    printf("\nVolume da caixa d'agua: %f", volume);

    return 0;
}
