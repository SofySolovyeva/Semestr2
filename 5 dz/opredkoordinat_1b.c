#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>

int main() {

    double x;
    double y;
    scanf("%lf", &x); 
    scanf("%lf", &y);
    printf("%lf\n", x);
    printf("%lf\n", y);

    if (((x > 0) && (y > 0) && (x <= 5) && (y <= 5) && ((pow((y - 5), 2) + pow((x - 5), 2)) >= 25)) || (pow((y - 5), 2) + pow((x - 5), 2) >= 25)){
        printf("1");
    } 
    else{
        printf("0");
    }
    return 0;
}

// тестики
// 1) x = 5, y = 5, answer = 0 
// 2) x = 7, y = -9, answer = 0 
// 3) x = 0, y = 0, answer = 0 
// 4) x = -5, y = 3, answer = 0 
// 5) x = 1, y = 1, answer = 1 
// 6) x = 1, y = 2, answer = 1 
// 7) x = 15, y = 1, answer = 0 
// 8) x = 4, y = -4, answer = 0 
// 9) x = 5, y = 10, answer = 1 
// 10) x = 3, y = 4, answer = 0