#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int ano;
    char vontade;

    do
    {
        printf("Digite um ano: ");
        scanf("%i", &ano);
        if (ano % 4 == 0)
        {
            if (ano % 100 == 0 && ano % 400 == 0)
            {
                printf("%i foi um ano bissexto\n", ano);
            }
            else
            {
                printf("%i nao foi um ano bissexto\n", ano);
            }
        }
        else
        {
            printf("%i nao foi um ano bissexto\n", ano);
        }
        
        do{
            printf("Deseja verificar mais um ano? [S/N]: ");
            scanf(" %c", &vontade);
            vontade = tolower(vontade);
        } while(vontade != 's' && vontade != 'n');
        
    } while (vontade == 's');
}