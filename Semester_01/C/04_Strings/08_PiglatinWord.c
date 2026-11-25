#include <stdio.h>
int main(){
    char str[100],result[200];
    int i , j ,length = 0 , vowel = -1;
    printf("Enter the word :");
    scanf("%s",str);
    while(str[length] != '\0'){
        length++;
    }for (i = 0 ; i < length ; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vowel = i;
            break;
        }
    }if(vowel == -1){
        printf("No vowel found.");
    }else{
        j = 0;
        for(i = vowel ; i < length ; i++){
            result[j] = str[i];
            j++;
        }for (i = 0 ; i < vowel ; i++){
            result[j] = str[i];
            j++;
        }result[j++] = 'a';
        result[j++] = 'y';
        result[j] = '\0';
        printf("Piglatin word : %s\n",result);
    }return 0;
}