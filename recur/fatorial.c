#include <stdio.h>
#include <stdlib.h>

int fatorial(int);

int main(){
    printf("%i\n", fatorial(5));
}

int fatorial(int n){
    // if(n == 1){
    //     return 1;
    // }
    // return n * fatorial(n-1);
    int resultado = n;
    for(int i = 1; i < n; n--){
        resultado = resultado * (n-1);
    }
    return resultado;
}