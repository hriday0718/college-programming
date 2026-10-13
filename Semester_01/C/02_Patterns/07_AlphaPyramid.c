#include <stdio.h>
int main(){
    int i , j ,n;
    char ch = 'A';
    printf("Enter the number of rows :");
    scanf("%d",&n);
    printf("The Pattern \n");
    for (i = 1; i <= n ; i++){
        char temp = ch;
        for (j = 1 ; j <= n-i+1 ; j++){
            printf("%c",temp);
            temp++;
        }printf("\n");
        ch+=2;
    }return 0;
}