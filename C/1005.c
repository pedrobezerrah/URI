#include<stdio.h>
//This program is goint to calculate the average between A and B.
int main(void){
    double A,B,MEDIA;
    scanf("%lf", &A);
    scanf("%lf", &B);
//A has weight 3.5 and B has weight 7.5
    A*=3.5;
    B*=7.5;
    MEDIA = ((A+B)/(3.5+7.5));
    printf("MEDIA = %.5lf\n", MEDIA);
return 0;
}