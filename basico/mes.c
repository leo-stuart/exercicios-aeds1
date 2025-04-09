#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numMes;

    printf("Digite um numero de 1 a 12 que eu direi o mês\n\n");

    do {
        printf("Digite mês [1 a 12]: ");
        scanf("%i", &numMes);
    } while (numMes > 12 || numMes < 1);

    switch (numMes)
    {
    case 1:
        printf("\nJaneiro\n");
        break;
    case 2:
        printf("\nFevereiro\n");
        break;
    case 3:
        printf("\nMarço\n");
        break;
    case 4:
        printf("\nAbril\n");
        break;
    case 5:
        printf("\nMaio\n");
        break;
    case 6:
        printf("\nJunho\n");
        break;
    case 7:
        printf("\nJulho\n");
        break;
    case 8:
        printf("\nAgosto\n");
        break;
    case 9:
        printf("\nSetembro\n");
        break;
    case 10:
        printf("\nOutubro\n");
        break;
    case 11:
        printf("\nNovembro\n");
        break;
    case 12:
        printf("\nDezembro\n");
        break;
    }
    return 0;
}