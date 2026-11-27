#include <stdio.h>
int fibo(int n){
    if(n < 2){
        return n;
    }else{
        return fibo(n-1)+fibo(n-2);
    }
}int main (){
    int x,i;
    printf("Enter the number of terms required :");
    scanf("%d",&x);
    for (i = 0 ; i < x ; i++){
        printf("%d \n",fibo(i));
    }return 0;
}