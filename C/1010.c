//This program reads a code of a product, its amount and its price and calculate the value to pay.
#include<stdio.h>
int main(void){
//Codes of products and its amount
    int a,b,c,d;
//Prices and final value
    float one,two,value;
    scanf("%d %d %f", &a, &b, &one);
    scanf("%d %d %f", &c, &d, &two);
    value=((b*one)+(d*two));
    printf("VALOR A PAGAR: R$ %.2f\n", value);
return 0;
}