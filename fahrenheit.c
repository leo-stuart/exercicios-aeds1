#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fah;

    printf("Graus Celsius: ");
    scanf("%f", &celsius);

    fah = celsius * 1.8 + 32;

    printf("%.1f graus celsius são %.1f graus fahrenheit\n", celsius, fah);
}