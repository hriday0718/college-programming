#include<stdio.h>
int main(){
    int a,b,x,y,k;
    printf("Swapping two numbers \n");
    printf("Enter the value of first number:");
    scanf("%d",&a);
    printf("Enter value of second number:");
    scanf("%d",&b);
    printf("Before swapping: a = %d,b = %d \n",a,b);
    x = a; y =b;
    k = x;
    x = y;
    y = k;
    printf("\n Using third variable : a = %d, b = %d \n",x,y);
    x = a ; y = b ;
    x = x + y;
    y = x - y;
    x = x - y;
    printf ("\n Without third variable: a =%d,b =%d \n",x,y);
    return 0;
}