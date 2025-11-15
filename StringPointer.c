#include<stdio.h>
int main(){
    char *str = "Hello World";   //pointer string can be reinitialized
    str= "New World";
    printf("%s",str);
    char arr[]="Array World"; // array string can  not be reinitialized
    printf("%s",arr);
}