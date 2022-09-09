#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Informe tres numeros diferentes:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if((num1 > num2) && (num1 > num3)){
        if(num2 > num3)
            printf("\n%d %d %d\n", num1, num2, num3);
        else
            printf("\n%d %d  %d\n", num1, num3, num2);
    } 

    if((num2 > num3) && (num2 > num3)){
        if(num1 > num3)
            printf("\n%d %d %d\n", num2, num1, num3);
        else
            printf("\n%d %d %d\n", num2, num3, num1);
    }

    if((num3 > num1) && (num3 > num2)){
        if(num1 > num2)
            printf("\n%d %d %d\n", num3, num1, num2);
        else
            printf("\n%d %d %d\n", num3, num2, num1);
    }


    return 0;
}