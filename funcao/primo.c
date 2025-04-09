#include <stdio.h>
#include <stdlib.h>

int isPrime(int);
int leia(void);

int main(){
    int num;
    num = leia();
    isPrime(num);
}

int leia(void){
    int a;
    printf("Digite um numero: ");
    scanf("%i", &a);
    return a;
}

int isPrime(int a){
    for(int i = 2; i <= a/2; i++){
        if(a%i == 0){
            printf("Nao e primo\n");
            return 0;
        }
    }
    printf("E primo\n");
    return 0;
}