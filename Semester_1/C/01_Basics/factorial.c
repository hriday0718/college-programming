#include <stdio.h>
int main(){
    int i,n,fac = 1;
    printf("Enter the number  :");
    scanf("%d", &n);
    if (n == 0){
        printf("The value of 0! is equal to 1.");
    }else if (n <= 0){
        printf("The number should be greater than 0.");
    }else{
        for (i = 1 ; i <= n ; i++){
            fac = fac * i;
        }printf("The factorial of the number %d is : %d \n",n,fac);
    }return 0;
}