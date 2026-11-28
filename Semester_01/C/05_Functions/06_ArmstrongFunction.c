#include <stdio.h>
int countDigits(int n){
    int count = 0 ;
    while (n != 0){
        count++;
        n = n / 10;
    }return count;
}int power(int base,int exponent){
    int result = 1;
    for(int i = 0 ; i < exponent ; i++){
        result = result * base;
    }return result;
}int isArmstrong(int n){
    int original = n;
    int sum = 0;
    int digit;
    int digits = countDigits(n);
    while(n != 0){
        digit = n % 10;
        sum = sum + power(digit,digits);
        n = n / 10;
    }if (sum == original){
        return 1;
    }else{
        return 0;
    }
}int main(){
    int n ;
    printf("Enter a number :");
    scanf("%d",&n);
    if(isArmstrong(n)){
        printf("%d is an Armstrong number.\n",n);
    }else{
        printf("%d is not an Armstrong number.\n",n);
    }return 0;
}