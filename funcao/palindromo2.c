#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int resto = 0, reversed = 0;

int create_reversed(int);

int main(){
    int num = 10000001;
    if(num != create_reversed(num)){
        printf("nao palindromo\n");
    } else {
        printf("palindromo\n");
    }
}

int create_reversed(int num){
    if(num/10 >= 1){
        resto = num%10;
        reversed = (reversed * 10) + resto;
        create_reversed(num/10);
    } else {
        resto = num%10;
        reversed = (reversed * 10) + resto;
    }
    return reversed;
}