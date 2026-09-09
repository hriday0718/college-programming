#include <stdio.h>
int main(){
    int n1, n2, l1, l2, nn1,nn2,q1,q2,pdt;
    printf("Enter the First number:");
    scanf("%d",&n1);
    printf("Enter the Second number:");
    scanf("%d",&n2);
    l1 = n1%10;
    printf("The last digit of first number is: %d \n",l1);
    l2 = n2%10;
    printf("The last digit of Second number is: %d \n",l2);
    q1 = n1/10;
    q2 = n2/10;
    nn1 = (q1*10) + l2;
    nn2 = (q2*10) + l1;
    pdt = nn1*nn2;
    printf("The product of the new numbers is %d \n",pdt);
}