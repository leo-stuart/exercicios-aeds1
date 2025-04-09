#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void apresentacao();

int main(){
    apresentacao();
}

void apresentacao(){
    char nome[] = "Eu sou o LEO!";
    int lenght = strlen(nome);
    for(int i = 0; i < lenght; i++){
        nome[i] = toupper(nome[i]);
    }
    printf("%s\n", nome);
}