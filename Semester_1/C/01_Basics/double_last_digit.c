#include <stdio.h>
int main (){
    int n , l , nn , q;
    printf("Enter the number :");
    scanf("%d",&n);
    l = n % 10;
    printf("The last number is %d \n",l);
    q = n/10;
    nn = (q*10)+(l*2);
    printf("The new number is %d \n",nn);
    return 0;
}