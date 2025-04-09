#include <stdio.h>
#include <stdlib.h>

// int total = 0;
void decrescente(int, int);
void decrescente2(int);
// int soma(int, int);


int main(){
    int n, m;
    scanf("%i", &n);
    scanf("%i", &m);
    // decrescente(n, m);
    decrescente2(1);
    printf("\n");
    return 0;
}

// int main(){
//     int n = soma(1, 10);
//     printf("%i\n", n);
//     return 0;
// }

void decrescente(int n, int m){
    if(n == m){
        printf("%i", m);
        printf("%i", m);
        return ;
    }
    printf("%i", m);
    decrescente(n, m + 1);
    printf("%i", m);
    return ;
}
void decrescente2(int n){
    if(n == 5){
        printf("%i", n);
        printf("%i", n);
        return ;
    }
    printf("%i", n);
    decrescente2(n + 1);
    printf("%i", n);
    return ;
}

// int soma(int n, int m){
//     if(n == m){
//         total += m;
//         return total;
//     }
//     total += n;
//     soma(n+1, m);
//     return total;
// }