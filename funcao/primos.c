#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehPrimo(int, int);
void seila(bool);

int main(){
    int a = 13, b = 91;
    bool primo = ehPrimo(a, b);
    seila(primo);
}

bool ehPrimo(int x, int y){
    if(x > y){
        for(int i = 2; i <= y; i++){
            if(x%i == 0 && y%i == 0){
                return false;
            }
        }
    } else{
        for(int i = 2; i <= x; i++){
            if(x%i == 0 && y%i == 0){
                return false;
            }
        }
    }
    return true;
}

void seila(bool is){
    if(is){
        printf("É primo\n");
    } else {
        printf("Nao é primo\n");
    }
}