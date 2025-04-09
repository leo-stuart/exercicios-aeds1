#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a, b, c;

    printf("Digite o tamanho do lado 1: ");
    scanf("%i", &a);
    printf("Digite o tamanho do lado 2: ");
    scanf("%i", &b);
    printf("Digite o tamanho do lado 3: ");
    scanf("%i", &c);

    bool triangle = a + b > c && a + c > b && b + c > a;

    if (triangle)
    {
        printf("voce tem um triangulo!");
        if (a == b && a == c)
        {
            printf(" Ele é equilatero!\n");
        }
        else if (a == b || a == c || b == c)
        {
            printf(" Ele é isosceles!\n");
        }
        else
        {
            printf(" Ele é escaleno!\n");
        }
    }
    else
    {
        printf("voce nao tem um triangulo\n");
    }
}