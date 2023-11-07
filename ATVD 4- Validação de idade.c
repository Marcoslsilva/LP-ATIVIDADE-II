#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int idade;

int main()
{
    setlocale(LC_ALL ,"");

    printf("Digite sua idade: \n");
    scanf("%i" , &idade);

    if (idade < 18)
    {
        printf("Acesso restrito a menores de idade!");

    }
    else
    {
        printf("Acesso permitido!");
    }
    
    

    return 0;
}
