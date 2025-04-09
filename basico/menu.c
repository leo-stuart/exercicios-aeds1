#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int escolha;
    printf("Código   Prato         Preço\n");
    printf("  1      Hamburguer    R$ 19,00\n");
    printf("  2      Pizza         R$ 40,00\n");
    printf("  3      Salada        R$ 18,00\n");
    printf("  4      Refrigerante  R$  7,00\n\n");

    do {
        printf("Escolha uma opção [1 a 4]: ");
        scanf("%i", &escolha);
    } while (escolha > 4 || escolha <1);

    switch (escolha)
    {
    case 1:
        printf("\nVocê escolheu Hamburguer. Preço R$19,00\n");
        break;
    case 2:
        printf("\nVocê escolheu Pizza. Preço R$40,00\n");
        break;
    case 3:
        printf("\nVocê escolheu Salada. Preço R$18,00\n");
        break;
    case 4:
        printf("\nVocê escolheu Refrigerante. Preço R$7,00\n");
        break;
    
    default:
        break;
    }
}