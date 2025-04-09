#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num, par;
    do {
        printf("Digite um numero: ");
        scanf("%i", &num);
    } while (num < 0);

    while (num > 0){
        if(num % 2 == 0)
        {
            printf("%i, ", num);
        } else {
            printf("");
        }
        num--;
    }
    printf("0\n");
}