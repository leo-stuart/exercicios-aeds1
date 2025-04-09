#include <stdio.h>
#include <stdlib.h>

void leia(float *);
float calculo_imc(float *, float *);

int main(){
    float *altura = malloc(sizeof(float));
    printf("Digite sua altura em metros: ");
    leia(altura);
    float *peso = malloc(sizeof(float));
    printf("Digite seu peso: ");
    leia(peso);
    float *imc = malloc(sizeof(float));
    *imc = calculo_imc(altura, peso);

    printf("%f\n", *imc);
}

void leia(float *x){
    scanf("%.1f", x);
}

float calculo_imc(float *altura, float *peso){
    return *peso/(*altura**altura);
}