#include <stdio.h>
int main(){
    int ch,n,i,count = 0;
    printf("Enter 1 for prime check.\n");
    printf("Enter 2 for even check.\n");
    printf("Enter the number :");
    scanf("%d",&n);
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch){
        case 1 :
        for (i = 2;i < n/2;i++){
            if (n % i == 0){
                count ++;
            }
        }if (count == 0){
            printf("It is a prime number.\n");
        }else {
            printf("It isn't a prime number.\n");
        }break;
        case 2 :
        if(n % 2 == 0){
            printf("It is an even number.\n");
        }else{
            printf("It isn't an even number.\n");
        }
        break;
        default : printf("Invalid choice.\n");
        return 0;
    }
}