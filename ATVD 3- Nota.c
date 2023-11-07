#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

float nota;
char resultado [250];

int main()
{
    setlocale(LC_ALL, "");

    printf("Digite sua nota \n");
    scanf("%f", &nota);

    if (nota >= 9)
    {
        strcpy( resultado , "Excelente");
    }
    else if (nota >= 7 && nota <= 8.9)
    {
          strcpy( resultado , "Bom");
    }
    else if (nota >= 5 && nota <= 6.9)
    {
          strcpy( resultado , "Razoavel");
    }
    else
    {
         strcpy( resultado , "Insuficiente");
    }
    
    printf("Sua classsificação é: %s" , resultado);

    return 0;
}