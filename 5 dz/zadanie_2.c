#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char* getInput();
bool testInput(char*);
int strToInt(char*);
void printInt(int);

int chiselka;
char* a;
char* c;
int u;

int main(){

    c = getInput();
    if (testInput(c) == true) {
        u = strToInt(c);
        printInt(u);
        } 
    else {
    printf("0");
        }
    return 0;
}

char* getInput(){

    char* a = malloc(sizeof(char) * 256);
    scanf("%s", a);
    return a;
}

bool testInput(char* a){

    if (sscanf(a, "%d", &chiselka) == 1) {
        return true;
        }       
    else {
    return false;
    }   
};
    
int strToInt(char* a){

    return atoi(a);
};

void printInt(int a){

    printf("%d\n", a);
}