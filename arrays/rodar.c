#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5] = {1,2,3,4,5};
    int shift[5];

    for(int i = 0; i < 5; i++){
        if(i == 0){
            shift[4] = array[0];
        } else {
            shift[i-1] = array[i];
        }
    }

    for(int j = 0; j < 5; j++){
        printf("%i\n", shift[j]);
    }
}