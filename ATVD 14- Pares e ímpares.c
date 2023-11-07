#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int contadorPar =0;
int contadorImpar =0;
float mediaPar;
float mediaImpar;
int numero;
float somaPar;
float somaImpar;

int main()
{
    setlocale(LC_ALL ,"");

    do
    {
        printf("Digite um n�mero \n:");
        scanf("%i" , &numero);

        if (numero > 0)
        {
            if (numero % 2 == 0)
            {
                contadorPar ++;
                somaPar += numero;
            }
            else
            {
                contadorImpar++;
                somaImpar += numero;
            }
            
        }
        
    } while (numero > 0);

    mediaPar = somaPar / contadorPar;
    mediaImpar = somaImpar / contadorImpar;

    printf("A quantidade de n�meros pares �: %i \n" , contadorPar);
    printf("A quantidade de n�meros �mpares �: %i\n" , contadorImpar);
    printf("A m�dia dos n�meros pares �: %.1f \n" , mediaPar);
    printf("A m�dia dos n�meros �mpares �: %.1f \n" , mediaImpar);

    

    return 0;
}
