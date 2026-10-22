#include <stdio.h>
int main(){
    int row , col , i , j;
    printf("enter the row size of the array :");
    scanf("%d",&row);
    printf("enter the column size of the array :");
    scanf("%d",&col);
    int arr1[row][col],arr2[row][col];
    printf("Enter the elements of the array : \n");
    for (i = 0 ; i < row ; i++){
        for (j = 0 ; j < col ; j++){
            scanf("%d",&arr1[i][j]);
        }printf("\n");
    }for (i = 0 ; i < row ; i++){
        for (j = 0 ; j < col ; j++){
            arr2[i][j] = arr1[i][j];
        }
    }printf("Elements of the second array are : \n");
    for (i = 0 ; i < row ; i++){
        for (j = 0 ; j < col ; j++){
            printf("%d ",arr2[i][j]);
        }printf("\n");
    }return 0;
}