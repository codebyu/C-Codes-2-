#include<stdio.h>
int main(){
    char str[100];
    int i =0;
char ch;  
    while(ch!='\n'){
        scanf("%c",&ch);
        str[i]=ch;
        i++;    
    }
    str[i]='\0';
    puts(str);
}