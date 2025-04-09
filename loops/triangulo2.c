#include <stdio.h>
#include <stdlib.h>

int main (){
    int height;
    printf("Tamanho do triangulo: ");
    scanf("%i", &height);

    for(int i = 0; i <= height; i++){ //rows
        for (int j = 0; j <= height-i; j++) // spaces
        {
            printf(" ");
        }
        for (int z = 0; z <= i; z++)
        {
            printf("* ");
        }
        printf("\n");
    }
}