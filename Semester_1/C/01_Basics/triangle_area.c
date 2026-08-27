#include <stdio.h>
#include<math.h>
int main(){
    double a,b,c,s,area;
    printf("Enter side a :");
    scanf("%lf",&a);
    printf("Enter side b :");
    scanf("%lf",&b);
    printf("Enter side c :");
    scanf("%lf",&c);
    s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    if (area > 0){
        printf("The area of the triangle is %.3lf \n",area);
    }else{
        printf("Invalid area");
    }return 0;
}