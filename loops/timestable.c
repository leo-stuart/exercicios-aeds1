#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            printf("%i x %i = %i  ", i, j, i*j);
        }
        printf("\n");
    }
}