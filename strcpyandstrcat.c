#include<stdio.h>
#include<string.h>
int main(){
    char str1[]= "hello";
    char str2[]= "world";
    strcpy(str2,str1);
    puts(str2);
    char str11[100]= "hello ";
    char str22[]="world ";
    strcat(str11,str22);
    puts(str11);
}