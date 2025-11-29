#include<stdio.h>
int strlen(char arr[]){
    int i=0; int count =0;
    while(arr[i]!='\0'){
        count ++; i++;
    }
    return count-1;
}
int main(){
    char str[100];

    printf("Enter string : ");
    fgets(str,100,stdin);
    printf("Detected String length : %d",strlen(str));
}