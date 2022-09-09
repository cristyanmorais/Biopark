#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Informe 2 numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);

    if(num1 >= num2)
        printf("\nMaior numero: %d\n", num1);
    else
        printf("\nMaior numero: %d", num2);

    return 0;
}