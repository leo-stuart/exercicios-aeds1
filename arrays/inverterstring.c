#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int vowels = 0;
    char letter[100];
    char inverted[100];
    printf("Enter a char: ");
    fgets(letter, sizeof(letter), stdin);
    int length = strlen(letter);
    if(letter[length-1] == '\n'){
        letter[length-1] = '\0';
        length--;
    }

    for (int i = 0; i < length; i++)
    {
        if (i == length)
        {
            inverted[i] = '\0';
        }
        else
        {
            inverted[i] = letter[length - 1 - i];
        }
    }
    int similares = 0;

    for (int i = 0; i < length; i++)
    {
        if (tolower(inverted[i]) == tolower(letter[i]))
        {
            similares++;
        }
    }
    if(similares == length){
        printf("Palindrome");
    }

    printf(" %s\n", inverted);
}