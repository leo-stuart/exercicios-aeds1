#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void printArray(int arr[], int size){
        for (int i = 0; i < size; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int size, int temp, int arr[]){
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int removeDuplicate(int size, int arr[]){
    int indexValue = 0;
    for(int i = 1; i < size; i++){
        if(arr[i] != arr[indexValue]){
            arr[indexValue+1] = arr[i];
            indexValue++;
        }  
    }
    return indexValue+1;
}