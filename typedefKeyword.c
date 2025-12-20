#include<stdio.h>
#include<string.h>
typedef float re;
typedef struct computerengineeringstudent{
        char name[100];
        int roll;
        re cgpa;
    }cse;
int main(){
    struct computerengineeringstudent s2;
    cse s1={"Darshan Jain",91,9.15};
    printf("%s --- %d --- %f ---",s1.name,s1.roll,s1.cgpa);
    return 0;
}