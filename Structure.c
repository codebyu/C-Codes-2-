#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        char name[100];
        int roll;
        float cgpa;
    };
    struct student s1,s2;
    strcpy(s1.name,"Suresh");
    s1.roll=33;
    s1.cgpa=9.6;
    strcpy(s2.name,"Rajesh");
    s2.roll = 34;
    s2.cgpa=8.4;
        printf("Name : %s\nRoll No.: %d\nCGPA : %f\n",s1.name,s1.roll,s1.cgpa);
        printf("Name : %s\nRoll No.: %d\nCGPA : %f\n",s2.name,s2.roll,s2.cgpa);
    for(int i=1;i<3;i++){
        printf("%d",si.roll);
    }
}