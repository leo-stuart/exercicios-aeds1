#include <stdio.h>
#include <stdlib.h>

int resto = 0;

void digitos(int x){
    if(x/10 >= 1){
        resto = x%10;
        printf("%i\n", resto);
        digitos(x/10);
        // digitos++;
    } else if(x < 10){
        printf("%i\n", x);
    }
}

int main(){
    int digitosss = 1, x;
    x = 1789;
    // while(x/10 >= 1){
    //     x /= 10;
    //     digitos++;
    // }
    // printf("%i\n", digitos);
    digitos(x);
}
