#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, novoSalario;
    printf("Digite seu salario: ");
    scanf("%f", &salario);

    if(salario >= 300)
    {
        novoSalario = salario*1.15;
        printf("Seu novo salario é R$%.2f\n", novoSalario);
    }
    else {
        novoSalario = salario*1.35;
        printf("Seu novo salario é R$%.2f\n", novoSalario);
    }
}