#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        char name[100];
        int roll;
        float cgpa;
    };
    struct student cse[100];
    struct student ece[100];
    struct student it[100];
    cse[11].roll= 91;
    strcpy(ece[4].name,"Chinmay");
    printf("%d",cse[11].roll);
    printf("\n%s",ece[5].name);
    
}