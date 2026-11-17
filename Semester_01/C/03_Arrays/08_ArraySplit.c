#include <stdio.h>
int main (){
    int n , pos, i ;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : \n");
    for (i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }printf("Enter position to split :");
    scanf("%d",&pos);
    if(pos < 1 || pos > n){
        printf("Invalid Position. \n");
    }printf("First part : \n");
    for (i = 0 ; i < pos ; i++){
        printf("%d ",arr[i]);
    }printf("\nSecond Part : \n");
    for (i = pos ; i < n ; i++){
        printf("%d ",arr[i]);
    }printf("\n");
    return 0;
}