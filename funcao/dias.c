#include <stdio.h>
#include <stdlib.h>

int diasVividos(int);

int main(){
    int x;
    scanf("%i", &x);
    printf("Dias vividos: %i\n", diasVividos(x));
}

int diasVividos(int idade){
    return idade * 365;
}