#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i = 0;
    int k = 0;
    int gl = -2;
    char arrgl[6] = "aouyie";
    
    char slovo[20];
    scanf("%s", &slovo);
    char *slovo1 = slovo;

    for (i = 0; i < 20 ; i++) {
        for (k = 0; k < 6; k++){
            if (*(slovo1 + i) == arrgl[k]) {
                gl++;
            }
        }
    }
    int sogl = strlen(slovo) - gl;

    printf("%d гласные ", gl);
    printf("%d согласные ", sogl);
    
    return 0;
}
