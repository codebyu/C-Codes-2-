#include<stdio.h>
int main(){
    char ch;
    printf("Enter the charcter : ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
        printf("Upper Case");
    }   
    else if(ch>='a'&&ch<='z')
    printf("Lower Case");

    else{
        printf("Not a alphabet ");
    }
}