#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[5] = {1,2,3,4,5};
    int procurar;

    printf("Digite um numero para procurar no array: ");
    scanf("%i", &procurar);

    for(int i = 0; i < 5; i++)
    {
        if(numeros[i] == procurar){
            printf("Number found!\n");
            break;
        } else {
            continue;
        }
    }
}