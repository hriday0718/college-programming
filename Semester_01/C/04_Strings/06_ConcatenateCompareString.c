#include <stdio.h>
int main (){
    char str1[200] , str2[100];
    int i,j,length1 = 0,length2 = 0,same = 1;
    printf("Enter first string :");
    scanf("%s",str1);
    printf("Enter second string :");
    scanf("%s",str2);
    while(str1[length1] != '\0'){
        length1++;
    }while(str2[length2] != '\0'){
        length2++;
    }if(length1 != length2){
        same = 0;
    }else{
        for(i = 0 ; i < length1 ; i++){
            if(str1[i] != str2[i]){
                same = 0;
                break;
            }
        }
    }if(same == 1){
        printf("Both strings are same.");
    }else{
        printf("Strings are unequal.");
    }i = length1;
    for(j = 0 ; j < length2 ; j++){
        str1[i] = str2[j];
        i++;
    }str1[i] = '\0';
    printf("Concatenated string :%s\n",str1);
    return 0;
}