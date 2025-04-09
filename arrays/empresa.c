#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    bool erro, firstInput = 1;
    int maiorMais = 0, maiorMenos = 0, preco, n;
    do{
        printf("Numero de mercadorias: ");
        scanf("%i", &n);
        erro = n < 1;
    }while(erro);

    for(int i = 0; i < n; i++){
        do{
        printf("Preço do programa %i: ", i+1);
        scanf("%i", &preco);
        erro = preco <= 0;
        }while(erro);

        if(firstInput){
            if(preco < 2000){
                maiorMenos = preco;
                firstInput = 0;
            } else {
                maiorMais = preco;
                firstInput = 0;
            }
        }

        if(preco > maiorMais){
            maiorMais = preco;
        } else if(preco > maiorMenos && preco < 2000){
            maiorMenos = preco;
        }
    }

    printf("Maior preço ate 2000 reais: %i\nMaior preço a partir de 2000 reais: %i\n", maiorMenos, maiorMais);

}