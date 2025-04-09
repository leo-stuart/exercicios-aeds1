#include <stdio.h>
#include <stdlib.h>

int resto = 0, soma = 0;

int digitos(int x){
    if(x/10 >= 1){
        resto = x%10;
        soma += resto;
        digitos(x/10);
    } else if(x < 10){
        resto = x%10;
        soma += resto;
    }
    return soma;
}

int main(){
    int x = 124;
    int resultado = digitos(x);
    printf("%i\n", resultado);
}