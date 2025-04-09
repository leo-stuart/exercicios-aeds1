#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(){
    int arr[] = {4, 5, 8, 3, 8, 2, 5, 8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp = 0;

    bubbleSort(size, temp, arr);
    size = removeDuplicate(size, arr);
    printArray(arr, size);
}