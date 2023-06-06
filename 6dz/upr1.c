#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
    int i = 0;
    int m = 1;
    int c = 0;
    int nomer = 0;
    char bukva;
    scanf("%s", &bukva); 
    char arr[8] = {'H','e', 'l', 'l', 'l', 'o', 'l', '\0'};
 
    for( i = 0; i < 6; i++){
        if (arr[i] == bukva & arr[i] == arr[i+1]){
            m = m + 1;
            if (m > nomer){
                nomer = m;
            }
        }
        else {
            if (m > nomer){
                nomer = m;
            }
            m = 1;
        }
        
    }
    printf("%d", nomer);
    return 0; 
}