#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolas, jurados, nota, mediaNota;
    int somaNota = 0;
    printf("Numero de escolas participantes: ");
    scanf("%i", &escolas);

    for (int i = 0; i < escolas; i++)
    {
        printf("Escola %i!\n", i + 1);

        printf("Numero de jurados: ");
        scanf("%i", &jurados);

        for (int j = 0; j < jurados; j++)
        {
            do
            {
                printf("Nota do jurado %i: ", j + 1);
                scanf("%i", &nota);
            } while (nota < 0 || nota > 10);
            somaNota += nota;
        }
        mediaNota = somaNota / jurados;

        if (mediaNota < 9)
        {
            printf("A escola %i recebeu a seguinte nota: %i\n\n", i + 1, mediaNota);
        }
        else
        {
            printf("Parabéns, a escola %i teve uma nota excelente! Tirou %i\n\n", i + 1, mediaNota);
        }

        somaNota = 0;
    }
}