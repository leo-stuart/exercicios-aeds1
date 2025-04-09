#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    printf("Digite um ano: ");
    scanf("%i", &ano);

    if(ano % 4 == 0){
        if(ano % 100 == 0 && ano % 400 == 0){
            printf("%i foi um ano bissexto\n", ano);
        } else {
            printf("%i nao foi um ano bissexto\n", ano);
        }
    } else {
        printf("%i nao foi um ano bissexto\n", ano);
    }
}