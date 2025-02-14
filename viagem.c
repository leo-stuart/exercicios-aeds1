#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vel;
    float dist, tempo;

    printf("Qual a distancia a ser percorrida em Km: ");
    scanf("%f", &dist);
    printf("Qual a velocidade média em suas viagens em Km/h: ");
    scanf("%i", &vel);

    tempo = dist/vel;

    if(tempo<2){
        printf("Você gastará %.1f hora em sua viagem!\n", tempo);
    }
        
    else{
        printf("Você gastará %.1f horas em sua viagem!\n", tempo);
    }
    
}