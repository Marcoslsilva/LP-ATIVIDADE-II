#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int codigo;
int codAcesso = 5923;

int main()
{

    setlocale(LC_ALL , "");

    printf("Digite o c�digo de acesso: \n");
    scanf("%i" , &codigo);

    do
    {
        printf("C�digo incorreto! Favor digitar o correto: \n");
        scanf("%i" , &codigo);
    } while (codigo != codAcesso);

    printf("Seja bem vindo(a)");
    
    
    return 0;
}
