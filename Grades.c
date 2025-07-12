#include<stdio.h>
int main(){
    int m;
    printf("Enter the student's marks to check his/her grade\n");
    scanf("%d",&m);
    if(m<30&&m>=0){
        printf("Grade is C");
    }else if(70>m&&m>=30){
        printf("Grade is B");
    } else if(70<=m&&m<90){
        printf("Grade is A");
    } else if(90<=m&&m<=100){
        printf("Grade is A+ Yeeeee...");
    }
    else{
        printf("Invalid marks");
    }
    return 0;
}