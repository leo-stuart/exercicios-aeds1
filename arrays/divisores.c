#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lido;
    int dividido;
    do
    {
        printf("Numero para acha os divisores: ");
        scanf("%i", &lido);
    } while (lido < 1);

    printf("1,");

    if (lido % 2 == 0)
    {
        dividido = lido / 2;
    }
    else
    {
        dividido = (lido / 2) + 1;
    }

    for (int i = 2; i <= dividido; i++)
    {
        if (lido % i == 0)
        {
            printf(" %i,", i);
        }
        else
        {
            continue;
        }
    }
    printf(" %i\n", lido);
    return 0;
}