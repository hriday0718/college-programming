#include <stdio.h>
int main (){
    int startl,endl,i,j;
    printf("Enter the lower limit number of the number range :");
    scanf ("%d",&startl);
    printf("Enter the end limit number of the number range :");
    scanf ("%d",&endl);
    printf("The prime numbers within the range are : \n");
    for (i = startl ; i <= endl ; i++){
        int notprime = 0;
        for (j = 2 ; j <= i/2 ; j++){
            if (i % j == 0){
                notprime = 1;
                break;
            }
        }if(notprime == 0){
            printf("%d \n",i);
        }
    }return 0;
}