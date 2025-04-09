#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int resto = 0, digit = 0, reversed = 0;

int digitos(int);
bool palindromo(int, int);

int main(){
    int num = 10000001;
    if(palindromo(num, digitos(num))){
        printf("Palindromo\n");
    } else {
        printf("Nao e palindromo\n");
    }
}

int digitos(int num){
    if(num/10 >= 1){
        resto = num%10;
        digit++;
        digitos(num/10);
    } else {
        resto = num%10;
        digit++;
    }
    return digit;
}

bool palindromo(int num, int digit){
    int length = digit;
    for(int i = 0; i < digit/2; i++){
        int first_right = num%10;
        printf("%i\n", first_right);
        int first_left = num/pow(10, length - 1);
        printf("%i\n", first_left);

        if(first_left != first_right){
            return false;
        }

        num = num - first_left*pow(10, length - 1);
        num = (num - first_right)/10;
        length -= 2;
    }
    return true;

}

int create_reversed(int num){
    if(num/10 >= 1){
        resto = num%10;
        digit++;
        reversed = (reversed * 10) + resto;
        create_reversed(num/10);
    } else {
        resto = num%10;
        reversed = (reversed * 10) + resto;
    }
    return digit;
}