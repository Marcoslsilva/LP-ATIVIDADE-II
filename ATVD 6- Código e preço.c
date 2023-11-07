#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int produto;

int main()
{
    setlocale(LC_ALL, "");

    printf("Digite o código referente ao produto desejado \n");
    printf("Camiseta - 1 \n");
    printf("Calça - 2 \n");
    printf("Sapato - 3 \n");
    scanf("%i", &produto);

    switch (produto)
    {
    case 1:

        printf("Você escolheu camiseta. O preço a pagar é R$ 30,00");

        break;

    case 2:

        printf("Você escolheu calça. O preço a pagar é R$ 70,00");

        break;

    case 3:
        printf("Você escolheu sapato. O preço a pagar é R$ 60,00");
        break;

    default:
    printf("Produto não encontrado");
        break;
    }
    return 0;
}
