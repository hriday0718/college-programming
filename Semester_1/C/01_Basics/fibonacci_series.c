#include <stdio.h>
int main(){
    int n1 =0,n2 = 1,n,i,fib =0,next;
    printf("Enter the end limit of the range of the series :");
    scanf("%d",&n);
    printf("\n   Fibonacci Series    \n");
    printf("%d \n",n1);
    printf("%d \n",n2);
    for (i = 0 ;i <= n -2 ;i++){
        next = n1 + n2;
        printf("%d \n",next);
        n1 = n2;
        n2 = next;
    }return 0;
}