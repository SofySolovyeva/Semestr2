#include <stdio.h>
#include <stdlib.h>

int main(){
    int* ptr;
    int a = 13;

    ptr = &a;
    printf("Pointer inside: %p\n", ptr);
    printf("Pointer: %p\n", &ptr);
    printf("Pointr]er: %p\n", &a);

    int arr[] = {3,4,5};
    int* ptrArr = arr;
    int* ptrArr2 = &arr[0];

    printf("ptrArr: %d\n", *(&arr[0]));
    printf("ptrArr2: %p\n", *arr);

    poiters(ptr, &a);
    return 0;
}

void poiters(int* ptr, int* value){
    
    return 0;
}