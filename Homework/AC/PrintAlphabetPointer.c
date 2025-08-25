#include<stdio.h>
int main(){
    char arr[26];
    for(int i=0;i<=25;i++){
        arr[i]=97+i;
    }
    char *ptr = &arr[0];
    for(int i=0;i<=25;i++){
        printf("%c\n",*ptr);
        ptr++;
    }
    
    
    }
