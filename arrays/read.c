#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int vowels = 0;
    char letter[100];
    printf("Enter a char: ");
    fgets(letter, sizeof(letter), stdin);
    for(int i = 0; i < strlen(letter); i++){
        letter[i] = tolower(letter[i]);
        if(letter[i] == 'a' || letter[i] == 'e' || letter[i] == 'i' || letter[i] == 'o' || letter[i] == 'u'){
            vowels++;
        }
    }

    printf("You entered: %s\nThere are %i vowels in the string\n", letter, vowels);
}