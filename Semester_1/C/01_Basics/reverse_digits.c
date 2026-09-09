#include<stdio.h>
int main(){
    int n, rev = 0,digit;
    printf("Enter the number :");
    scanf("%d",&n);
    while (n > 0){
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n /10;
    }printf("The reverse of the given number is %d \n",rev);
    return 0;
}