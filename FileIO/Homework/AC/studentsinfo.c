#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr;
    fptr=fopen("StudentsData.txt","w");
    printf("Number of Students to Store : ");
    int n; scanf("%d",&n); getchar(); int len;
    fprintf(fptr,"%-19s|%-8s|%-8s|%-6s|\n","Name","Roll No.","CGPA","Course");
    char name[100]; int roll; float cgpa; char course[100];
    for(int i=1;i<=n;i++){
        printf("Enter Student %d Details \n",i);
        printf("Name : ");
        fgets(name,100,stdin);
        printf("Roll No. : ");
        scanf("%d",&roll);
        printf("CGPA : ");
        scanf("%f",&cgpa); getchar();
        printf("Course : ");
        fgets(course,100,stdin);
        name[strcspn(name,"\n")]=0;
        course[strcspn(course,"\n")]=0;
        fprintf(fptr,"%-19s|%-8d|%-8.2f|%-6s|\n",name,roll,cgpa,course);

        }
        fclose(fptr);
        

       
    }
