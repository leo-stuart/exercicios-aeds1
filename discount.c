#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price, pd, da;

    printf("Product price: ");
    scanf("%f", &price);

    pd = price*0.9;
    da = price-pd;

    printf("The new price is %.2f dollars. %.2f dollars cheaper than it was.\n", pd, da);
}