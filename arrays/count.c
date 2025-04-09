#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char sentence[100];
    int words = 1;
    printf("Type a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    int length = strlen(sentence);

    for(int i = 0; i < length; i++){
        if(sentence[i] == ' '){
            words++;
        }
    }
    printf("%i\n", words);
}