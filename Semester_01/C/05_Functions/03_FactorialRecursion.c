#include <stdio.h>
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }return n*factorial(n-1);
}int main(){
    int n,fac;
    printf("Enter the number whose factorial is to be found :");
    scanf("%d",&n);
    fac = factorial(n);
    printf("The factorial of the number %d is = %d \n",n,fac);
    return 0;
}