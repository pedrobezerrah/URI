/*This program receives a seller's salary and the total value sold by their
and put 15% over all products sold among the final salary*/
#include<stdio.h>
int main(void){
    char nome[20];
    double salary, sold, total;
    scanf("%s %lf %lf", &nome[0], &salary, &sold);
    total=(salary+(sold*0.15));
    printf("TOTAL = R$ %.2lf\n", total);
return 0;
}