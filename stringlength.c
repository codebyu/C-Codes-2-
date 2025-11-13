#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter name : ");
    fgets(str,50,stdin);
    int i=1; int count =0; // listen count is started from one bcoz fgets add \n first then \0 so \n counted extra but we do not want that 
        while(str[i]!='\0'){
        count++;
        ++i;
    } 
    printf("Length of the name : %d",count);

}