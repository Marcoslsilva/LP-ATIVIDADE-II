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
        printf("Digite um número \n:");
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

    printf("A quantidade de números pares é: %i \n" , contadorPar);
    printf("A quantidade de números ímpares é: %i\n" , contadorImpar);
    printf("A média dos números pares é: %.1f \n" , mediaPar);
    printf("A média dos números ímpares é: %.1f \n" , mediaImpar);

    

    return 0;
}
