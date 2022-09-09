#include <stdio.h>

int main ()
{
    char resp[4];
    int aux = 0;

    while(aux == 0){
        printf("Ola tudo bem?\n");
        fgets(resp, sizeof(resp), stdin);

        if(resp[0] == 's' && resp[1] == 'i' && resp[2] == 'm')
            aux = 1;
        else
            fflush(stdin);
    }


    return 0;
}