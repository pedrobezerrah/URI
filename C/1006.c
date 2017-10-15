#include<stdio.h>
//This program is goint to calculate the average between A,B and C.
int main(void){
    float A,B,C,MEDIA;
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
//A has weight 2, B has weight 3 and C has weight 5.
    A*=2;
    B*=3;
    C*=5;
    MEDIA = ((A+B+C)/(2+3+5));
    printf("MEDIA = %.1f\n", MEDIA);
return 0;
}