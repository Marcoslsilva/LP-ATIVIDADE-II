#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int numero;
int i;

int main()
{
    setlocale(LC_ALL , "");

    printf("Digite um n�mero inteiro positivo \n");
    scanf("%i" , &numero);
   if (numero > 0)
   {
    
    do
    {
       printf("%i \n" , numero--);
    } while (numero != -1);
    
    
   }
   else
   {
     printf("N�mero inv�lido! Por favor digite um n�mero inteiro positivo.");
   }
   

    
    
    return 0;
}
