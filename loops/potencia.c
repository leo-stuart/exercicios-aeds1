#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, resultado, temp, expo;
    printf("Digite o numero da base: ");
    scanf("%f", &base);

    printf("Digite o expoente: ");
    while (scanf("%f", &expo) != 1 || (int)expo != expo){
        printf("Numero Invalido. Digite um numero inteiro: ");
    }

    if(expo == 0){
        resultado = 1;
    }

    for(float i = 0; i < expo; i++)
    {
        if(i == 0){
            resultado = base; 
        } else {
            resultado = base*resultado;
        }
    }
    printf("O resultado da potenciação é: %.1f\n", resultado);
}