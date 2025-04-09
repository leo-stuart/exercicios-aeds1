#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int leia();
int somaFunc(int, int);
void resultado(int);

int main(){
    int num1, num2, soma;
    num1 = leia();
    num2 = leia();
    soma = somaFunc(num1, num2);
    resultado(soma);
}

int leia(){
    int a;
    printf("Digite um numero: ");
    scanf("%i", &a);
    return a;
}

int somaFunc(int a, int b){
    return a + b;
}

void resultado(int a){
    printf("A soma é %i", a);
}