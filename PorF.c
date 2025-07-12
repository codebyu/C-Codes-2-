#include<stdio.h>
int main(){
    int n;
    printf("Enter the student's marks to check pass or fail status\n");
    scanf("%d",&n);
    if(n>=30&&n<=100){
        printf("Passed Woohoo!! \n");
    }
    else if(n<30){
        printf("Failed \n");
    }
    else {
        printf("Invalid Marks ");
    }
    
    //also 
    n>=30?printf("Passed") : printf("Failed");
}