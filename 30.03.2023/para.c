#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define ARR_SIZE 10

int main(){

    int i = 0;
    selocate(LC_ALL, "Rus");

    int* ptrArr = (int*)malloc(ARR_SIZE * sizeof(int));
    for(i = 0; i < ARR_SIZE; i++){
        ptrArr[0] = i + 15;

    }
    
     
}