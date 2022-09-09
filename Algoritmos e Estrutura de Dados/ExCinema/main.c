#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int caso, poltronas[10][15], a = 1, fileira, poltrona;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 15; j++){
            poltronas[i][j] = 0;
        }
    }
    
    printf("==============================================\n\n      Bem vindo ao Cinema Samucascreen\n\n==============================================");
    printf("\n\nEscolha a opcao que voce gostaria de realizar:\n\n         1 - Mostrar poltronas\n\n         2 - Reserva de ingresso\n\n         3 - Compra de ingresso\n\n         4 - Cancelamento de compra\n\n         5 - Sair\n\n==============================================\n         ");
    scanf("%d", &caso);



    do{
        switch(caso)
    {
        case 1:

            printf("\n==============================================\n\n     Voce escolheu verificar as poltronas\n\n");

            for(int i = 0; i < 10; i++){

                printf("        ");

                for(int j = 0; j < 15; j++){
                    printf("%d ", poltronas[i][j]);
                }
                printf("\n");    
            }

            printf("\n==============================================\n\nEscolha a opcao que voce gostaria de realizar:\n\n         1 - Reserva de ingresso\n\n         2 - Compra de ingresso\n\n         3 - Cancelamento de compra\n\n         4 - Sair\n\n==============================================\n         ");
            scanf("%d", &caso);

            break;

        case 2:

            printf("\n==============================================\n\n       Informe a fileira e a poltrona que deseja reservar:\n                  ");
            scanf("%d %d", &fileira, &poltrona);

            if(fileira > 10 || poltrona > 15){
                if(fileira > 15){
                    printf("\nNumero invalido de fileira (1 a 15)\nInforme a fileira que deseja reservar:\n ");
                    scanf("%d", &fileira);
                } else {
                    printf("\nNumero invalido de poltrona (1 a 10)\nInforme a poltrona que deseja reservar:\n ");
                    scanf("%d", &poltrona);
                }
            }

            poltronas[fileira][poltrona] = 1;

            printf("\n==============================================\n\nEscolha a opcao que voce gostaria de realizar:\n\n         1 - Reserva de ingresso\n\n         2 - Compra de ingresso\n\n         3 - Cancelamento de compra\n\n         4 - Sair\n\n==============================================\n         ");
            scanf("%d", &caso);

            break;

        case 3:
            break;

        case 4:
            break;
    
        default:
            printf("\n==============================================\n\n        Voce escolheu sair do sistema\n             Volte sempre!");
            a = 0;
            break;
    }

    } while(a == 1);

    return 0;
}