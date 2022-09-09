#include <stdio.h>

int main()
{
    int cargo;
    float salario;

    printf("Informe o seu cargo e o seu salario:\n");
    scanf("%d %f", &cargo, &salario);

    switch (cargo)
    {
    case 101:
        printf("\nSalario antigo: %f\nSalario novo: %f\nDiferenca: %f\n", salario, salario * 1.1, salario * 1.1 - salario);
        break;
    case 102:
        printf("\nSalario antigo: %f\nSalario novo: %f\nDiferenca: %f\n", salario, salario * 1.2, salario * 1.2 - salario);
        break;
    case 103:
        printf("\nSalario antigo: %f\nSalario novo: %f\nDiferenca: %f\n", salario, salario * 1.3, salario * 1.3 - salario);
        break;
    
    default:
        printf("\nSalario antigo: %f\nSalario novo: %f\nDiferenca: %f\n", salario, salario * 1.4, salario * 1.4 - salario);
        break;
    }

    return 0;
}