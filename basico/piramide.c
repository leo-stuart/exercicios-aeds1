#include <stdio.h>
#include <stdlib.h>

//TRIANGULO NORMAL
 int main()
 {
     int height;
     printf("Enter pyramid height: ");
     scanf("%i", &height);

    for(int x = 1; x <= height; x++)//rows
    {
        for(int y = 1; y <= height-x; y++){ //spaces
            printf(" ");
        }
        for(int z= 1; z <= x; z++){ // stars
                printf("%i ", z);
            }
        printf("\n");
    }
}
// int main()
// {
//     int height;
//     printf("Enter pyramid height: ");
//     scanf("%i", &height);

//     for (int x = 1; x <= height; x++) // rows
//     {
//         int z;
//         for (int y = 1; y <= height - x; y++)
//         { // spaces
//             printf(" ");
//         }

//         if (x == height)
//         {
//             for (int i = 1; i <= (height * 2) - 1; i++)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         continue;
//         }

//         for (int z = 1; z <= x; z++)
//         { // stars
//             if (z == 1 || z == x)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }

//         printf("\n");
//     }
// }
