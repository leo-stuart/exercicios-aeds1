#include <stdio.h>

int main(void){
    float altura, peso;
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    peso = (72.7*altura)-58;
    
    
    printf("Seu peso ideal é %.2f\n", peso);
}
