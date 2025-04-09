#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    float nota, percAprov, percReprov;
    float aprovados = 0;
    float reprovados = 0;
    bool erro;
    
    printf("Nota obtida pelos alunos!\n\n");

    do{
        do{
            printf("Digite sua nota: ");
            scanf("%f", &nota);
            erro = nota > 100 || nota < 0;
        } while(erro);

        if(nota == 0){
            break;
        } else if(nota >= 60){
            aprovados++;
        } else {
            reprovados++;
        }
    }while(1);

    int total = aprovados + reprovados;
    percAprov = 100*aprovados/(float)total;
    percReprov = 100 - percAprov;

    printf("%.2f%% dos alunos foram aprovados!\n", percAprov);
    printf("%.2f%% dos alunos foram reprovados.\n", percReprov);

}