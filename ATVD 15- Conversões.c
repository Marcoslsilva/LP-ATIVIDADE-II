#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int medida;
float milhas;
float farenheit;
float ms;
float valor;

int main()
{
    setlocale(LC_ALL, "");

    printf("Digite o valor que deseja converter: \n");
    scanf("%f", &valor);

    printf("Escolha qual convers�o deseja: \n");
    printf("Quil�metros - milhas: 1 \n");
    printf("Celsius - Farenheit : 2 \n");
    printf("Km/h - m/s : 3 \n");
    scanf("%i", &medida);
    do
    {
        switch (medida)
        {
        case 1:

            do
            {
                milhas = valor / 1069;
                printf("A medida em milhas �: %.2f \n", milhas);
                printf("Caso queira tentar outra convers�o, digite o valor e o n�mero aprorpiado. \n");
                printf("Sen�o, digite 0 \n");
                printf("Digite o valor \n:");
                scanf("%f", &valor);
                printf("Digite o n�mero aprpriado \n");
                scanf("%i", &medida);

            } while (medida != 0);

            break;

        case 2:

            do
            {
                farenheit = (valor * 9 / 5) + 32;
                printf("A medida em farenheit �: %.2f \n", farenheit);
                printf("Caso queira tentar outra convers�o, digite o n�mero aprorpiado. \n");
                printf("Sen�o, digite 0 \n");
                printf("Digite o valor: \n");
                scanf("%f", &valor);
                printf("Digite o n�mero aprpriado \n");
                scanf("%i", &medida);
            } while (medida != 0);

            break;

        case 3:
            do
            {
                ms = valor / 3.6;
                printf("A medida em m/s �: %.2f \n", ms);
                printf("Caso queira tentar outra convers�o, digite o n�mero aprorpiado. \n");
                printf("Sen�o, digite 0 \n");
                printf("Digite o valor\n:");
                scanf("%f", &valor);
                printf("Digite o n�mero aprpriado \n");
                scanf("%i", &medida);
            } while (medida != 0);

            break;

        default:
            printf("Medida inv�ida!");
            break;
        }
    } while (medida != 0);

    return 0;
}
