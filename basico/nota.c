#include <stdio.h>
#include <stdlib.h>

int main(){
    int nota;

    printf("Sua nota em conceito!");

    printf("Digite sua nota: ");
    scanf("%i", &nota);

    if(nota >= 90 && nota <= 100){
        printf("Sua nota foi: A\n");
    } 
    else if(nota >= 80 && nota <= 89){
        printf("Sua nota foi: B\n");
    }
    else if(nota >= 70 && nota <= 79){
        printf("Sua nota foi: C\n");
    }
    else if(nota >=60 && nota <= 69){
        printf("Sua nota foi: D\n");
    }
    else if(nota <=59 && nota>= 0){
        printf("Sua nota foi: E\n");
    }
    else {
        printf("Nota invalida\n");
    }

    return 0;
}