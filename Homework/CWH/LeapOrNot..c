#include<stdio.h>
int main(){
    int y;
    printf("Enter the year\n");
    scanf("%d",&y);
    if(y%4==0){
        if(y<2025)
        printf("It was a leap year\n");
        
        else
        printf("It will be a leap year");
        
    }
    else{
        if(y<=2025)
        printf("It was not a leap year\n");
        else
        printf("It will not be a leap year");
        
    }
}