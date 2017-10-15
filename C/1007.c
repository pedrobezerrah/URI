#include<stdio.h>
//This program is going to calculate the difference between the product of A and B with C and D.
int main(void){
    int A,B,C,D,DIFERENCA;
    scanf("%d %d %d %d", &A,&B,&C,&D);
    DIFERENCA=((A*B)-(C*D));
    printf("DIFERENCA = %d\n", DIFERENCA);
return 0;
}