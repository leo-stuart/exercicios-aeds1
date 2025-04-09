#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    float preco;

    printf("Digite o preço: ");
    scanf("%f", &preco);

    do
    {
        if (preco < 500)
        {
            preco *= 0.3;
        }
        else if (preco >= 500 && preco < 3000)
        {
            preco *= 0.4;
        }
        else
        {
            preco *= 0.5;
        }

        printf("Valor promocional: %.2f\n", preco);
        printf("Digite o preço [0 para sair]: ");
        scanf("%f", &preco);
    } while (preco != 0);
}