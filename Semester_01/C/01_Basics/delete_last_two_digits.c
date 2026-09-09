#include <stdio.h>
int main (){
    int n , l , nn;
    printf("Enter the number :");
    scanf("%d",&n);
    l = n % 100;
    printf("The last two digits of the number are %d \n",l);
    nn = n / 100;
    printf("The new number is %d \n",nn);
    return 0;
}