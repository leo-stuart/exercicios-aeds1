#include <stdio.h>
#include <stdlib.h>

int vezes = 0;

int digitos_repetidos(int n, int d){
    int resto;
    if(n > 0){
        resto = n%10;
        if(resto == d){
            vezes++;
        }
        digitos_repetidos(n/10, d);
    }
    return vezes;
}

int main(){
    printf("%i\n", digitos_repetidos(535355, 5));
}