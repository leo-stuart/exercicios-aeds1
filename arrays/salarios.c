#include <stdio.h>
#include <stdlib.h>

int main()
{
    float minimo, salario, menor, maior;
    int funcionarios = 0;
    int fudido = 0;
    printf("Valor salario minimo: ");
    scanf("%f", &minimo);
    int firstInput = 1;
    printf("Salario funcionario %i: ", funcionarios+1);
    scanf("%f", &salario);

    do
    {
        if (firstInput)
        {
            menor = maior = salario;
            firstInput = 0;
        }
        if (salario < menor)
        {
            menor = salario;
        }
        else if (salario > maior)
        {
            maior = salario;
        }
        if (salario == minimo)
        {
            fudido++;
        }
        funcionarios++;
        
        printf("Salario funcionario %i: ", funcionarios+1);
        scanf("%f", &salario);
        if(salario == 0){
            funcionarios--;
        }
    } while (salario > 0);

    float amplitude = maior - menor;
    float percFudido = 100*fudido/funcionarios;
    printf("Amplitude: %.2f\nPercentual que recebe salario minimo: %.2f%%\n", amplitude, percFudido);
}