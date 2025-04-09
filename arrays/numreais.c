#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros, amplitude;
    int maior, menor;
    int firstInput = 1; //Flag

    do{
        printf("Digite 1 numero real: ");
        scanf("%i", &numeros);

        if (numeros == 0)
        {
            break;
        }
        
        if(firstInput){
            menor = maior = numeros;
            firstInput = 0;
        } else if(numeros > maior){
            maior = numeros;
        } else if(numeros < menor){
            menor = numeros;
        } else {
            continue;
        }
    }while(1);

    amplitude = maior - menor;

    printf("A amplitude foi: %i\n", amplitude);
}   