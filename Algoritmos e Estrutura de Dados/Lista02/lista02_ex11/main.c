#include <stdio.h>

int main()
{
    /*Uma escola faz o pagamento de seus professores por hora/aula. Faça um algoritmo que solicite ao usuário, o
    nível do professor e a quantidade de horas/aula ele tem na semana. Em seguida, calcule e exiba o salário de
    um professor sabendo que a fórmula para o cálculo do salário é 𝑠𝑠𝑠𝑠𝑠𝑠 = 𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣 ∗ 𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞 ∗ 4.5. O valor
    da hora/aula do professor é dado em função do seu nível:
    Professor Nível 1 R$12,00 por hora/aula
    Professor Nível 2 R$17,00 por hora/aula
    Professor Nível 3 R$25,00 por hora/aula*/

    int nivel;
    float horas, salario;

    printf("Infome seu nivel e a quantidade de horas/aula:\n");
    scanf("%d %f", &nivel, &horas);

    if(nivel == 1)
        salario = 12 * horas * 4.5;
    else if(nivel == 2)
        salario = 17 * horas * 4.5;
    else 
        salario = 25 * horas * 4.5;

    printf("\nValor do salario: %f\n", salario);

    return 0;
}