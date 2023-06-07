#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define stroch 4
#define stolb 4

int poisk(int arr[stroch][stolb], int vopros);

int main(){
    int i = 0;
    int k = 0;
    int vopros;
    int arr[stroch][stolb];
    scanf("%d", &vopros);   
    for (int i = 0; i < stroch; ++i){
        for (int k = 0; k < stolb; ++k) {
            arr[i][k] = rand() % 10;
            printf("%d\n", arr[i][k]);
        }
    }
    scanf("%d", &vopros);
    for (int i = 0; i < stroch; ++i){
        for (int k = 0; k < stolb; ++k) {
            return poisk(arr[i][k], vopros);
        }
    }
}

int poisk(int arr[stroch][stolb], int vopros){
    int i = 0;
    int k = 0;
    for (int i = 0; i < stroch; ++i){
        for (int k = 0; k < stolb; ++k) {
            if(vopros == arr[i][k]){
                return i + 1, ' ', k + 1;
            }
        }
    }
}