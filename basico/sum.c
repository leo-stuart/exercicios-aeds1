#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum, lastNum;
    sum = 0;
    lastNum = 0;
    printf("Enter a number: ");
    scanf("%i", &num);

    while (num > 0)
    {
        lastNum = num % 10;
        sum = sum + lastNum;
        num = num / 10;
    }

    printf("The sum of the number is equal to %i\n", sum);
}