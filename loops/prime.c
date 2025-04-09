#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;

    printf("Enter a positive number: ");
    scanf("%i", &num);

    for (int i = 2; i <= num; i++)
    {
        int isPrime = 1;
        int limit = sqrt(i);

        for (int j = 2; j <= limit; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%i\n", i);
        }
    }
}