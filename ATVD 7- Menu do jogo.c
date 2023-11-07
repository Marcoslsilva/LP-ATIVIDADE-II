#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int opcao;

int main()
{
    setlocale(LC_ALL , "");

    printf("Selecione a opção desejada.\n");
    printf("Novo jogo - 1 \n");
    printf("Carregar jogo - 2 \n");
    printf("Configirações - 3 \n");
    scanf("%i" , &opcao);

    switch (opcao)
    {
    case 1:
    printf("Novo jogo");
        break;
    case 2:
    printf("Carregar jogo");
        break;
    case 3:
    printf("Configurações");
        break;
    
    
    default:
    printf("Opção inválida!");
        break;
    }
    return 0;
}
