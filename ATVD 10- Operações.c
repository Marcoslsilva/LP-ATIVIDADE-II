#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

float num1;
float num2;
char operacao;
float resultado;

int main()
{
    setlocale(LC_ALL ,"");

    printf("Digite um n�mero: \n");
    scanf("%f" , &num1);

    printf("Digite o outro n�mero: \n");
    scanf("%f" , &num2);
   fflush(stdin);

    printf("Escolha a opera��o desejada ( + ou -) \n");
    scanf("%c" , &operacao);

    switch (operacao)
    {
    case '+':
        resultado = num1 + num2;
        break;
    
     case '-':
        resultado = num1 - num2;
        break;
    default:
        break;
    }

    printf("O resultado da opera��o desejada �: %.1f" , resultado);
    return 0;
}
