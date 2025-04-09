#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, numeros;
    int par = 0;
    int impar = 0;
    do
    {
        printf("Digite quantos numeros serao digitados: ");
        scanf("%i", &n);
    } while (n < 0);

    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("Digite o %i.o numero: ", i + 1);
            scanf("%i", &numeros);
        } while (n < 1);

        if (numeros % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }
    printf("Quantidade de numeros pares: %i\nQuantidade de numeros impares: %i\n", par, impar);
}