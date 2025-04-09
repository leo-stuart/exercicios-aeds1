#include <stdio.h>
#include <stdlib.h>

int power(int, int);
int leia(void);

int main(){
    int numBase, numExpo, resultado;
    printf("Base\n");
    numBase = leia();
    printf("Expoente\n");
    numExpo = leia();
    resultado = power(numBase, numExpo);
    printf("%i\n", resultado);
}

int leia(void){
    int num;
    printf("Digite o numero: ");
    scanf("%i", &num);
    return num;
}

int power(int base, int expo){
    int atual = base, resultado;
    for(int i = 2; i <= expo; i++){
        resultado = atual * base;
        atual = resultado;
    }
    return resultado;
}