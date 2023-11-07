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

    printf("Digite o preço do produto desejado \n");
    scanf("%f", &preco);

    desconto10 = (preco - (preco * 10 / 100));
    desconto15 = (preco - (preco * 15 / 100));

    printf("Digite o número referente ao dia da semana \n");
    printf("Domingo - 1 \n");
    printf("Segunda - 2 \n");
    printf("Terça - 3 \n");
    printf("Quarta - 4 \n");
    printf("Quinta - 5 \n");
    printf("Sexta - 6 \n");
    printf("Sábado - 7 \n");
    scanf("%i", &dia);

    switch (dia)
    {
    case 1:

        if (preco > 100)
        {
            preco = desconto15;
            printf("O preço total é: R$%.2f", preco);
        }

        break;

    case 2:
        if (preco > 100)
        {

            preco = desconto10;
            printf("O preço total é: R$%.2f", preco);
        }

        break;

    case 3:

        if (preco > 100)
        {
            preco = desconto10;
            printf("O preço total é: R$%.2f", preco);
        }

        break;

    case 4:

        if (preco > 100)
        {
            preco = desconto10;
            printf("O preço total é: R$%.2f", preco);
        }

        break;

    case 5:

        if (preco > 100)
        {
            preco = desconto10;
            printf("O preço total é: R$%.2f", preco);
        }

        break;

    case 6:

        if (preco > 100)
        {
            preco = desconto10;
            printf("O preço total é: R$%.2f", preco);
        }

        break;

    case 7:

        if (preco > 100)
        {
            preco = desconto15;
            printf("O preço total é: R$%.2f", preco);
        }

        break;

    default:

        printf("Dia inválido!");
        break;
    }

    return 0;
}