#include <stdio.h>
#include <stdlib.h>

void apresentacao(void); //declaracao

int main(){
    apresentacao(); //chamada
    return 0;
}

void apresentacao(void){ //definicao
    printf("Hello world!\n");
    return ;
}