#include <stdio.h>
int main (){
    int n , l , nn;
    printf("Enter the number :");
    scanf("%d",&n);
    l = n % 10;
    printf("The last number is %d \n",l);
    nn = n / 10;
    printf("The new number is %d \n",nn);
    return 0;
}