#include <stdio.h>
#include <stdlib.h>
int maior = 0;

int maior_digito(int n){
    int resto;
    if(n > 0){
        resto = n%10;
        if(resto > maior){
            maior = resto;
        }
        maior_digito(n/10);
    }
    return maior;
}

int main(){
    printf("%i", maior_digito(53984));
}