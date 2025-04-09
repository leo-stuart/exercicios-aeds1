#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float raio, area;
    // pegar a medida do raio
    printf("Medida do raio: ");  
    scanf("%f", &raio);
    // calcular
    area = M_PI*pow(raio, 2);
    // printar resultado
    printf("A área do raio é: %.2f\n", area);
}