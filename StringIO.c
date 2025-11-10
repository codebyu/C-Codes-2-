#include<stdio.h>
int main(){
  
    char name[50]; char enroll[13];
    printf("Enter Your Name Please : ");
    gets(name);
    printf("Enter Your Enrollment No. Please : ");
    gets(enroll);
    printf("DONE\n");
    puts(name); puts(enroll);
    return 0;

}