#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char find;
    char sentence[100];
    printf("Type a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    printf("Letter to find: ");
    scanf(" %c", &find);

    char *found = strchr(sentence, find) ;
    int position = found - sentence;
    if(found != NULL){
    printf("%c\n", found[0]);
    printf("\n%i\n", position);
    }
}