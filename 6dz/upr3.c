//тактика 1 (статический массив)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print(int naibraz, int arr[naibraz]);
void append(int arr[], int naibraz, int k);
void insert(int arr[], int naibraz, int k);

int main(){
    int i = 0;
    int k;
    int naibraz;
    scanf("%d", &naibraz);
    int arr[naibraz];
    int stuk;
    scanf("%d", &stuk);
  
    if(naibraz < stuk){
        printf("%s\n","Слегка не помещаемся");
        exit(EXIT_SUCCESS);
    }
    else{
        for(i = 0; i < naibraz; i++){
            if (i < stuk){
                 arr[i] = rand()%10;
             }
             else{
                 arr[i] = 0;
             }
        }
        print(naibraz, arr); 
        k = 45;
        append(arr, naibraz, k);
        insert(arr, naibraz, k);
    }
    return 0;
}

void print(int naibraz, int arr[naibraz]){
    int i;
    for(i = 0; i < naibraz; i++){
        printf("%d\n", arr[i]);
    }
}
void append(int arr[], int naibraz, int k){
    arr[naibraz - 1] = k;
    print(naibraz, arr);
}
void insert(int arr[], int naibraz, int k){
    arr[naibraz/2] = k;
    print(naibraz, arr);
}
