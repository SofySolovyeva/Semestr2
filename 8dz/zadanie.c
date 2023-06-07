#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    
    int r;
    int schet = 9;
    int Ra;
    float We = 7.2921159*pow(10,-5);
    float i = (63.4*3.14)/180;
    float m = 398600.4;
    float Rp = (pow(We, 2) * pow(45000, 4) * pow(cos(i), 2)) / (2 * m - pow(We, 2) * pow(45000, 3) * pow(cos(i), 2));
    
    FILE* file = fopen("dz8.txt", "w+");

    for ( Ra = 1; Ra <= 60000; Ra += 10){
        float Va = sqrt((2 * m * Rp) / (Ra * (Ra + Rp)));
        float Vw = We * Ra * cos(i);
        if (Va > Vw){
            fprintf(file, "%f\n", Va);
            fprintf(file, "%f\n", Vw);
        }
        else{
            while (schet > 0){
                r = Ra - schet;
                schet--;
                Va = sqrt((2 * m * Rp) / (r * (r + Rp)));
                Vw = We * r * cos(i);
                if (Va > Vw){
                    fprintf(file, "%f\n", Va);
                    fprintf(file, "%f\n", Vw);
                }
            }
            break;
        }
    }
    fclose(file);
    return 0;
}
