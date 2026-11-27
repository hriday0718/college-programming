#include <stdio.h>
void Power(int a,int b){
    int result = 1,i;
    for (i = 0;i < b ; i++){
        result = result*a;
    }printf("%d^%d = %d\n",a,b,result);
    return;
}
int main(){
    int x,y;
    printf("Enter the base number :");
    scanf("%d",&x);
    printf("Enter the power :");
    scanf("%d",&y);
    Power(x,y);
    return 0;
}