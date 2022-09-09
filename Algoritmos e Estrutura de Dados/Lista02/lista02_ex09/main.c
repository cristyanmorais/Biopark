#include <stdio.h>

int main()
{
    int aluno;
    float nota1, nota2, nota3, media;

    printf("Informe seu ID e tres notas:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if(media < 4.0)
        printf("\nVoce esta reprovado!\n");
    else if(media < 6.0)
        printf("\nVoce precisa de prova substitutiva!\n");
    else
        printf("\nVoce esta aprovado!\n");

    return 0;
}