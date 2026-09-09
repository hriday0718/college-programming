#include <stdio.h>
int main(){
    int choice;
    float temp,result;
    printf("Temperature Conversion\n");
    printf("1.Celsius to Fahrenheit\n");
    printf("2.Fahrenheit to Celsius\n");
    printf("Enter your choice 1 or 2 : ");
    scanf("%d",&choice);
    switch (choice){
        case 1:
        printf("Enter temperature in Celsius :");
        scanf("%f",&temp);
        result = ((temp*9/5)+32);
        printf("%.2f Celsius = %.2f Fahrenheit \n",temp,result);
        break;
        case 2:
        printf("Enter temperature in Fahrenheit :");
        scanf("%f",&temp);
        result = ((temp - 32)*5/9);
        printf("%.2f Fahrenheit = %.2f Celsius \n",temp,result);
        break;
        default:
        printf("Invalid choice ! Please enter 1 or 2. \n");
    }return 0;
}