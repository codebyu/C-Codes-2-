#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter string length :");
    int len;
    scanf("%d",&len); 
    
    for(int i=0;i<len;i++){
       scanf("%c",&str[i]);
    }
       for(int i=0;i<len;i++){
       printf("%c",str[i]);
    }
}