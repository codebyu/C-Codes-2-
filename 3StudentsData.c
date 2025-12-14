#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        char name[100];
        int roll;
        float cgpa;
    };
    struct student s2;
    struct student s1= {"Darshan",91,9.15};
    s2.roll=88;
    s2.cgpa=9.13;
    strcpy(s2.name,"Chinmay");
    struct student s3={"Divyanshi",105,9.85};
    struct student s4 ={0};
    printf("1st Student : \n");
    printf("Name : %s\n",s1.name);
    printf("Roll No. : %d\n",s1.roll);
    printf("CGPA : %f\n",s1.cgpa);
    printf("2nd Student : \n");
    printf("Name : %s\n",s2.name);
    printf("Roll No. : %d\n",s2.roll);
    printf("CGPA : %f\n",s2.cgpa);
    printf("3rd Student : \n");
    printf("Name : %s\n",s3.name);
    printf("Roll No. : %d\n",s3.roll);
    printf("CGPA : %f\n",s3.cgpa);
     printf("4rth Student : \n");
    printf("Name : %s\n",s4.name);
    printf("Roll No. : %d\n",s4.roll);
    printf("CGPA : %f\n",s4.cgpa);
    


    
}