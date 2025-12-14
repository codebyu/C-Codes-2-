#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter the string : ");
    char str[100];
    fgets(str,100,stdin);
    int j=0;int count =0;
    while(str[j]!='\0'){
        count ++; j++;
    }
    count--;
    for(int i=0;i<count;i++){
    if(str[i]>='a'&&str[i]<='z'){
        str[i]=str[i]-('a'-'A');
    }
    else if(str[i]>='A'&&str[i]<='Z'){
        str[i]+=('a'-'A');
    }
    }
    printf("Here is the string : ");
    puts(str);
}