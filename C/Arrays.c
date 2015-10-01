#include <stdio.h>
#include <stdlib.h>

void popArray(int* array, int size, int value){
    int i;
    for(i=0; i < size; i++){
        array[i] = value;
    }
}

void printArray(int* array, int size){

    if (size <= 0){
        puts("");
        return;
    }

    int i;
    for(i=0; i < size-1; i++){
        printf("%d ", array[i]);
    }
    printf("%d\n", array[i]);
}


