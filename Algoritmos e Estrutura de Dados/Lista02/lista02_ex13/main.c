#include <stdio.h>

int main()
{
    int valor, notasCem = 0, notasCinq = 0, notasDez = 0, notasCinco = 0, notasUm = 0;

    printf("Informe um numero:\n");
    scanf("%d", &valor);

    if(valor >= 100){
        notasCem = valor / 100;
        valor = valor % 100;
    }
    if(valor >= 50){
        notasCinq = valor / 50;
        valor = valor % 50;
    }
    if(valor >= 10){
        notasDez = valor / 10;
        valor = valor % 10;
    }
    if(valor >= 5){
        notasCinco = valor / 5;
        valor = valor % 5;
    }
    
    notasUm = valor;

    printf("\nSerao %d de 100, %d de 50, %d de 10, %d de 5 e %d de 1.\n", notasCem, notasCinq, notasDez, notasCinco, notasUm);

    return 0;
}