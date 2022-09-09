#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1, x2, y1, y2;
    float distancia;

    printf("Indique o primeiro ponto x:\n");
    scanf("%d", &x1);
    printf("\nIndique o primeiro ponto y:\n");
    scanf("%d", &y1);
    printf("\nIndique o segundo ponto x:\n");
    scanf("%d", &x2);
    printf("\nIndique o segundo ponto y:\n");
    scanf("%d", &y2);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("\nDistancia entre os pontos (%d, %d) e (%d, %d): %f\n", x1, y1, x2, y2, distancia);

    return 0;
}
