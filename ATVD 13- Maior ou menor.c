#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int num1;
int num2;
int maiorNumero;

int main()
{
    setlocale(LC_ALL ,"");

    printf("Digite um n�mero inteiro: \n");
    scanf("%i",&num1);

    printf("Digite um outro n�mero inteiro: \n");
    scanf("%i",&num2);

    if (num1 > num2)
    {
        maiorNumero = num1;
    }
    else
    {
        maiorNumero = num2;
    }
    
    printf("O maior n�mero �: %i" , maiorNumero);
    return 0;
}
