#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta, raizDelta, raiz1, raiz2;

    printf("Monte sua equação do segundo grau!\n      Axˆ2 + Bx + C = 0\n\n");

    printf("\nDigite os 3 valores para a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;
    raizDelta = sqrt(delta);
    raiz1 = (-b + raizDelta) / 2 * a;
    raiz2 = (-b - raizDelta) / 2 * a;

    if (delta < 0)
    {
        printf("\nSua função não possui raizes reais.\n");
    }
    else
    {
        printf("\nAs raizes da sua função de segundo grau são: %.2f e %.2f\n", raiz1, raiz2);
    }
    return 0;
}