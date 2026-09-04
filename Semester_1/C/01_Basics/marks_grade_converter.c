#include <stdio.h>
int main(){
    float marks;
    printf("Enter the marks of the student : ");
    scanf("%f",&marks);
    if (marks <= 100 && marks >= 90){
        printf("Grade is O.\n");
    }else if(marks <= 89 && marks >=80){
        printf("Grade is E.\n");
    }else if(marks <= 79 && marks >=70){
        printf("Grade is A.\n");
    }else if(marks <= 69 && marks >=60){
        printf("Grade is B.\n");
    }else if(marks <= 59 && marks >=50){
        printf("Grade is C.\n");
    }else if(marks <= 49 && marks >=40){
        printf("Grade is D.\n");
    }else if(marks <= 39 && marks >=0){
        printf("Grade is F.\n");
    }else{
        ("Invalid marks input.\n");
    }return 0;
}