#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, mult;

    printf("Digite um numero: ");
    scanf("%i", &a);
    printf("Digite um numero: ");
    scanf("%i", &b);
    printf("Digite um numero: ");
    scanf("%i", &c);
    mult = a*b*c;

    printf("%ix%ix%i = %i\n", a, b, c, mult);
    return 0;
}