#include <stdio.h>
int main(){
    int n , i ,j ;
    int evencount = 0 , oddcount = 0;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements :\n");
    for (i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }printf("Elements at even postion are : \n");
    for (i = 0 ; i < n ; i++){
        if((i+1)%2 == 0){
            printf("%d ",arr[i]);
            evencount++;
        }
    }printf("\nElements at odd positions are :\n");
    for (i = 0 ; i < n ; i++){
        if((i+1)%2 != 0){
            printf("%d ",arr[i]);
            oddcount++;
        }
    }printf("\neven position count : %d \n",evencount);
    printf("odd position count : %d \n",oddcount);
    return 0;
}