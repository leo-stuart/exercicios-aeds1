#include <stdlib.h>
#include <stdio.h>

int main(){
    int alunos, nota, mediaTurma;
    int somaNota = 0;
    int menorNota = 100;
    int maiorNota = 0;

    printf("Digite quantos alunos tem na sala: ");
    scanf("%i", &alunos);

    for(int i = 0; i < alunos; i++){
        do{
        printf("Digite a nota do aluno %i: ", i+1);
        scanf("%i", &nota);
        } while(nota > 100 || nota < 0);

        somaNota += nota;

        mediaTurma = somaNota/alunos;

        if(nota > maiorNota){
            maiorNota = nota;
        } else if(nota < menorNota){
            menorNota = nota;
        } else {
            continue;
            }
    }

    printf("\nA media de notas da turma foi: %i\nA maior nota foi: %i\nA menor nota foi: %i\n", mediaTurma, maiorNota, menorNota);
    
    return 0;

}