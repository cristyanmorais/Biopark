#include <stdio.h>

int main ()
{
    int alunos;
    float nota1, nota2, media = 0;

    printf ("Informe o numero de alunos:\n");
    scanf("%d", &alunos);

    for(int i = 0; i < alunos; i++){
        printf ("Informe suas duas notas:");
        scanf("%f %f", &nota1, &nota2);

        media = (nota1 + nota2) / 2;

        if(media >= 6.0)
            printf("\nVoce esta aprovado.\n");
        else 
            printf("\nVoce esta reprovado.\n");
    }

    return 0;
}