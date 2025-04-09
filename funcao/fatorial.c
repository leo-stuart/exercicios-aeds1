#include <stdio.h>
#include <stdlib.h>

int leiaFunc();
int fatorialFunc(int);
int fatorialRecursive(int);

int main(){
    int num, fatorial;
    num = leiaFunc();
    fatorial = fatorialRecursive(num);
    printf("O fatorial de %i é igual a %i\n", num, fatorial);
}

int leiaFunc(){
    int a;
    printf("Escreva o numero para descobrir seu fatorial: ");
    scanf("%i", &a);
    return a;
}

int fatorialFunc(int a){
    int fatorial = 0;
    int b = a-1;
    if(a == 0 || a == 1){
        fatorial = 1;
        return fatorial;
    }
    while(b >= 1){
        fatorial = a * b;
        a = fatorial;
        b--;
    }
    return fatorial;
}

int fatorialRecursive(int a){
    if(a == 1){
        return 1;
    }
    return a * fatorialRecursive(a-1);
    
}