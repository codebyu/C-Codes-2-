#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    fgets(str,100,stdin);
    int count=0;
    int j=0;
    while(str[j]!=0){
        count ++; j++;
    }
    for(int i =0;i<count;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
            str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        if(str[i]>=97&&str[i]<=123){
            int ascii;
            ascii=str[i];
            str[i]=ascii-('a'-'A');
        }
        
    }
    puts(str);
}