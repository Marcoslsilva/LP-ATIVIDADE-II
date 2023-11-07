#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

float temperatura;
char clima[250];

int main()
{
    setlocale(LC_ALL, "");

    printf("Digite a temperatura ambiente \n");
    scanf("%f", &temperatura);

    if (temperatura > 25)
    {
        strcpy(clima , "Ensolarado");
    }
    else if (temperatura < 15)
    {
        strcpy(clima, "Chuvoso");
    }
    else
    {
        strcpy(clima, "Nublado");  
    }

    printf("O clima do jogo deverá estar: %s", clima);

    return 0;
}
