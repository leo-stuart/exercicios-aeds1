#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float peso, altura, imc;

    printf("Qual seu peso: ");
    scanf("%f", &peso);
    printf("Qual sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso/pow(altura, 2);
    printf("Seu IMC é: %.1f\n", imc);
}