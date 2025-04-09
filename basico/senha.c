#include <stdio.h>
#include <stdlib.h>

int main(){
    int tentativa;
    int senha = 2006;

    printf("Tente descubrir a senha!\n\n");

    do {
        printf("Digite seu chute: ");
        scanf("%i", &tentativa);
    
    } while (tentativa != senha);

    printf("Parabéns, você adivinhou!\n");

    return 0;
}
