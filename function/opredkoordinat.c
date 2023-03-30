#include <stdio.h> 
// #include <stdlib.h> 
#include <locale.h>

int Bissectrice(double x, double y);
int Gorisontal(double x, double y);
int Wertical(double x, double y);

int main(){
    double x;
    double y;
    scanf("%lf", &x); 
    scanf("%lf", &y);
    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%d", Wertical && Gorisontal || Bissectrice );
    return 0;
}

int Bissectrice(double x, double y){
    int res = -1;
    res = (y <= -x);
    return res;
}

int Gorisontal(double x, double y){
    int res = -1;
    res = (y > 3);
    return res;
}

int Wertical(double x, double y){
    int res = -1;
    res = (x > 4);
    return res;
}
/*
На вход получаем x, y
На выход получаем 1, 0
*/