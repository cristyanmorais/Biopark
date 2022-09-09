#include <stdio.h>

int main()
{
    float preco, pago;
    char codigo;

    printf("\nInforme o valor do produto e o codigo de pagamento:\n");
    scanf("%f %c", &preco, &codigo);

    if(codigo == 'a' || codigo == 'A')
        printf("\nPagamento a vista em dinheiro ou cheque de %f\n", preco * 0.9);
    else if(codigo == 'b' || codigo == 'B')
        printf("\nPagamento a vista em cartao de %f\n", preco * 0.85);
    else if(codigo == 'c' || codigo == 'C')
        printf("\nPagamento em 2x de %f\n", preco / 2);
    else if(codigo == 'd' || codigo == 'D')
        printf("\nPagamento em 2x de %f\n", (preco * 1.1) / 2);
    else
        printf("\nCodigo invalido\n");

    return 0;
}