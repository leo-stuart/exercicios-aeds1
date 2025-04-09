#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double km, miles, metros, pes, celsius, fahrenheit, kgs, libras;
int kmToMiles(){
    printf("\nDigite um número: ");
    scanf("%lf", &km);
    miles = km/1.609344;
    printf("%.1lf Km são %lf milhas\n", km, miles);
    return 0;
}
int metersToFeet(){
    printf("\nDigite um número: ");
    scanf("%lf", &metros);
    pes = metros*3.2808398950131;
    printf("%.1lf metros são %lf pés\n", metros, pes);
    return 0;
}
int celsiusToFahrenheit(){
    printf("\nDigite um número: ");
    scanf("%lf", &celsius);
    fahrenheit = (celsius*9/5)+32;
    printf("%.1lf graus celsius são %.1lf graus fahrenheit\n", celsius, fahrenheit);
    return 0; 
}
int kgsToPounds(){
    printf("\nDigite um número: ");
    scanf("%lf", &kgs);
    libras = kgs*2.2046223302272;
    printf("%.1lf kgs são %lf libras\n", kgs, libras);
    return 0;
}

int main(){
    int escolha;
    printf("Conversor de Medidas\n\n");
    printf("1 - De Quilômetros para milhas\n");
    printf("2 - De Metros para Pés\n");
    printf("3 - De Célsius para Farenheit\n");
    printf("4 - De Quilogramas para Libras\n\n");

   do {
    printf("Digite sua opção [1 a 4]: ");
    scanf("%i", &escolha);
   } while (escolha > 4 || escolha < 0);

    switch (escolha)
    {
    case 1:
        kmToMiles();
        break;
    case 2:
        metersToFeet();
        break;
    case 3:
        celsiusToFahrenheit();
        break;
    case 4:
        kgsToPounds();
        break;
    default:
        break;
    }

}
