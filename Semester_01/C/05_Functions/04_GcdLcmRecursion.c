#include <stdio.h>
int GCD(int a,int b){
    if (a>b){
        if (a%b == 0){
            return b;
        }return GCD(b,a%b);
    }else{
        if (b%a == 0){
            return a;
        }return GCD(a,b%a);
    }
}int LCM(int a,int b){
    return (a*b)/GCD(a,b);
}int main(){
    int x,y,gcd,lcm;
    printf("Enter 1st number :");
    scanf("%d",&x);
    printf("Enter 2nd number :");
    scanf("%d",&y);
    gcd = GCD(x,y);
    lcm = LCM(x,y);
    printf("GCD of %d and %d is %d \n",x,y,gcd);
    printf("LCM of %d and %d is %d \n",x,y,lcm);
    return 0;
}