#include <stdio.h>
#include <stdlib.h>
int result =0;
int times_without_operator(int a, int b){
    if(b == 0) return 0;
    return times_without_operator(a, b-1) + a;
}

int main(){
    printf("%i\n", times_without_operator(5, 3));
}