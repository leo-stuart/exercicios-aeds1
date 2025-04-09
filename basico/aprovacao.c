#include <stdio.h>
#include <stdlib.h>

int main()
{
    // nota 1
    float nota1, nota2, nota3, nota4, media;
    printf("Digite sua nota na primeira prova: ");
    scanf("%f", &nota1);
    if (nota1 > 10 || nota1 < 0)
    {
        printf("Nota invalida, digite novamente: ");
        scanf("%f", &nota1);
    }
    else
    {
        printf("Nota valida, anotado!");
    }

    // nota 2
    printf("Digite sua nota na segunda prova: ");
    scanf("%f", &nota2);
    if (nota1 > 10 || nota1 < 0)
    {
        printf("Nota invalida, digite novamente: ");
        scanf("%f", &nota2);
    }
    else
    {
        printf("Nota valida, anotado!");
    }

    // nota 3
    printf("Digite sua nota na terceira prova: ");
    scanf("%f", &nota3);
    if (nota1 > 10 || nota1 < 0)
    {
        printf("Nota invalida, digite novamente: ");
        scanf("%f", &nota3);
    }
    else
    {
        printf("Nota valida, anotado!");
    }

    // nota 4
    printf("Digite sua nota na quarta prova: ");
    scanf("%f", &nota4);
    if (nota1 > 10 || nota1 < 0)
    {
        printf("Nota invalida, digite novamente: ");
        scanf("%f", &nota4);
    }
    else
    {
        printf("Nota valida, anotado!");
    }

    media = nota1 * nota2 * nota3 * nota4 / 4;
    if (media >= 7)
    {
        printf("Voce foi aprovado com uma media de %.1f pontos\n", media);
    }
    else
    {
        printf("Voce foi reprovado.\n");
    }
}