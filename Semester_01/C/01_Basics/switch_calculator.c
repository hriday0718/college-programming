#include <stdio.h>
#include<math.h>
int main (){
    float a,b;
    int choice;
    printf("Enter 1 for Addition.\n");
    printf("Enter 2 for Substraction.\n");
    printf("Enter 3 for Multiplication.\n");
    printf("Enter 4 for Division.\n");
    printf("Enter 5 for Exponent.\n");
    printf("Enter 6 for finding remainder.\n");
    printf("Enter your choice :");
    scanf("%d",&choice);
    printf("Enter 1st number :");
    scanf("%f",&a);
    printf("Enter 2nd number :");
    scanf("%f",&b);
    switch(choice){
        case 1:printf("\nThe Addition of the two numbers is %.3f \n",a+b);
        break;
        case 2:printf("\nThe Substraction of the two numbers is %.3f",a-b);
        break;
        case 3:printf("\nThe Multiplication of the two numbers is %.3f",a*b);
        break;
        case 4:printf("\nThe Division of the numbers is %.3f",a/b);
        break;
        case 5:printf("\nThe Exponent of the two numbers is %.3f \n",pow(a,b));
        break;
        case 6:printf("\nThe Modulus of the two numbers is %.3f \n",fmod(a,b));
        break;
        default:printf("\nEnter valid choice!\n");
    }return 0;
}