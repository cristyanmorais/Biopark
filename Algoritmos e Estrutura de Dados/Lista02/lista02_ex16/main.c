#include <stdio.h>

int main()
{
    float saldo;

    printf("Informe o seu saldo medio:\n");
    scanf("%f", &saldo);

    if(saldo <= 200)
        printf("\nVoce nao tem credito.");
    else if(saldo <= 400)
        printf("\nVoce tem %f de credito.\n", saldo * 1.2);
    else if(saldo <= 600)
        printf("\nVoce tem %f de credito.\n", saldo * 1.3);
    else
        printf("\nVoce tem %f de credito.\n", saldo * 1.4);
    
    return 0;
}