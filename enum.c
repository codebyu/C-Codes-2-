#include<stdio.h>
int main(){
    enum Days {Mon=1,Tue,Wed,Thu,Fri,Sat,Sun};
    printf("Enter Day no. : ");
    int var;
    scanf("%d",&var);
    if(var==Mon){
        printf("Its Monday %d",Mon+5);
    }
 }