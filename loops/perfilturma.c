#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    int numAlunos, porcHomem, porcMulher, idade;
    int homem = 0;
    int mulher = 0;
    int maisVelho = 0;
    int maisNovo = 150;
    int maiorIdade = 0;
    char sexo;

    do
    {
        printf("Digite quantos alunos existem na sala: ");
        scanf("%i", &numAlunos);
    } while (numAlunos < 0);

    for (int i = 0; i < numAlunos; i++)
    {
        do
        {
            printf("\n\nGenero do aluno %i: ", i + 1);
            scanf(" %c", &sexo);
            sexo = tolower(sexo);
        } while (sexo != 'f' && sexo != 'm');

        if (sexo == 'f')
        {
            mulher++;
        }
        else
        {
            homem++;
        }
        do
        {
            printf("Idade do aluno %i: ", i + 1);
            scanf("%i", &idade);
        } while (idade > 150 || idade < 0);

        if (idade < maisNovo)
        {
            maisNovo = idade;
        }
        else if (idade > maisVelho)
        {
            maisVelho = idade;
        }
        else
        {
            continue;
        }

        if (idade >= 18)
        {
            maiorIdade++;
        }

        porcHomem = 100 * homem / (homem + mulher);
        porcMulher = 100 - porcHomem;
    }
    printf("\n\nPerfil da Turma: \n\n");
    printf("Percentual de Homens = %i%%\n", porcHomem);
    printf("Percentual de Mulheres %i%%\n", porcMulher);
    printf("Idade da pessoa mais velha: %i\n", maisVelho);
    printf("Idade da pessoa mais nova: %i\n", maisNovo);
    printf("Quantidade de maiores de idade: %i\n\n", maiorIdade);
}