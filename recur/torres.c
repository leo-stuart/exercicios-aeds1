#include <stdio.h>
#include <stdlib.h>

void torre(int, int, int, int);

int main(){
    torre(32, 1, 3, 2);
    return 0;
}

void torre(int n_discos, int pino_inicial, int pino_final, int pino_temp){
    if(n_discos == 1){
        printf("%i => %i\n", pino_inicial, pino_final);
    } else {
        torre(n_discos-1, pino_inicial, pino_temp, pino_final);
        printf("%i => %i\n", pino_inicial, pino_final);
        torre(n_discos-1, pino_temp, pino_final, pino_inicial);
    }
}