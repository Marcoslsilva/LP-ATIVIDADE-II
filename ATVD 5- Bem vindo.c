#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int idioma;


int main()
{
    setlocale(LC_ALL , "");

    printf("Digite o n�mero referente ao idioma desejado \n");
    printf("Ingl�s - 1 \n");
    printf("Espanhol - 2 \n");
    printf("Franc�s - 3 \n");
    scanf("%i" , &idioma);

    switch (idioma)
    {
    case 1: 

    printf("Welcome!");
        break;
    
    case 2: 

    printf("Bienvenindo!");
        break;
    
    case 3: 

    printf("accueillir!");
        break;
    
    default:
    printf("idioma inv�lido");
        break;
    }
    return 0;
}
