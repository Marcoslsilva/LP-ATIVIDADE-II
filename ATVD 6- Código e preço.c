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

    printf("Digite o c�digo referente ao produto desejado \n");
    printf("Camiseta - 1 \n");
    printf("Cal�a - 2 \n");
    printf("Sapato - 3 \n");
    scanf("%i", &produto);

    switch (produto)
    {
    case 1:

        printf("Voc� escolheu camiseta. O pre�o a pagar � R$ 30,00");

        break;

    case 2:

        printf("Voc� escolheu cal�a. O pre�o a pagar � R$ 70,00");

        break;

    case 3:
        printf("Voc� escolheu sapato. O pre�o a pagar � R$ 60,00");
        break;

    default:
    printf("Produto n�o encontrado");
        break;
    }
    return 0;
}
