#include <stdio.h>
int main(){
    int l,u,rev,d,rem;
    printf("Enter the lower limit of the range :");
    scanf("%d",&l);
    printf("Enter the upper limit of the range :");
    scanf("%d",&u);
    printf("The palindrome numbers are :-> \n");
    for (int i = l ; i <= u ; i++){
        d = i;
        rev = 0;
        while (d > 0){
            rem = d % 10;
            rev = rev*10 + rem;
            d = d / 10;
        }if (rev == i){
            printf("%d \n",i);
        }
    }return 0;
}