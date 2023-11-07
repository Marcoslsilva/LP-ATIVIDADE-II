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

    printf("Digite o número referente ao idioma desejado \n");
    printf("Inglês - 1 \n");
    printf("Espanhol - 2 \n");
    printf("Francês - 3 \n");
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
    printf("idioma inválido");
        break;
    }
    return 0;
}
