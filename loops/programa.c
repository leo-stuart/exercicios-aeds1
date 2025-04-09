#include <stdlib.h>
#include <stdio.h>

int main()
{
    int valores; 
    int soma =0;
    printf("Digite quantos valores serao somados: ");
    scanf("%i", &valores);

    for(int i = 0; i < valores; i++)
    {
        int num = 0;
        printf("\nDigite um valor a ser somado: ");
        scanf("%i", &num);

        soma += num;
    }
    printf("\n%i\n", soma);
    
}