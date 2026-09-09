#include <stdio.h>
int main(){
    int sum = 0,product = 1, digit ,num;
    printf("Enter the number :");
    scanf("%d",&num);
    while(num != 0){
        digit = num % 10;
        sum += digit;
        product *=digit;
        num = num/10;
    }printf("The sum of the digits of the number is : %d \n",sum);
    printf("The product of the digits of the number is : %d \n",product);
    return 0;
}