#include <stdio.h>
int main (){
    int n , l , q , le;
    printf("Enter the number :");
    scanf("%d",&n);
    l = n % 100;
    printf("The last two digits of the number are %d \n",l);
    q= n/100;
    le = q*100 + (l%10)*10 + l/10;
    printf("The new number is %d \n",le);
    return 0;
}