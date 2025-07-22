#include<stdio.h>
int main(){
    float i;
    for( i = 1.2;i<=7.8;i=i+2.2){
        printf("%f\n",i);    }
    printf("%f",i);
    printf("\n");

    for(char ch='a';ch<='z';ch++){
        printf("%c\n",ch);
        printf("%c",'A');
    }
    
}