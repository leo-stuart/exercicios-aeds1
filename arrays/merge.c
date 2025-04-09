#include <stdio.h>
#include <stdlib.h>

int main(){
    int array1[3] = {1,2,3};
    int array2[3] = {4,5,6};
    int merge[6];

    for(int i = 0; i < 6; i++){
        if(i < 3){
            merge[i] = array1[i];
        } else {
            merge[i] = array2[i-3];
        }
    }

    for(int j = 0; j < 6; j++){
        printf("%i\n", merge[j]);
    }
}