#include <stdio.h>

int main ()
{

    /*3. Foi feita uma pesquisa de canal de TV em várias casas da cidade de João Câmara. Para cada
    casa visitada, foi preenchida uma ficha contendo o número do canal (3, 5, 8, 11 ou 13) e o número
    de pessoas que estavam assistindo o canal naquela casa. Faça um algoritmo que:
    a. Leia a informação da quantidade de casas participantes da pesquisa.
    b. Receba as informações coletadas em cada uma das casas participantes da
    c. pesquisa: a informação do canal que estava sendo assistido e a quantidade de
    d. pessoas que estava assistindo aquele canal na casa.
    e. Contabilize quantas pessoas estava assistindo cada canal (leve em conta a
    f. quantidade de pessoas que assistia cada canal em cada casa)
    g. Ao finalizar a leitura de todas as fichas, escreva o número do canal e sua
    h. respectiva porcentagem de audiência.*/

    int quantCasas, canal, pessoas;
    float porcentagem3, porcentagem5, porcentagem8, porcentagem11, porcentagem13, pessoas3 = 0, pessoas5 = 0, pessoas8 = 0, pessoas11 = 0, pessoas13 = 0, pessoasTotal = 0;

    printf("Informe a quantidade de casas da pesquisa:\n");
    scanf("%d", &quantCasas);

    for(int i = 0; i < quantCasas; i++){

        printf("\nInforme o canal que estava sendo assitido:\n");
        scanf("%d", &canal);
        printf("\nInforme a quantidade de pessoas que estavam assistindo:\n");
        scanf("%d", &pessoas);
        
        pessoasTotal += pessoas;

        if(canal == 3){
            pessoas3 += pessoas;
        }
        else if(canal == 5){
            pessoas5 += pessoas;
        }
        else if(canal == 8){
            pessoas8 += pessoas;
        }
        else if(canal == 11){
            pessoas11 += pessoas;
        }
        else if(canal == 13){
            pessoas13 += pessoas;
        }
    }

    printf("\nNumero de pessoas: %d\n", pessoas);
    printf("\nPorcentagem do canal 3: %f%%\n", pessoas3 * 100/pessoasTotal);
    printf("\nPorcentagem do canal 5: %f%%\n", pessoas5 * 100/pessoasTotal);
    printf("\nPorcentagem do canal 8: %f%%\n", pessoas8 * 100/pessoasTotal);
    printf("\nPorcentagem do canal 11: %f%%\n", pessoas11 * 100/pessoasTotal);
    printf("\nPorcentagem do canal 13: %f%%\n", pessoas13 * 100/pessoasTotal);

    return 0;
}