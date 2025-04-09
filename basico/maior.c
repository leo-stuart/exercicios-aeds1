#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Maior ou menor de Idade\n\n");

    do
    {
        printf("Digite sua idade: ");
        scanf("%i", &idade);
    } while(idade < 0 || idade > 150);

    if (idade >= 18)
    {
        printf("Você é maior de idade!\n");
    }
    else
    {
        printf("Você ainda é menor de idade!\n");
    }
}