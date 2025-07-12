#include<stdio.h>
int main(){
    char ch;
    printf("Enter the letter to check\n");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){
        printf("Lower Case Letter\n");
    }
        else if(ch>='A'&&ch<='Z'){
            printf("Upper Case Letter\n");
        }
        else {
            printf("Not a english character\n");
        }
        return 0;
    
    }