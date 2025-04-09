#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;

    printf("Tamanho do triangulo: ");
    scanf("%i", &size);

    for(int i = 0; i < size; i++){ //rows
        for(int j = 0; j < i+1; j++){ //collums
            printf("%i", j+1);
        }
        printf("\n");
    }
}