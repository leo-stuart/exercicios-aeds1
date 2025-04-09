#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lido;
    int dividido;
    int divisores = 2;
    int i = 2;

    printf("Numero para descobrir se é primo: ");
    scanf("%i", &lido);

    if (lido < 2)
    {
        printf("Nao e primo\n");
        return 0;
    }

    dividido = lido / 2;

    while (divisores == 2 && i < dividido)
    {
        if (lido % i == 0)
        {
            divisores++;
        }
        i++;
    }

    if (divisores == 2)
    {
        printf("E primo\n");
    }
    else
    {
        printf("Nao e primo\n");
    }
    return 0;
}