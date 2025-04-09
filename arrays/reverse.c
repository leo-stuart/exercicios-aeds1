#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5];

    printf("Digite 5 numeros inteiros:\n");
    scanf("%i", &array[0]);
    scanf("%i", &array[1]);
    scanf("%i", &array[2]);
    scanf("%i", &array[3]);
    scanf("%i", &array[4]);

    for (int i = 4; i >= 0; i--){
        printf("%i\n", array[i]);
    }
}