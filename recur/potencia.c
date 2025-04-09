#include <stdio.h>
#include <stdlib.h>

int potencia(int, int);

int main(){
    printf("%i\n", potencia(2, 8));
}

int potencia(int base, int expo){
    if(expo == 0){
        return 1;
    }
    return base * potencia(base, expo-1);
}