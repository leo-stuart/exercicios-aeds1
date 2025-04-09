#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L;
    int primeiro = 0;
    int proximo;
    int segundo = 1;

    scanf("%d",&L);

    for (int i = 0; i <= L; i++)
    {
        printf(" %i,", primeiro);
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;

    }
    printf("\n");
    return 0;
}