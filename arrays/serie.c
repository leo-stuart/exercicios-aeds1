#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double h = 1;
    double numerador = 1;
    double denominador = 3;
    int n;

    printf("Digite quantos termos: ");
    scanf("%i", n);

    for(int i = 0; i < n; i++){
        h = h + numerador/denominador;
        pow(denominador, 2);
    }
    printf("%lf\n", h);
}