#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>

void primo(int, int *, int *);

int main(){
    int num = 100, *p1, *p2;
    p1 = malloc(sizeof(int));
    p2 = malloc(sizeof(int));

    primo(num, p1, p2);

    printf("P1: %i\nP2: %i\n", *p1, *p2);
}

//p1 MAIOR numero primo MENOR que m
//p2 MENOR numero primo MAIOR que m
void primo(int m, int *p1, int *p2){
    bool p1_nao_preenchido = true;
    bool p2_nao_preenchido = true;

    int menor = m-1;
    int maior = m+1;

    while(p1_nao_preenchido){
        bool primo = true;
        for(int i = 2; i < menor/2; i++){
            if(menor%i == 0){
                primo = false;
                break;
            }
        }
        if(primo){
            *p1 = menor;
            p1_nao_preenchido = false;
        }
        menor--;
    }

    while(p2_nao_preenchido){
        bool primo = true;
        for(int i = 2; i < maior/2; i++){
            *p2 = maior;
            if(maior%i == 0){
                primo = false;
                break;
            }
        }
        if(primo){
            *p2 = maior;
            p2_nao_preenchido = false;
        }
        maior++;
    }
}