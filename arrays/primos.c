#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void primoUm(int, int);
void primoDois(int, int);

int main()
{
    int numeroUm, numeroDois;
    char desejo;
    do
    {
        do
        {
            printf("Digite o primeiro numero: ");
            scanf("%i", &numeroUm);
        } while (numeroUm < 0);
        do
        {
            printf("Digite o segundo numero: ");
            scanf("%i", &numeroDois);
        } while (numeroDois < 0);

        if (numeroUm > numeroDois)
        {
            primoUm(numeroUm, numeroDois);
        }
        else
        {
            primoDois(numeroUm, numeroDois);
        }

        printf("\nQuer checar novamente? [s/n]: ");
        scanf(" %c", &desejo);
        desejo = tolower(desejo);
    } while (desejo == 's');
}

void primoUm(int numeroUm, int numeroDois)
{
    int i = 2;
    bool primosEntreSi = true;

    while (primosEntreSi && i > numeroUm / 2)
    {

        if (numeroUm % i == 0 && numeroDois % i == 0)
        {
            primosEntreSi = false;
        }
        i++;
    }

    if(primosEntreSi){
        printf("Sao primos entre si\n");
    } else {
        printf("Nao sao primos entre si\n");
    }
}

void primoDois(int numeroUm, int numeroDois)
{
    int i = 2;
    bool primosEntreSi = true;

    while (primosEntreSi && i > numeroDois / 2)
    {

        if (numeroUm % i == 0 && numeroDois % i == 0)
        {
            primosEntreSi = false;
        }
        i++;
    }

    if(primosEntreSi){
        printf("Sao primos entre si\n");
    } else {
        printf("Nao sao primos entre si\n");
    }
}