#include <stdio.h>
int main (){
    float a,b, sum = 0 , diff = 0;
    printf("Enter the numbers a and b :");
    scanf ("%f %f", &a,&b);
    sum = a + b;
    diff = a - b;
    printf("The sum is %f \n",sum);
    printf("The difference is %f \n",diff);
    return 0;
}