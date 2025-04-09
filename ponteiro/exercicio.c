#include <stdio.h>
#include <stdlib.h>

void leia(float *);
float soma(float *, float *);

int main(){
    float *a = malloc(sizeof(float));
    float *b = malloc(sizeof(float));
    leia(a);
    leia(b);
    
    float soma_var = soma(a, b);

    free(a);
    free(b);
    return soma_var;
}

void leia(float *x){
    scanf("%f", x);
}

float soma(float *x, float *y){
    return *x+*y;
}