#include <stdio.h>
int main (){
    int digit , lastnumber , q;
    printf("Enter the number :");
    scanf("%d",&digit);
    q = digit/10;
    lastnumber = digit - (q*10);
    printf("The last digit is %d \n",lastnumber);
    return 0;
}