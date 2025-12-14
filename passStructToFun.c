#include<stdio.h>
#include<string.h>
struct student{
        char name[100];
        int roll;
        float cgpa;
    };
    void printInfo(struct student s1);
int main(){
    struct student s1 ={"Darshan Jain",91,9.15};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1){
    struct student *ptr;
    ptr=&s1;
    printf("Name : %s\nRoll No.:%d\nCGPA : %f",s1.name,s1.roll,s1.cgpa);
    printf("\nName : %s\nRoll No.: %d\nCGPA : %f",ptr->name,ptr->roll,ptr->cgpa);
}