#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int teste(int, int *, int *);

int main(){
    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    teste(99, a, b);
    printf("a: %i\nb: %i\n", *a, *b);
    free(a);
    free(b);
    return 0;
}

int teste(int n, int *b, int *k){
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            *b = i;
            *k = n / i;
            return 1;
        }
    }
    return 0;
}
