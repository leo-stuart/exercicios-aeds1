#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integers[5] = {123, 4390, 32910, 34, 0};
    int maior = 0;

    for (int i = 0; i < 5; i++)
    {
        if(integers[i] > maior){
            maior = integers[i];
        } else {
            continue;
        }
    }

    printf("O maior numero do array eh: %i\n", maior);
    return 0;
}