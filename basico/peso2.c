#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char sexo[2];
    printf("Seu sexo. M ou F: ");
    scanf("%1s", sexo);

    float altura, peso;
    if (strcmp(sexo, "M") == 0)
    {
        printf("Digite sua altura em metros: ");
        scanf("%f", &altura);
        peso = (72.7 * altura) - 58;

        printf("Seu peso ideal é %.2f\n", peso);
    }
    else if (strcmp(sexo, "F") == 0)
    {
        printf("Digite sua altura em metros: ");
        scanf("%f", &altura);
        peso = (62.1 * altura) - 44.7;

        printf("Seu peso ideal é %.2f\n", peso);
    } else {
        printf("Era pra escrever F ou M\n");
    }
    return 0;
}