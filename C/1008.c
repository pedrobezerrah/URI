/*This program reads an employee's number,
their worked hours number in a month and the amount they received per hour
to calculate how much this employee'll receive at the end of the month*/
#include<stdio.h>
int main(void){
    int number,hours;
    float amount, salary;
    scanf("%d %d %f", &number, &hours, &amount);
    salary=(amount*hours);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);
return 0;
}