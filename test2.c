#include <stdio.h>

int main()
 {
    int idade,
        num_dias;
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    num_dias = idade * 365;
    printf("Voce viveu %i dias, parabens!\n", num_dias);
    return 0;
}
