#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
    char sexo;
    float altura, peso;
    bool erro;
    do
    {
        printf("Seu sexo. M ou F: ");
        scanf(" %c", &sexo);
        sexo = tolower(sexo);
        erro = (sexo != 'm' && sexo != 'f');
        
        if (erro)
        {
            printf("\a\nCaracter invalido\n");
        }
    } while (erro);

    if (sexo == 'm')
    {
        do
        {
            printf("Digite sua altura em metros: ");
            scanf("%f", &altura);
        } while (altura < 0 || altura > 2.5);

        peso = (72.7 * altura) - 58;

        printf("Seu peso ideal é %.2f\n", peso);
    }
    else
    {
        do
        {
            printf("Digite sua altura em metros: ");
            scanf("%f", &altura);
        } while (altura < 0 || altura > 2.5);

        peso = (62.1 * altura) - 44.7;

        printf("Seu peso ideal é %.2f\n", peso);
    }

    return 0;
}