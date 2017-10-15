//This program calculates and shows the volume of a sphere being provided the value of its radius.
#include<stdio.h>
int main(void){
    double volume, radius, pi;
    pi=3.14159;
    scanf("%lf", &radius);
    volume=((4.0/3.0)*pi*(radius*radius*radius));
    printf("VOLUME = %.3lf\n", volume);
return 0;
}