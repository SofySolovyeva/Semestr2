#include <stdio.h> 
#include <stdlib.h> 
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
    printf("%d", (!Wertical(x, y) && !Gorisontal(x, y) && Bissectrice(x, y)) || (Wertical(x, y) && Gorisontal(x, y)));
    printf("%lf\n", x);
    printf("%lf\n", y);
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
// тестики
// 1) x = 5, y = 6, answer = 1 
// 2) x = 7, y = -9, answer = 0 
// 3) x = 0, y = 0, answer = 1 
// 4) x = -5, y = 3, answer = 1 
// 5) x = 6, y = 2, answer = 0 
// 6) x = 7, y = -15, answer = 0 
// 7) x = 1, y = 1, answer = 0 
// 8) x = 4, y = -4, answer = 1 
// 9) x = -5, y = -4, answer = 1 
// 10) x = -1, y = 0, answer = 1 
// 11 x = 98, y = 99