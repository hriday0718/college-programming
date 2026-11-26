#include <stdio.h>
int sumNatural(int n){
    int sum = 0;
    for (int i = 1;i <= n; i++){
        sum = sum + i;
    }return sum;
}int main(){
    int n,result;
    printf("Enter the Nth natural number : ");
    scanf("%d",&n);
    result = sumNatural(n);
    printf("Sum of %d natural numbers is %d \n",n,result);
    return 0;
}