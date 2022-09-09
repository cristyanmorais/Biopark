#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nascimento, atual, idAnos, idMeses, idSemanas, idDias;

    printf("Informe o seu ano de nascimento e o ano atual:\n");
    scanf("%d %d", &nascimento, &atual);

    idAnos = atual - nascimento;
    idMeses = idAnos * 12;
    idSemanas = idMeses * 4;
    idDias = idSemanas * 7;

    printf("\nIdade em anos: %d\nIdade em meses: %d\nIdade em semanas: %d\nIdade em dias: %d\n", idAnos, idMeses, idSemanas, idDias);

    return 0;
}
