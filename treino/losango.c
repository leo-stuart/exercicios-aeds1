#include <stdio.h>
#include <stdlib.h>

void losango(int);

int main(){
    int altura;
    scanf("%i", &altura);
    losango(altura);
}

void losango(int altura){
    for(int i = 0; i < altura; i++){ // rows
        for(int j = 0; j < altura - (i+1); j++){ //coluna
            printf(" ");
        }
        for(int j = 0; j < (2*i)+1 ; j++){ //coluna
            printf("*");
        }
        printf("\n");
    }
    for(int x = altura-2; x >= 0; x--){ // rows
        for(int j = 0; j < altura - (x+1) ; j++){ //coluna
            printf(" ");
        }
        for(int j = 0; j < (2*x)+1; j++){ //coluna
            printf("*");
        }
        printf("\n");
    }
}