#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char sexo;
    bool erro = sexo != 'M' && sexo != 'F';

    do
    {
        printf("Digite seu sexo [M/F]");
        scanf(" %c", &sexo);
        sexo = toupper(sexo);
        if(erro)
        {
            printf("\aCaracter invalido. Digite [M/F]\n");
        }
    } while (erro);
}