#include <stdio.h>
#include<math.h>
int main(){
    int n,org,digit,sum = 0,i,power = 1,x,temp;
    printf("Enter the number :");
    scanf("%d",&n);
    org = n;
    temp = n;
    while (temp >= 10){
        temp = temp / 10;
        power ++;
    }
    while (n > 0){
        digit = n % 10 ;
        x = pow(digit,power);
        sum = sum + x;
        n = n /10;
        power --;
    }if(sum == org){
        printf("%d is  a Disarium number. \n",org);
    }else{
        printf("%d isn't  a Disarium number. \n",org);
    }return 0;
}