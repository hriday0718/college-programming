#include <stdio.h>
int main(){
    int n,fac = 1,i,sum = 0,d,org;
    printf("Enter the number :");
    scanf("%d",&n);
    org = n;
    while (n>0){
        d = n%10;
        fac = 1;
        for (i = 1 ; i <= d; i++){
        fac = fac * i;
        }sum = sum + fac;
        n = n /10;
    }if(sum == org){
        printf("%d is a Krishnamurthy number. \n",org);
    }else{
        printf("%d isn't a Krishnamurthy number. \n",org);
    }
}