#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    s1.roll=91;
    s1.cgpa=9.15;
    strcpy(s1.name,"Darshan");
    struct student *ptr;
    ptr=&s1;
    printf("Name : %s\nRoll No.: %d\nCGPA : %f\n",(*ptr).name,(*ptr).roll,(*ptr).cgpa);
    printf("Name : %s\nRoll No.: %d\nCGPA : %f\n",ptr->name,ptr->roll,ptr->cgpa);
        return 0;
}