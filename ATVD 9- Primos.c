#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int numero;
int i;
int flag = 0;
int main()
{
    setlocale(LC_ALL ,"");
   
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 0:
    case 1:
        flag = 1;
        break;
    default:
        for (i = 2; i <= numero / 2; ++i)
        {
            if (numero % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        printf("N�mero primo.\n");
    else
        printf("N�mero n�o primo.\n");

    return 0;
}