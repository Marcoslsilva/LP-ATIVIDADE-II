#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int contador = 0;
int i;
float nota;
float media;
float soma;

int main()
{
    setlocale(LC_ALL , "");

    for ( i = 1; i <= 3; i++)
    {
        printf("Digite a sua %iª nota \n" , i);
        scanf("%f" , &nota);
        contador++;
        soma += nota;
    }
    
    media = soma / contador;
    printf("A média é: %.1f" , media);
    return 0;
}
