#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

float preco = 0;
int dia;
float desconto10;
float desconto15;

int main()
{
    setlocale(LC_ALL, "");

    printf("Digite o pre�o do produto desejado \n");
    scanf("%f", &preco);

    desconto10 = (preco - (preco * 10 / 100));
    desconto15 = (preco - (preco * 15 / 100));

    printf("Digite o n�mero referente ao dia da semana \n");
    printf("Domingo - 1 \n");
    printf("Segunda - 2 \n");
    printf("Ter�a - 3 \n");
    printf("Quarta - 4 \n");
    printf("Quinta - 5 \n");
    printf("Sexta - 6 \n");
    printf("S�bado - 7 \n");
    scanf("%i", &dia);

    switch (dia)
    {
    case 1:

        if (preco > 100)
        {
            preco = desconto15;
            printf("O pre�o total �: R$%.2f", preco);
        }

        break;

    case 2:
        if (preco > 100)
        {

            preco = desconto10;
            printf("O pre�o total �: R$%.2f", preco);
        }

        break;

    case 3:

        if (preco > 100)
        {
            preco = desconto10;
            printf("O pre�o total �: R$%.2f", preco);
        }

        break;

    case 4:

        if (preco > 100)
        {
            preco = desconto10;
            printf("O pre�o total �: R$%.2f", preco);
        }

        break;

    case 5:

        if (preco > 100)
        {
            preco = desconto10;
            printf("O pre�o total �: R$%.2f", preco);
        }

        break;

    case 6:

        if (preco > 100)
        {
            preco = desconto10;
            printf("O pre�o total �: R$%.2f", preco);
        }

        break;

    case 7:

        if (preco > 100)
        {
            preco = desconto15;
            printf("O pre�o total �: R$%.2f", preco);
        }

        break;

    default:

        printf("Dia inv�lido!");
        break;
    }

    return 0;
}