#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i = 0, decimal = 0;

int converter_binario(int n){
    int resto;
    if(n > 0){
        resto = n%10;
        decimal = decimal + (resto*pow(2, i));
        i++;
        converter_binario(n/10);
    }
    return decimal;
}

int main(){
    printf("\n%i\n", converter_binario(1011));
}