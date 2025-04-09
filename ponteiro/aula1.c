#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 50;
    int *ptr = &x;
    printf("\nA variavel x foi declarada na posicao %p\n", &x);
    printf("A variavel ptr foi declarada na posicao %p\n", &ptr);
    printf("Aponta para %p\n", ptr);
    printf("Ocupando %lu bytes\n", sizeof(x));
    printf("Ocupando %lu bytes\n", sizeof(ptr));
    printf("Valor de x = %i\n", x);
    printf("Valor de ptr = %i\n", *ptr);

    // int *x;
    // printf("o ponteiro foi declarado na posicao %p\n", &x);
    // x = malloc(sizeof(int));
    // printf("\nOcupando %lu bytes\n", sizeof(x));
    // printf("\nE aponta para %p\n", x);
    // *x = 7;
    // printf("\nE guarda o valor %i\n", *x);
    // free(x);

}
