#include<stdio.h>
int main(){
    char str[100];
    printf("Enter string : ");
    scanf("%d",str[0]);
    int i=1;
    for(i;str[i-1]!='\n';i++){
        scanf("%c",&str[i]);
    }
    str[i]='\0';
    printf("Final : ");
    puts(str);

}