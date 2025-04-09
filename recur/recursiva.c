#include <stdio.h>
#include <stdlib.h>

int recursiva(int);

int main(){
recursiva(5);
printf("\n");
}

int recursiva(int a){
    if(a == 1){
        printf("%i ", a);
        return 1;
    }
    recursiva(a-1);
    printf("%i ", a);
    return a;
}