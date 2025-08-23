#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    char n= 'a';
    char *demo=&n; // ye galat hai int *demo=&n; 
    printf("%c",*demo); 
    // character type ka variable hai to uske liye pointer bhi datatype character 
    
}