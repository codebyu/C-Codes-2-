#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter length of string : ");
    int length;
    scanf("%d",&length);
    char he;
    scanf("%c",&he);
    printf("Enter the string(by char) : ");

    char str1[1000]; 
    int i=0;
    for(i;i<length;i++){
        scanf("%c",&str1[i]);
    } 
    
  
    str1[i]='\0';
    
    char str2[1000];
    printf("Enter the string(by String) : ");
    scanf("%s",str2);
    puts(str1); puts(str2);
    printf("0 means equal  and other you know\nResult : %d",strcmp(str1,str2));
}