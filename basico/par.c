#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, resto;
    printf("Digite um numero: ");
    scanf("%i", &x);

    resto = x % 2;

    if(resto == 0)
    {
        printf("Seu numero é par\n");
    }
    else
    {
        printf("Seu numero é impar\n");
    }
}