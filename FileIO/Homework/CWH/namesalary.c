#include<stdio.h>
#include<string.h>
int main(){
    FILE*fptr;
    fptr=fopen("employeedata.txt","w");
    char name[100];
    int salary;
    for(int i=0;i<2;i++){
        if(i==1) getchar();
    printf("Enter employee %d name : ",i+1);
    fgets(name,100,stdin);
    printf("Enter Salary : ");
    scanf("%d",&salary);
    name[strcspn(name,"\n")]='\0';
    fprintf(fptr,"%s, %d\n",name,salary);
    }
}