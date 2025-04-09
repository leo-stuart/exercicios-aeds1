#include <stdio.h>
#include <stdlib.h>

int leiaNum(void);
int parImpFunc(int);

int main(){
    int numUm, perimetro;
    numUm = leiaNum();
    parImpFunc(numUm);
}

int leiaNum(void){
    int num;
    printf("Digite o numero: ");
    scanf("%i", &num);
    return num;
}

int parImpFunc(int a){
    if(a%2 == 0){
        printf("E par!\n");
    } else{
        printf("E impar!\n");
    }
    return 0; 
}