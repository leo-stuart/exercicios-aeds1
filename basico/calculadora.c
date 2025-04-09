#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int numUm, numDois, resultado;

int numbers()
{
    printf("\n\nDigite o primeiro numero: ");
    scanf("%i", &numUm);
    printf("\nDigite o segundo numero: ");
    scanf("%i", &numDois);
    return 0;
}

int main()
{
    int escolha;

    do
    {
        setlocale(LC_ALL, "");
        printf("Calculadora\n\n");
        printf("0 - Sair do Programa\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n\n");

        printf("Qual operação você deseja realizar?\n");
        scanf("%i", &escolha);

        switch (escolha)
        {
        case 1:
            numbers();
            resultado = numUm + numDois;
            printf("O resultado da operação é: %i\n\n", resultado);
            break;

        case 2:
            numbers();
            resultado = numUm - numDois;
            printf("O resultado da operação é: %i\n\n", resultado);
            break;

        case 3:
            numbers();
            resultado = numUm * numDois;
            printf("O resultado da operação é: %i\n\n", resultado);
            break;

        case 4:
            numbers();
            resultado = numUm / numDois;
            printf("O resultado da operação é: %i\n\n", resultado);
            break;

            return 0;
        }
    } while (escolha != 0);

    printf("Saindo do programa\n");
}