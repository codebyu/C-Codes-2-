#include<stdio.h> 
#include<string.h>
int main(){
    char name[50];
    char enroll[14];
    fgets(name,50,stdin);
    
    fgets(enroll,13,stdin);
    puts(name);
    puts(enroll);
}