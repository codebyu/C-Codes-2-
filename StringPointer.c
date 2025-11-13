#include<stdio.h>
int main(){
    char *str = "Hello World";
    str= "New World";
    printf("%s",str);
    char arr[]="Array World";
    arr[0] ="New Array World";
    printf("%s",arr);
}