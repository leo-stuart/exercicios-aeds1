#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int salario;
    char desejo;
    
    do
    {
        printf("Valor do salario: ");
        scanf("%i", &salario);
        if (salario < 1000)
        {
            salario *= 1.1;
            printf("Reajuste de 10%%. Novo salario: %i\n", salario);
        }
        else if (salario >= 1000 && salario < 2000)
        {
            salario *= 1.08;
            printf("Reajuste de 8%%. Novo salario: %i\n", salario);
        }
        else
        {
            salario *= 1.07;
            printf("Reajuste de 7%%. Novo salario: %i\n", salario);
        }
        printf("Deseja ajustar mais um salario? [s/n]: ");
        scanf(" %c", &desejo);
    }while(desejo == 's');
}