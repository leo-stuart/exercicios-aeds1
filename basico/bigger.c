#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declarar e pegar variaveis
    int x, y, z;

    printf("Primeiro numero: ");
    scanf("%i", &x);
    printf("Segundo numero: ");
    scanf("%i", &y);
    printf("Terceiro numero: ");
    scanf("%i", &z);
    // if condition pra mostrar o maior
    if (x > y && x > z)
    {
        printf("O maior numero é %i\n", x);
    }
    else if (y > x && y > z)
    {
        printf("O maior numero é %i\n", y);
    }
    else if (z > x && z > y)
    {
        printf("O maior numero é %i\n", z);
    }
    else
    {
        printf("Sao todos iguais\n");
    }
}